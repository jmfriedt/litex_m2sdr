#
# This file is part of LiteX-M2SDR.
#
# Copyright (c) 2024 Enjoy-Digital <enjoy-digital.fr>
# SPDX-License-Identifier: BSD-2-Clause

from migen import *

from litex.gen import *

from litex.soc.interconnect.csr import *

# SPIMaster ----------------------------------------------------------------------------------------

class SPIMaster(LiteXModule):
    def __init__(self, pads, width=24, div=2, cpha=1):
        self.pads = pads

        self._ctrl   = CSR(16)
        self._status = CSRStatus(4)
        self._mosi   = CSRStorage(width)
        self._miso   = CSRStatus(width)

        self.irq = Signal()

        # # #

        # Ctrl -------------------------------------------------------------------------------------
        start        = Signal()
        length       = Signal(8)
        enable_cs    = Signal()
        enable_shift = Signal()
        done         = Signal()

        self.comb += [
            start.eq(self._ctrl.re & self._ctrl.r[0]),
            self._status.status.eq(done)
        ]
        self.sync += \
            If(self._ctrl.re, length.eq(self._ctrl.r[8:16]))


        # CLK --------------------------------------------------------------------------------------
        i       = Signal(max=div)
        clk_en  = Signal()
        set_clk = Signal()
        clr_clk = Signal()
        self.sync += [
            If(set_clk,
                pads.clk.eq(enable_cs)
            ),
            If(clr_clk,
                pads.clk.eq(0),
                i.eq(0)
            ).Else(
                i.eq(i + 1),
            )
        ]

        self.comb +=[
            set_clk.eq(i==div//2-1),
            clr_clk.eq(i==div-1)
        ]

         # FSM -------------------------------------------------------------------------------------
        cnt     = Signal(8)
        clr_cnt = Signal()
        inc_cnt = Signal()
        self.sync += \
            If(clr_cnt,
                cnt.eq(0)
            ).Elif(inc_cnt,
                cnt.eq(cnt+1)
            )

        self.fsm = fsm = FSM(reset_state="IDLE")
        fsm.act("IDLE",
            If(start,
                NextState("WAIT_CLK")
            ),
            done.eq(1),
            clr_cnt.eq(1)
        )
        fsm.act("WAIT_CLK",
            If(clr_clk,
                NextState("SHIFT")
            ),
        )
        fsm.act("SHIFT",
            If(cnt == length,
                NextState("END")
            ).Else(
                inc_cnt.eq(clr_clk),
            ),
            enable_cs.eq(1),
            enable_shift.eq(1),
        )
        fsm.act("END",
            If(set_clk,
                NextState("IDLE")
            ),
            enable_shift.eq(1),
            self.irq.eq(1)
        )

        # MISO -------------------------------------------------------------------------------------
        miso    = Signal()
        sr_miso = Signal(width)

        # (cpha = 1: capture on clk falling edge)
        if cpha:
            self.sync += \
                If(enable_shift,
                    If(clr_clk,
                        miso.eq(pads.miso),
                    ).Elif(set_clk,
                        sr_miso.eq(Cat(miso, sr_miso[:-1]))
                    )
                )
        # (cpha = 0: capture on clk rising edge)
        else:
            self.sync += \
                If(enable_shift,
                    If(set_clk,
                        miso.eq(pads.miso),
                    ).Elif(clr_clk,
                        sr_miso.eq(Cat(miso, sr_miso[:-1]))
                    )
                )
        self.comb += self._miso.status.eq(sr_miso)

        # MOSI -------------------------------------------------------------------------------------
        mosi    = Signal()
        sr_mosi = Signal(width)

        # (cpha = 1: propagated on clk rising edge)
        if cpha:
            self.sync += \
                If(start,
                    sr_mosi.eq(self._mosi.storage)
                ).Elif(clr_clk & enable_shift,
                    sr_mosi.eq(Cat(Signal(), sr_mosi[:-1]))
                ).Elif(set_clk,
                    pads.mosi.eq(sr_mosi[-1])
                )

        # (cpha = 0: propagated on clk falling edge)
        else:
            self.sync += [
                If(start,
                    sr_mosi.eq(self._mosi.storage)
                ).Elif(set_clk & enable_shift,
                    sr_mosi.eq(Cat(Signal(), sr_mosi[:-1]))
                ).Elif(clr_clk,
                    pads.mosi.eq(sr_mosi[-1])
                )
            ]

        # CS_n -------------------------------------------------------------------------------------
        self.comb += pads.cs_n.eq(~enable_cs)
