#ifndef __NPD_SFP_DDM_H__
#define __NPD_SFP_DDM_H__

enum sfp_alarm_type_e {
	SFP_NO_ALARM,
	SFP_TX_FAULT,
	SFP_RX_LOS,
	SFP_DATA_READY,
	SFP_TEMP_HIGH,
	SFP_TEMP_LOW,
	SFP_VOLTAGE_HIGH,
	SFP_VOLTAGE_LOW,
	SFP_TX_BIAS_HIGH,
	SFP_TX_BIAS_LOW,
	SFP_TX_POWER_HIGH,
	SFP_TX_POWER_LOW,
	SFP_RX_POWER_HIGH,
	SFP_RX_POWER_LOW,
	SFP_IO_ERROR,
	SFP_CHECKSUM_ERROR,
	SFP_MISMATCH_ERROR,
	SFP_TYPE_UNSUPPORT
};

//enum qsfp_alarm_type_e {
	
//};

//enum sfp_transceiver_type_e {
	
//};

//enum qsfp_transceiver_type_e {
	
//};

enum sfp_connector_type_e {
	SFP_INVALID,
	SFP_SC,
	SFP_LC,
	SFP_RJ45
};

//enum qsfp_connector_type_e {
	
//};

enum sfp_transmission_media_e {
	SFP_TP,
	SFP_M6,
	SFP_M5,
	SFP_SM
};

/* A0 */
#define SFP_A0H_IDENTIFIER_OFFSET 0
#define SFP_A0H_IDENTIFIER_SIZE 1

#define SFP_A0H_EXT_IDENTIFIER_OFFSET 1
#define SFP_A0H_EXT_IDENTIFIER_SIZE 1

#define SFP_A0H_CONNECTOR_OFFSET 2
#define SFP_A0H_CONNECTOR_SIZE 1

#define SFP_A0H_TRANSCEIVER_DESCR_OFFSET 3
#define SFP_A0H_TRANSCEIVER_DESCR_SIZE 8

#define SFP_A0H_ENCODING_OFFSET 11
#define SFP_A0H_ENCODING_SIZE 1

#define SFP_A0H_NOMINAL_BIT_RATE_OFFSET 12
#define SFP_A0H_NOMINAL_BIT_RATE_SIZE 1

#define SFP_A0H_RATE_IDENTIFIER_OFFSET 13
#define SFP_A0H_RATE_IDENTIFIER_SIZE 1

#define SFP_A0H_LENGTH_SMF_KM_OFFSET 14
#define SFP_A0H_LENGTH_SMF_KM_SIZE 1

#define SFP_A0H_LENGTH_SMF_100M_OFFSET 15
#define SFP_A0H_LENGTH_SMF_100M_SIZE 1

#define SFP_A0H_LENGTH_OM2_10M_OFFSET 16
#define SFP_A0H_LENGTH_OM2_10M_SIZE 1

#define SFP_A0H_LENGTH_OM1_10M_OFFSET 17
#define SFP_A0H_LENGTH_OM1_10M_SIZE	1

#define SFP_A0H_LENGTH_OM4_10M_COPPER_1M_OFFSET	18
#define SFP_A0H_LENGTH_OM4_10M_COPPER_1M_SIZE 1

#define SFP_A0H_LENGTH_OM3_10M_OFFSET 19
#define SFP_A0H_LENGTH_OM3_10M_SIZE 1

#define SFP_A0H_VENDOR_NAME_OFFSET 20
#define SFP_A0H_VENDOR_NAME_SIZE 16

#define SFP_A0H_ELETRONIC_COMPATIBILITIE_2_OFFSET 36
#define SFP_A0H_ELETRONIC_COMPATIBILITIE_2_SIZE 1

#define SFP_A0H_VENDOR_OUI_OFFSET 37
#define SFP_A0H_VENDOR_OUI_SIZE 3

#define SFP_A0H_VENDOR_PN_OFFSET 40
#define SFP_A0H_VENDOR_PN_SIZE 16

#define SFP_A0H_VENDOR_REV_OFFSET 56
#define SFP_A0H_VENDOR_REV_SIZE 4

#define SFP_A0H_WAVELENGTH_OFFSET 60
#define SFP_A0H_WAVELENGTH_SIZE	2

#define SFP_A0H_UNALLOCATED_OFFSET 62
#define SFP_A0H_UNALLOCATED_SIZE	1

#define SFP_A0H_CC_BASE_OFFSET 63
#define SFP_A0H_CC_BASE_SIZE 1

#define HIGH_POWER_LEVEL_3_MASK				(1U<<13)
#define PAGING_IMPLEMENTED_INDICATOR_MASK	(1U<<12)
#define RETIMER_OR_CDR_INDICATOR_MASK		(1U<<11)
#define COOLED_LASER_TRANSMITTER_MASK		(1U<<10)
#define POWER_LEVER_2_MASK					(1U<< 9)
#define LINEAR_RECEIVER_OUT_MASK			(1U<< 8)
#define RECEIVER_DECISION_THRESHOLD_MASK	(1U<< 7)
#define TUNABLE_TRANSMITTER_MASK			(1U<< 6)
#define RATE_SELECT_MASK					(1U<< 5)
#define TX_DISABLE_MASK						(1U<< 4)
#define TX_FAULT_SIGNAL_MASK				(1U<< 3)
#define SIGNAL_DETECT_MASK					(1U<< 2)
#define RX_LOS_SIGNAL_MASK 					(1U<< 1)
#define SFP_A0H_OPTIONS_IMPLEMENTED_OFFSET	64
#define SFP_A0H_OPTIONS_IMPLEMENTED_SIZE 2

#define SFP_A0H_MAX_BIT_RATE_OFFSET 66
#define SFP_A0H_MAX_BIT_RATE_SIZE 1

#define SFP_A0H_MIN_BIT_RATE_OFFSET 67
#define SFP_A0H_MIN_BIT_RATE_SIZE 1

#define SFP_A0H_VENDOR_SN_OFFSET 68
#define SFP_A0H_VENDOR_SN_SIZE 16

#define SFP_A0H_DATE_CODE_OFFSET 84
#define SFP_A0H_DATE_CODE_SIZE 8

#define DIGITAL_DIAGNOSTIC_MASK 	(1U<<6)
#define INTERNALLY_CALIBRATED_MASK 	(1U<<5)
#define EXTERNALLY_CALIBRATED_MASK 	(1U<<4)
#define PWR_MEASUREMENT_TYPE_MASK 	(1U<<3)
#define ADDR_CHANGE_REQUIRED_MASK 	(1U<<2)
#define SFP_A0H_DIAG_MONITORING_TYPE_OFFSET 92
#define SFP_A0H_DIAG_MONITORING_TYPE_SIZE 1

#define ALARM_WARNING_FLAG_MASK		(1U<<7)
#define SOFT_TX_DIS_CTRL_MON_MASK 	(1U<<6)
#define SOFT_TX_FAULT_MON_MASK 		(1U<<5)
#define SOFT_RX_LOS_MON_MASK 		(1U<<4)
#define SOFT_RATE_SEL_CTRL_MON_MASK (1U<<3)
#define APP_SELECT_SEL_CTRL_MASK 	(1U<<2)
#define SOFT_RATE_SEL_CTRL_MASK 	(1U<<1)
#define SFP_A0H_ENHANCED_OPTIONS_OFFSET 93
#define SFP_A0H_ENHANCED_OPTIONS_SIZE 1

#define SFP_A0H_SFF_COMPLIANCE_OFFSET 94
#define SFP_A0H_SFF_COMPLIANCE_SIZE	1

#define SFP_A0H_CC_EXT_OFFSET 95
#define SFP_A0H_CC_EXT_SIZE	1

#define SFP_A0H_VENDORS_SPECIFIC_OFFSET	96
#define SFP_A0H_VENDORS_SPECIFIC_SIZE 32

#define SFP_A0H_RESERVED_OFFSET 128
#define SFP_A0H_RESERVED_SIZE 128

/* A2 */
#define SFP_A2H_CC_DMI_OFFSET 95
#define SFP_A2H_CC_DMI_SIZE 1

#define SFP_A2H_TEMPERATURE_OFFSET 96
#define SFP_A2H_TEMPERATURE_SIZE 2

#define SFP_A2H_VOLTAGE_OFFSET 98
#define SFP_A2H_VOLTAGE_SIZE 2

#define SFP_A2H_TX_BIAS_OFFSET 100
#define SFP_A2H_TX_BIAS_SIZE 2

#define SFP_A2H_TX_POWER_OFFSET 102
#define SFP_A2H_TX_POWER_SIZE 2

#define SFP_A2H_RX_POWER_OFFSET 104
#define SFP_A2H_RX_POWER_SIZE 2

#define TX_DIS_STATE_MASK 			(1U<<15)
#define SOFT_TX_DIS_SEL_MASK 		(1U<<14)
#define DIGITAL_STATE_MASK			(1U<<13)
#define RATE_SEL_STATE_MASK 		(1U<<12)
#define SOFT_RATE_SEL_MASK 			(1U<<11)
#define TX_FAULT_STATE_MASK 		(1U<<10)
#define RX_LOS_STATE_MASK 			(1U<< 9)
#define DATA_READY_BAR_STATE_MASK 	(1U<< 8)
#define SFP_A2H_OPTIONAL_STATUS_OFFSET 110
#define SFP_A2H_OPTIONAL_STATUS_SIZE 2

#define TEMP_HIGH_ALARM_MASK			(1U<<31)
#define TEMP_LOW_ALARM_MASK				(1U<<30)
#define VOLTAGE_HIGH_ALARM_MASK			(1U<<29)
#define VOLTAGE_LOW_ALARM_MASK			(1U<<28)
#define TX_BIAS_HIGH_ALARM_MASK			(1U<<27)
#define TX_BIAS_LOW_ALARM_MASK			(1U<<26)
#define TX_POWER_HIGH_ALARM_MASK		(1U<<25)
#define TX_POWER_LOW_ALARM_MASK			(1U<<24)
#define RX_POWER_HIGH_ALARM_MASK		(1U<<23)
#define RX_POWER_LOW_ALARM_MASK			(1U<<22)
#define LASER_TEMP_HIGH_ALARM_MASK		(1U<<21)
#define LASER_TEMP_LOW_ALARM_MASK		(1U<<20)
#define TEC_CURRENT_HIGH_ALARM_MASK		(1U<<19)
#define TEC_CURRENT_LOW_ALARM_MASK		(1U<<18)

#define TEMP_HIGH_WARNING_MASK 			(1U<<15)
#define TEMP_LOW_WARNING_MASK 			(1U<<14)
#define VOLTAGE_HIGH_WARNING_MASK 		(1U<<13)
#define VOLTAGE_LOW_WARNING_MASK 		(1U<<12)
#define TX_BIAS_HIGH_WARNING_MASK 		(1U<<11)
#define TX_BIAS_LOW_WARNING_MASK 		(1U<<10)
#define TX_POWER_HIGH_WARNING_MASK 		(1U<< 9)
#define TX_POWER_LOW_WARNING_MASK 		(1U<< 8)
#define RX_POWER_HIGH_WARNING_MASK 		(1U<< 7)
#define RX_POWER_LOW_WARNING_MASK 		(1U<< 6)
#define LASER_TEMP_HIGH_WARNING_MASK 	(1U<< 5)
#define LASER_TEMP_LOW_WARNING_MASK 	(1U<< 4)
#define TEC_CURRENT_HIGH_WARNING_MASK 	(1U<< 3)
#define TEC_CURRENT_LOW_WARNING_MASK 	(1U<< 2)
#define SFP_A2H_ALARM_FLAG_BITS_OFFSET 112
#define SFP_A2H_ALARM_FLAG_BITS_SIZE 2

#define SFP_A2H_IN_EQUALIZATION_CTRL_OFFSET 114
#define SFP_A2H_IN_EQUALIZATION_CTRL_SIZE 1

#define SFP_A2H_OUT_EMPHASIS_CTRL_OFFSET 115
#define SFP_A2H_OUT_EMPHASIS_CTRL_SIZE 1

#define SFP_A2H_WARNING_FLAG_BITS_OFFSET 116
#define SFP_A2H_WARNING_FLAG_BITS_SIZE 2

/*******************************************/
#define QSFP_IDENTIFIER_OFFSET 0
#define QSFP_IDENTIFIER_SIZE 1

#define QSFP_TEMPERATURE_OFFSET 22
#define QSFP_TEMPERATURE_SIZE 2

#define QSFP_SUPPLY_VOLTAGE_OFFSET 26
#define QSFP_SUPPLY_VOLTAGE_SIZE 2

#define QSFP_RX1_POWER_OFFSET 34
#define QSFP_RX2_POWER_OFFSET 36
#define QSFP_RX3_POWER_OFFSET 38
#define QSFP_RX4_POWER_OFFSET 40
#define QSFP_RX_POWER_SIZE 2

#define QSFP_TX1_BIAS_OFFSET 42
#define QSFP_TX2_BIAS_OFFSET 44
#define QSFP_TX3_BIAS_OFFSET 46
#define QSFP_TX4_BIAS_OFFSET 48
#define QSFP_TX_BIAS_SIZE 2

#define QSFP_TX1_POWER_OFFSET 50
#define QSFP_TX2_POWER_OFFSET 52
#define QSFP_TX3_POWER_OFFSET 54
#define QSFP_TX4_POWER_OFFSET 56
#define QSFP_TX_POWER_SIZE 2

#define QSFP_IDENTIFIER1_OFFSET 128
#define QSFP_IDENTIFIER1_SIZE 1

#define QSFP_CONNECTOR_OFFSET 130
#define QSFP_CONNECTOR_SIZE 1

#define QSFP_TRANSCEIVER_DESCR_OFFSET 131
#define QSFP_TRANSCEIVER_DESCR_SIZE 8

#define QSFP_LENGTH_SMF_KM_OFFSET 142
#define QSFP_LENGTH_SMF_KM_SIZE 1

#define QSFP_LENGTH_OM3_10M_OFFSET 143
#define QSFP_LENGTH_OM3_10M_SIZE 1

#define QSFP_LENGTH_OM2_10M_OFFSET 144
#define QSFP_LENGTH_OM2_10M_SIZE 1

#define QSFP_LENGTH_OM1_10M_OFFSET 145
#define QSFP_LENGTH_OM1_10M_SIZE	1

#define QSFP_LENGTH_OM4_10M_COPPER_1M_OFFSET	146
#define QSFP_LENGTH_OM4_10M_COPPER_1M_SIZE 1

#define QSFP_VENDOR_NAME_OFFSET 148
#define QSFP_VENDOR_NAME_SIZE 16

#define QSFP_VENDOR_PN_OFFSET 168
#define QSFP_VENDOR_PN_SIZE 16

#define QSFP_WAVELENGTH_OFFSET 186
#define QSFP_WAVELENGTH_SIZE	2

#define QSFP_WAVELENGTH_TOLERANCE_OFFSET 188
#define QSFP_WAVELENGTH_TOLERANCE_SIZE	2

#define QSFP_CC_BASE_OFFSET 191
#define QSFP_CC_BASE_SIZE 1

#define QSFP_VENDOR_SN_OFFSET 196
#define QSFP_VENDOR_SN_SIZE 16

#define QSFP_DATE_CODE_OFFSET 212
#define QSFP_DATE_CODE_SIZE 8

#define RECEIVED_POWER_MEASUREMENT_MASK 	(1U<<3)
#define TRANSMITTER_POWER_MEASUREMENT_MASK 	(1U<<2)
#define QSFP_DIAG_MONITORING_TYPE_OFFSET 220
#define QSFP_DIAG_MONITORING_TYPE_SIZE 1

#define QSFP_CC_EXT_OFFSET 223
#define QSFP_CC_EXT_SIZE	1

int npd_get_sfp_info(unsigned long panel_port, int port_type, fiber_module_man_param_t *param);
int npd_get_qsfp_info(unsigned long panel_port, int port_type, fiber_module_man_param_t *param);
int npd_get_dump_sfp_info(unsigned long panel_port, int port_type, fiber_module_man_param_t *param);

#endif 

