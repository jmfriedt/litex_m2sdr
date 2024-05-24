//--------------------------------------------------------------------------------
// Auto-generated by LiteX (14dbdeb0) on 2024-05-24 13:07:26
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
// CSR Includes.
//--------------------------------------------------------------------------------

#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H

//--------------------------------------------------------------------------------
// CSR Registers/Fields Definition.
//--------------------------------------------------------------------------------

/* ICAP Registers */
#define CSR_ICAP_BASE 0x800L
#define CSR_ICAP_ADDR_ADDR 0x800L
#define CSR_ICAP_ADDR_SIZE 1
#define CSR_ICAP_DATA_ADDR 0x804L
#define CSR_ICAP_DATA_SIZE 1
#define CSR_ICAP_WRITE_ADDR 0x808L
#define CSR_ICAP_WRITE_SIZE 1
#define CSR_ICAP_DONE_ADDR 0x80cL
#define CSR_ICAP_DONE_SIZE 1
#define CSR_ICAP_READ_ADDR 0x810L
#define CSR_ICAP_READ_SIZE 1

/* ICAP Fields */

/* XADC Registers */
#define CSR_XADC_BASE 0x1800L
#define CSR_XADC_TEMPERATURE_ADDR 0x1800L
#define CSR_XADC_TEMPERATURE_SIZE 1
#define CSR_XADC_VCCINT_ADDR 0x1804L
#define CSR_XADC_VCCINT_SIZE 1
#define CSR_XADC_VCCAUX_ADDR 0x1808L
#define CSR_XADC_VCCAUX_SIZE 1
#define CSR_XADC_VCCBRAM_ADDR 0x180cL
#define CSR_XADC_VCCBRAM_SIZE 1
#define CSR_XADC_EOC_ADDR 0x1810L
#define CSR_XADC_EOC_SIZE 1
#define CSR_XADC_EOS_ADDR 0x1814L
#define CSR_XADC_EOS_SIZE 1

/* XADC Fields */

/* DNA Registers */
#define CSR_DNA_BASE 0x2000L
#define CSR_DNA_ID_ADDR 0x2000L
#define CSR_DNA_ID_SIZE 2

/* DNA Fields */

/* CLK0_MEASUREMENT Registers */
#define CSR_CLK0_MEASUREMENT_BASE 0x2800L
#define CSR_CLK0_MEASUREMENT_LATCH_ADDR 0x2800L
#define CSR_CLK0_MEASUREMENT_LATCH_SIZE 1
#define CSR_CLK0_MEASUREMENT_VALUE_ADDR 0x2804L
#define CSR_CLK0_MEASUREMENT_VALUE_SIZE 2

/* CLK0_MEASUREMENT Fields */

/* CLK1_MEASUREMENT Registers */
#define CSR_CLK1_MEASUREMENT_BASE 0x3000L
#define CSR_CLK1_MEASUREMENT_LATCH_ADDR 0x3000L
#define CSR_CLK1_MEASUREMENT_LATCH_SIZE 1
#define CSR_CLK1_MEASUREMENT_VALUE_ADDR 0x3004L
#define CSR_CLK1_MEASUREMENT_VALUE_SIZE 2

/* CLK1_MEASUREMENT Fields */

/* CLK2_MEASUREMENT Registers */
#define CSR_CLK2_MEASUREMENT_BASE 0x3800L
#define CSR_CLK2_MEASUREMENT_LATCH_ADDR 0x3800L
#define CSR_CLK2_MEASUREMENT_LATCH_SIZE 1
#define CSR_CLK2_MEASUREMENT_VALUE_ADDR 0x3804L
#define CSR_CLK2_MEASUREMENT_VALUE_SIZE 2

/* CLK2_MEASUREMENT Fields */

/* CLK3_MEASUREMENT Registers */
#define CSR_CLK3_MEASUREMENT_BASE 0x4000L
#define CSR_CLK3_MEASUREMENT_LATCH_ADDR 0x4000L
#define CSR_CLK3_MEASUREMENT_LATCH_SIZE 1
#define CSR_CLK3_MEASUREMENT_VALUE_ADDR 0x4004L
#define CSR_CLK3_MEASUREMENT_VALUE_SIZE 2

/* CLK3_MEASUREMENT Fields */

/* CTRL Registers */
#define CSR_CTRL_BASE 0x4800L
#define CSR_CTRL_RESET_ADDR 0x4800L
#define CSR_CTRL_RESET_SIZE 1
#define CSR_CTRL_SCRATCH_ADDR 0x4804L
#define CSR_CTRL_SCRATCH_SIZE 1
#define CSR_CTRL_BUS_ERRORS_ADDR 0x4808L
#define CSR_CTRL_BUS_ERRORS_SIZE 1

/* CTRL Fields */
#define CSR_CTRL_RESET_SOC_RST_OFFSET 0
#define CSR_CTRL_RESET_SOC_RST_SIZE 1
#define CSR_CTRL_RESET_CPU_RST_OFFSET 1
#define CSR_CTRL_RESET_CPU_RST_SIZE 1

/* PCIE_PHY Registers */
#define CSR_PCIE_PHY_BASE 0x5000L
#define CSR_PCIE_PHY_PHY_LINK_STATUS_ADDR 0x5000L
#define CSR_PCIE_PHY_PHY_LINK_STATUS_SIZE 1
#define CSR_PCIE_PHY_PHY_MSI_ENABLE_ADDR 0x5004L
#define CSR_PCIE_PHY_PHY_MSI_ENABLE_SIZE 1
#define CSR_PCIE_PHY_PHY_MSIX_ENABLE_ADDR 0x5008L
#define CSR_PCIE_PHY_PHY_MSIX_ENABLE_SIZE 1
#define CSR_PCIE_PHY_PHY_BUS_MASTER_ENABLE_ADDR 0x500cL
#define CSR_PCIE_PHY_PHY_BUS_MASTER_ENABLE_SIZE 1
#define CSR_PCIE_PHY_PHY_MAX_REQUEST_SIZE_ADDR 0x5010L
#define CSR_PCIE_PHY_PHY_MAX_REQUEST_SIZE_SIZE 1
#define CSR_PCIE_PHY_PHY_MAX_PAYLOAD_SIZE_ADDR 0x5014L
#define CSR_PCIE_PHY_PHY_MAX_PAYLOAD_SIZE_SIZE 1

/* PCIE_PHY Fields */
#define CSR_PCIE_PHY_PHY_LINK_STATUS_STATUS_OFFSET 0
#define CSR_PCIE_PHY_PHY_LINK_STATUS_STATUS_SIZE 1
#define CSR_PCIE_PHY_PHY_LINK_STATUS_RATE_OFFSET 1
#define CSR_PCIE_PHY_PHY_LINK_STATUS_RATE_SIZE 1
#define CSR_PCIE_PHY_PHY_LINK_STATUS_WIDTH_OFFSET 2
#define CSR_PCIE_PHY_PHY_LINK_STATUS_WIDTH_SIZE 2
#define CSR_PCIE_PHY_PHY_LINK_STATUS_LTSSM_OFFSET 4
#define CSR_PCIE_PHY_PHY_LINK_STATUS_LTSSM_SIZE 6

/* PCIE_MSI Registers */
#define CSR_PCIE_MSI_BASE 0x5800L
#define CSR_PCIE_MSI_ENABLE_ADDR 0x5800L
#define CSR_PCIE_MSI_ENABLE_SIZE 1
#define CSR_PCIE_MSI_CLEAR_ADDR 0x5804L
#define CSR_PCIE_MSI_CLEAR_SIZE 1
#define CSR_PCIE_MSI_VECTOR_ADDR 0x5808L
#define CSR_PCIE_MSI_VECTOR_SIZE 1

/* PCIE_MSI Fields */

/* PCIE_DMA0 Registers */
#define CSR_PCIE_DMA0_BASE 0x6000L
#define CSR_PCIE_DMA0_WRITER_ENABLE_ADDR 0x6000L
#define CSR_PCIE_DMA0_WRITER_ENABLE_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_ADDR 0x6004L
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_SIZE 2
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_ADDR 0x600cL
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_PROG_N_ADDR 0x6010L
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_PROG_N_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_ADDR 0x6014L
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_LEVEL_ADDR 0x6018L
#define CSR_PCIE_DMA0_WRITER_TABLE_LEVEL_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_RESET_ADDR 0x601cL
#define CSR_PCIE_DMA0_WRITER_TABLE_RESET_SIZE 1
#define CSR_PCIE_DMA0_READER_ENABLE_ADDR 0x6020L
#define CSR_PCIE_DMA0_READER_ENABLE_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_ADDR 0x6024L
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_SIZE 2
#define CSR_PCIE_DMA0_READER_TABLE_WE_ADDR 0x602cL
#define CSR_PCIE_DMA0_READER_TABLE_WE_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_PROG_N_ADDR 0x6030L
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_PROG_N_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_ADDR 0x6034L
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_LEVEL_ADDR 0x6038L
#define CSR_PCIE_DMA0_READER_TABLE_LEVEL_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_RESET_ADDR 0x603cL
#define CSR_PCIE_DMA0_READER_TABLE_RESET_SIZE 1
#define CSR_PCIE_DMA0_LOOPBACK_ENABLE_ADDR 0x6040L
#define CSR_PCIE_DMA0_LOOPBACK_ENABLE_SIZE 1
#define CSR_PCIE_DMA0_SYNCHRONIZER_BYPASS_ADDR 0x6044L
#define CSR_PCIE_DMA0_SYNCHRONIZER_BYPASS_SIZE 1
#define CSR_PCIE_DMA0_SYNCHRONIZER_ENABLE_ADDR 0x6048L
#define CSR_PCIE_DMA0_SYNCHRONIZER_ENABLE_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_ADDR 0x604cL
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_ADDR 0x6050L
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_ADDR 0x6054L
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_ADDR 0x6058L
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_SIZE 1

/* PCIE_DMA0 Fields */
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_ADDRESS_LSB_OFFSET 0
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_ADDRESS_LSB_SIZE 32
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_LENGTH_OFFSET 32
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_LENGTH_SIZE 24
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_IRQ_DISABLE_OFFSET 56
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_IRQ_DISABLE_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_LAST_DISABLE_OFFSET 57
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_LAST_DISABLE_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_ADDRESS_MSB_OFFSET 0
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_ADDRESS_MSB_SIZE 32
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_INDEX_OFFSET 0
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_INDEX_SIZE 16
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_COUNT_OFFSET 16
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_COUNT_SIZE 16
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_ADDRESS_LSB_OFFSET 0
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_ADDRESS_LSB_SIZE 32
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_LENGTH_OFFSET 32
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_LENGTH_SIZE 24
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_IRQ_DISABLE_OFFSET 56
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_IRQ_DISABLE_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_LAST_DISABLE_OFFSET 57
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_LAST_DISABLE_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_WE_ADDRESS_MSB_OFFSET 0
#define CSR_PCIE_DMA0_READER_TABLE_WE_ADDRESS_MSB_SIZE 32
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_INDEX_OFFSET 0
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_INDEX_SIZE 16
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_COUNT_OFFSET 16
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_COUNT_SIZE 16
#define CSR_PCIE_DMA0_SYNCHRONIZER_ENABLE_MODE_OFFSET 0
#define CSR_PCIE_DMA0_SYNCHRONIZER_ENABLE_MODE_SIZE 2
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_DEPTH_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_DEPTH_SIZE 24
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_SCRATCH_OFFSET 24
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_SCRATCH_SIZE 4
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_LEVEL_MODE_OFFSET 31
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_LEVEL_MODE_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_LEVEL_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_LEVEL_SIZE 24
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_DEPTH_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_DEPTH_SIZE 24
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_SCRATCH_OFFSET 24
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_SCRATCH_SIZE 4
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_LEVEL_MODE_OFFSET 31
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_LEVEL_MODE_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_LEVEL_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_LEVEL_SIZE 24

/* IDENTIFIER_MEM Registers */
#define CSR_IDENTIFIER_MEM_BASE 0x6800L

/* IDENTIFIER_MEM Fields */

/* LEDS Registers */
#define CSR_LEDS_BASE 0x7000L
#define CSR_LEDS_OUT_ADDR 0x7000L
#define CSR_LEDS_OUT_SIZE 1

/* LEDS Fields */

/* PCIE_ENDPOINT Registers */
#define CSR_PCIE_ENDPOINT_BASE 0x7800L
#define CSR_PCIE_ENDPOINT_PHY_LINK_STATUS_ADDR 0x7800L
#define CSR_PCIE_ENDPOINT_PHY_LINK_STATUS_SIZE 1
#define CSR_PCIE_ENDPOINT_PHY_MSI_ENABLE_ADDR 0x7804L
#define CSR_PCIE_ENDPOINT_PHY_MSI_ENABLE_SIZE 1
#define CSR_PCIE_ENDPOINT_PHY_MSIX_ENABLE_ADDR 0x7808L
#define CSR_PCIE_ENDPOINT_PHY_MSIX_ENABLE_SIZE 1
#define CSR_PCIE_ENDPOINT_PHY_BUS_MASTER_ENABLE_ADDR 0x780cL
#define CSR_PCIE_ENDPOINT_PHY_BUS_MASTER_ENABLE_SIZE 1
#define CSR_PCIE_ENDPOINT_PHY_MAX_REQUEST_SIZE_ADDR 0x7810L
#define CSR_PCIE_ENDPOINT_PHY_MAX_REQUEST_SIZE_SIZE 1
#define CSR_PCIE_ENDPOINT_PHY_MAX_PAYLOAD_SIZE_ADDR 0x7814L
#define CSR_PCIE_ENDPOINT_PHY_MAX_PAYLOAD_SIZE_SIZE 1

/* PCIE_ENDPOINT Fields */
#define CSR_PCIE_ENDPOINT_PHY_LINK_STATUS_STATUS_OFFSET 0
#define CSR_PCIE_ENDPOINT_PHY_LINK_STATUS_STATUS_SIZE 1
#define CSR_PCIE_ENDPOINT_PHY_LINK_STATUS_RATE_OFFSET 1
#define CSR_PCIE_ENDPOINT_PHY_LINK_STATUS_RATE_SIZE 1
#define CSR_PCIE_ENDPOINT_PHY_LINK_STATUS_WIDTH_OFFSET 2
#define CSR_PCIE_ENDPOINT_PHY_LINK_STATUS_WIDTH_SIZE 2
#define CSR_PCIE_ENDPOINT_PHY_LINK_STATUS_LTSSM_OFFSET 4
#define CSR_PCIE_ENDPOINT_PHY_LINK_STATUS_LTSSM_SIZE 6

/* SI5351_I2C Registers */
#define CSR_SI5351_I2C_BASE 0x8000L
#define CSR_SI5351_I2C_W_ADDR 0x8000L
#define CSR_SI5351_I2C_W_SIZE 1
#define CSR_SI5351_I2C_R_ADDR 0x8004L
#define CSR_SI5351_I2C_R_SIZE 1

/* SI5351_I2C Fields */
#define CSR_SI5351_I2C_W_SCL_OFFSET 0
#define CSR_SI5351_I2C_W_SCL_SIZE 1
#define CSR_SI5351_I2C_W_OE_OFFSET 1
#define CSR_SI5351_I2C_W_OE_SIZE 1
#define CSR_SI5351_I2C_W_SDA_OFFSET 2
#define CSR_SI5351_I2C_W_SDA_SIZE 1
#define CSR_SI5351_I2C_R_SDA_OFFSET 0
#define CSR_SI5351_I2C_R_SDA_SIZE 1

/* SI5351_PWM Registers */
#define CSR_SI5351_PWM_BASE 0x8800L
#define CSR_SI5351_PWM_ENABLE_ADDR 0x8800L
#define CSR_SI5351_PWM_ENABLE_SIZE 1
#define CSR_SI5351_PWM_WIDTH_ADDR 0x8804L
#define CSR_SI5351_PWM_WIDTH_SIZE 1
#define CSR_SI5351_PWM_PERIOD_ADDR 0x8808L
#define CSR_SI5351_PWM_PERIOD_SIZE 1

/* SI5351_PWM Fields */

/* TIMESTAMP Registers */
#define CSR_TIMESTAMP_BASE 0xa000L
#define CSR_TIMESTAMP_CONTROL_ADDR 0xa000L
#define CSR_TIMESTAMP_CONTROL_SIZE 1
#define CSR_TIMESTAMP_RATE_ADDR 0xa004L
#define CSR_TIMESTAMP_RATE_SIZE 1
#define CSR_TIMESTAMP_LATCH_TIME_ADDR 0xa008L
#define CSR_TIMESTAMP_LATCH_TIME_SIZE 2
#define CSR_TIMESTAMP_SET_TIME_ADDR 0xa010L
#define CSR_TIMESTAMP_SET_TIME_SIZE 2

/* TIMESTAMP Fields */
#define CSR_TIMESTAMP_CONTROL_ENABLE_OFFSET 0
#define CSR_TIMESTAMP_CONTROL_ENABLE_SIZE 1
#define CSR_TIMESTAMP_CONTROL_LATCH_OFFSET 1
#define CSR_TIMESTAMP_CONTROL_LATCH_SIZE 1
#define CSR_TIMESTAMP_CONTROL_SET_OFFSET 2
#define CSR_TIMESTAMP_CONTROL_SET_SIZE 1

/* HEADER Registers */
#define CSR_HEADER_BASE 0xa800L
#define CSR_HEADER_TX_CONTROL_ADDR 0xa800L
#define CSR_HEADER_TX_CONTROL_SIZE 1
#define CSR_HEADER_TX_FRAME_CYCLES_ADDR 0xa804L
#define CSR_HEADER_TX_FRAME_CYCLES_SIZE 1
#define CSR_HEADER_RX_CONTROL_ADDR 0xa808L
#define CSR_HEADER_RX_CONTROL_SIZE 1
#define CSR_HEADER_RX_FRAME_CYCLES_ADDR 0xa80cL
#define CSR_HEADER_RX_FRAME_CYCLES_SIZE 1
#define CSR_HEADER_LAST_TX_HEADER_ADDR 0xa810L
#define CSR_HEADER_LAST_TX_HEADER_SIZE 2
#define CSR_HEADER_LAST_TX_TIMESTAMP_ADDR 0xa818L
#define CSR_HEADER_LAST_TX_TIMESTAMP_SIZE 2
#define CSR_HEADER_LAST_RX_HEADER_ADDR 0xa820L
#define CSR_HEADER_LAST_RX_HEADER_SIZE 2
#define CSR_HEADER_LAST_RX_TIMESTAMP_ADDR 0xa828L
#define CSR_HEADER_LAST_RX_TIMESTAMP_SIZE 2

/* HEADER Fields */
#define CSR_HEADER_TX_CONTROL_ENABLE_OFFSET 0
#define CSR_HEADER_TX_CONTROL_ENABLE_SIZE 1
#define CSR_HEADER_TX_CONTROL_HEADER_ENABLE_OFFSET 1
#define CSR_HEADER_TX_CONTROL_HEADER_ENABLE_SIZE 1
#define CSR_HEADER_RX_CONTROL_ENABLE_OFFSET 0
#define CSR_HEADER_RX_CONTROL_ENABLE_SIZE 1
#define CSR_HEADER_RX_CONTROL_HEADER_ENABLE_OFFSET 1
#define CSR_HEADER_RX_CONTROL_HEADER_ENABLE_SIZE 1

/* AD9361 Registers */
#define CSR_AD9361_BASE 0xb000L
#define CSR_AD9361_CONFIG_ADDR 0xb000L
#define CSR_AD9361_CONFIG_SIZE 1
#define CSR_AD9361_CTRL_ADDR 0xb004L
#define CSR_AD9361_CTRL_SIZE 1
#define CSR_AD9361_STAT_ADDR 0xb008L
#define CSR_AD9361_STAT_SIZE 1
#define CSR_AD9361_PHY_CONTROL_ADDR 0xb00cL
#define CSR_AD9361_PHY_CONTROL_SIZE 1
#define CSR_AD9361_SPI_CONTROL_ADDR 0xb010L
#define CSR_AD9361_SPI_CONTROL_SIZE 1
#define CSR_AD9361_SPI_STATUS_ADDR 0xb014L
#define CSR_AD9361_SPI_STATUS_SIZE 1
#define CSR_AD9361_SPI_MOSI_ADDR 0xb018L
#define CSR_AD9361_SPI_MOSI_SIZE 1
#define CSR_AD9361_SPI_MISO_ADDR 0xb01cL
#define CSR_AD9361_SPI_MISO_SIZE 1
#define CSR_AD9361_PRBS_TX_ADDR 0xb020L
#define CSR_AD9361_PRBS_TX_SIZE 1
#define CSR_AD9361_PRBS_RX_ADDR 0xb024L
#define CSR_AD9361_PRBS_RX_SIZE 1

/* AD9361 Fields */
#define CSR_AD9361_CONFIG_RST_N_OFFSET 0
#define CSR_AD9361_CONFIG_RST_N_SIZE 1
#define CSR_AD9361_CONFIG_ENABLE_OFFSET 1
#define CSR_AD9361_CONFIG_ENABLE_SIZE 1
#define CSR_AD9361_CONFIG_TXNRX_OFFSET 4
#define CSR_AD9361_CONFIG_TXNRX_SIZE 1
#define CSR_AD9361_CONFIG_EN_AGC_OFFSET 5
#define CSR_AD9361_CONFIG_EN_AGC_SIZE 1
#define CSR_AD9361_CTRL_CTRL_OFFSET 0
#define CSR_AD9361_CTRL_CTRL_SIZE 4
#define CSR_AD9361_STAT_STAT_OFFSET 0
#define CSR_AD9361_STAT_STAT_SIZE 8
#define CSR_AD9361_PHY_CONTROL_MODE_OFFSET 0
#define CSR_AD9361_PHY_CONTROL_MODE_SIZE 1
#define CSR_AD9361_PHY_CONTROL_LOOPBACK_OFFSET 1
#define CSR_AD9361_PHY_CONTROL_LOOPBACK_SIZE 1
#define CSR_AD9361_SPI_CONTROL_START_OFFSET 0
#define CSR_AD9361_SPI_CONTROL_START_SIZE 1
#define CSR_AD9361_SPI_CONTROL_LENGTH_OFFSET 8
#define CSR_AD9361_SPI_CONTROL_LENGTH_SIZE 8
#define CSR_AD9361_SPI_STATUS_DONE_OFFSET 0
#define CSR_AD9361_SPI_STATUS_DONE_SIZE 1
#define CSR_AD9361_PRBS_TX_ENABLE_OFFSET 0
#define CSR_AD9361_PRBS_TX_ENABLE_SIZE 1
#define CSR_AD9361_PRBS_RX_SYNCED_OFFSET 0
#define CSR_AD9361_PRBS_RX_SYNCED_SIZE 1

/* ANALYZER Registers */
#define CSR_ANALYZER_BASE 0xf000L
#define CSR_ANALYZER_MUX_VALUE_ADDR 0xf000L
#define CSR_ANALYZER_MUX_VALUE_SIZE 1
#define CSR_ANALYZER_TRIGGER_ENABLE_ADDR 0xf004L
#define CSR_ANALYZER_TRIGGER_ENABLE_SIZE 1
#define CSR_ANALYZER_TRIGGER_DONE_ADDR 0xf008L
#define CSR_ANALYZER_TRIGGER_DONE_SIZE 1
#define CSR_ANALYZER_TRIGGER_MEM_WRITE_ADDR 0xf00cL
#define CSR_ANALYZER_TRIGGER_MEM_WRITE_SIZE 1
#define CSR_ANALYZER_TRIGGER_MEM_MASK_ADDR 0xf010L
#define CSR_ANALYZER_TRIGGER_MEM_MASK_SIZE 4
#define CSR_ANALYZER_TRIGGER_MEM_VALUE_ADDR 0xf020L
#define CSR_ANALYZER_TRIGGER_MEM_VALUE_SIZE 4
#define CSR_ANALYZER_TRIGGER_MEM_FULL_ADDR 0xf030L
#define CSR_ANALYZER_TRIGGER_MEM_FULL_SIZE 1
#define CSR_ANALYZER_SUBSAMPLER_VALUE_ADDR 0xf034L
#define CSR_ANALYZER_SUBSAMPLER_VALUE_SIZE 1
#define CSR_ANALYZER_STORAGE_ENABLE_ADDR 0xf038L
#define CSR_ANALYZER_STORAGE_ENABLE_SIZE 1
#define CSR_ANALYZER_STORAGE_DONE_ADDR 0xf03cL
#define CSR_ANALYZER_STORAGE_DONE_SIZE 1
#define CSR_ANALYZER_STORAGE_LENGTH_ADDR 0xf040L
#define CSR_ANALYZER_STORAGE_LENGTH_SIZE 1
#define CSR_ANALYZER_STORAGE_OFFSET_ADDR 0xf044L
#define CSR_ANALYZER_STORAGE_OFFSET_SIZE 1
#define CSR_ANALYZER_STORAGE_MEM_LEVEL_ADDR 0xf048L
#define CSR_ANALYZER_STORAGE_MEM_LEVEL_SIZE 1
#define CSR_ANALYZER_STORAGE_MEM_DATA_ADDR 0xf04cL
#define CSR_ANALYZER_STORAGE_MEM_DATA_SIZE 1

/* ANALYZER Fields */

#endif /* ! __GENERATED_CSR_H */
