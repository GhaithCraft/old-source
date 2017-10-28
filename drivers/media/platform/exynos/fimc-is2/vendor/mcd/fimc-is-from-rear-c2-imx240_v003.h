#ifndef FIMC_IS_FROM_REAR_C2_IMX240_V003_H
#define FIMC_IS_FROM_REAR_C2_IMX240_V003_H

/* Header referenced section */
#define FROM_HEADER_VERSION_START_ADDR           0x40
#define FROM_HEADER_MODULE_ID_START_ADDR         0x0
#define FROM_HEADER_MODULE_ID_SIZE               0x2
#define FROM_HEADER_CAL_MAP_VER_START_ADDR       0x60
#define FROM_HEADER_ISP_SETFILE_VER_START_ADDR   0x64
#define FROM_HEADER_PROJECT_NAME_START_ADDR      0x6E
#define FROM_HEADER_CONCORD_HEADER_VER_START_ADDR    0x50
#define FROM_HEADER_ISP_BINARY_START_ADDR        0x0
#define FROM_HEADER_ISP_BINARY_END_ADDR          0x4
#define FROM_HEADER_OEM_START_ADDR               0x8
#define FROM_HEADER_OEM_END_ADDR                 0xC
#define FROM_HEADER_AWB_START_ADDR               0x10
#define FROM_HEADER_AWB_END_ADDR                 0x14
#define FROM_HEADER_SHADING_START_ADDR           0x18
#define FROM_HEADER_SHADING_END_ADDR             0x1C
#define FROM_HEADER_ISP_SETFILE_START_ADDR       0x20
#define FROM_HEADER_ISP_SETFILE_END_ADDR         0x24
#define FROM_HEADER_CONCORD_CAL_START_ADDR       0x28
#define FROM_HEADER_CONCORD_CAL_END_ADDR         0x2C
#define FROM_HEADER_CONCORD_BINARY_START_ADDR    0x30
#define FROM_HEADER_CONCORD_BINARY_END_ADDR      0x34
#define FROM_HEADER_CONCORD_MASTER_SETFILE_START_ADDR    0xA8
#define FROM_HEADER_CONCORD_MASTER_SETFILE_END_ADDR      0xAC
#define FROM_HEADER_CONCORD_MODE_SETFILE_START_ADDR      0xA8
#define FROM_HEADER_CONCORD_MODE_SETFILE_END_ADDR        0xAC
#define FROM_HEADER_PDAF_CAL_START_ADDR          0xB0
#define FROM_HEADER_PDAF_CAL_END_ADDR            0xB4
#define FROM_HEADER_SENSOR_ID_ADDR               0xB8

#define FROM_HEADER_CAL_DATA_START_ADDR          0x1000

/* Shading referenced section */
#define FROM_SHADING_LSC_I0_GAIN_ADDR            0x4702
#define FROM_SHADING_LSC_J0_GAIN_ADDR            0x470A
#define FROM_SHADING_LSC_A_GAIN_ADDR             0x4712
#define FROM_SHADING_LSC_K4_GAIN_ADDR            0x4722
#define FROM_SHADING_LSC_SCALE_GAIN_ADDR         0x4732
#define FROM_SHADING_GRASTUNING_AWB_ASH_CORD_ADDR        0x473A
#define FROM_SHADING_GRASTUNING_AWB_ASH_CORD_INDEX_ADDR  0x4748
#define FROM_SHADING_GRASTUNING_GAS_ALPHA_ADDR           0x4756
#define FROM_SHADING_GRASTUNING_GAS_BETA_ADDR            0x478E
#define FROM_SHADING_GRASTUNING_GAS_OUTDOOR_ALPHA_ADDR   0x47C6
#define FROM_SHADING_GRASTUNING_GAS_OUTDOOR_BETA_ADDR    0x47CE
#define FROM_SHADING_GRASTUNING_GAS_INDOOR_ALPHA_ADDR    0x47D6
#define FROM_SHADING_GRASTUNING_GAS_INDOOR_BETA_ADDR     0x47DE
#define FROM_SHADING_LSC_GAIN_START_ADDR         0x3006
#define FROM_SHADING_LSC_GAIN_END_ADDR           0x46FD
#define FROM_SHADING_VER_START_ADDR              0x4FE0

/* Concord cal referenced section */
#define FROM_CONCORD_CAL_PDAF_START_ADDR         0x9000
#define FROM_CONCORD_CAL_PDAF_END_ADDR           0x91FF
#define FROM_CONCORD_CAL_PDAF_SHADING_START_ADDR 0x9204
#define FROM_CONCORD_CAL_PDAF_SHADING_END_ADDR   0x9623
#define FROM_CONCORD_XTALK_COEF_ADDR             0x9640
#define FROM_CONCORD_COEF_OFFSET_R_ADDR          0xEA40
#define FROM_CONCORD_COEF_OFFSET_G_ADDR          0xEA42
#define FROM_CONCORD_COEF_OFFSET_B_ADDR          0xEA44

/* OEM referenced section */
#define FROM_OEM_VER_START_ADDR                  0x1FE0

/* AWB referenced section */
#define FROM_AWB_VER_START_ADDR                  0x2FE0

/* Companion Checksum referenced section */
#define FROM_SHADING_LSC_GAIN_CRC_ADDR           0x46FE
#define FROM_CONCORD_PDAF_CRC_ADDR               0x9200
#define FROM_CONCORD_PDAF_SHAD_CRC_ADDR          0x9624
#define FROM_CONCORD_XTALK_COEF_CRC_ADDR         0xEA46
#define FROM_SHADING_LSC_PARAMETER_CRC_ARRD      0x47EA

/* ISP binary referenced section */
#define FROM_ISP_BINARY_SETFILE_START_ADDR       0x8000
#define FROM_ISP_BINARY_SETFILE_END_ADDR         0x3FFFFF

/* Checksum referenced section */
#define FROM_CHECKSUM_HEADER_ADDR                0xFFC
#define FROM_CHECKSUM_OEM_ADDR                   0x1FFC
#define FROM_CHECKSUM_AWB_ADDR                   0x2FFC
#define FROM_CHECKSUM_SHADING_ADDR               0x4FFC
#define FROM_CHECKSUM_PAF_CAL_ADDR               0x8FFC
#define FROM_CHECKSUM_CONCORD_CAL_ADDR           0xFFFC

/* etc section */
#define FIMC_IS_MAX_CAL_SIZE			(64 * 1024)
#define FIMC_IS_MAX_COMPANION_FW_SIZE		(200 * 1024)
#define FIMC_IS_FROM_ERASE_SIZE			(64 * 1024)
#define FIMC_IS_MAX_FW_SIZE			(2750 * 1024)
#define FIMC_IS_MAX_SETFILE_SIZE_LS		(1120 * 1024)
#define FIMC_IS_MAX_SETFILE_SIZE_LL		(1500 * 1024)
#define HEADER_CRC32_LEN			(224)
#define FROM_AF_CAL_PAN_ADDR			0x1000
#define FROM_AF_CAL_MACRO_ARRD			0x1008

#define CHECKSUM_SEED_ISP_FW_LS			0x2A8FFC
#define CHECKSUM_SEED_SETF_LS			0x1167FC
#define CHECKSUM_SEED_COMP_FW_LS		0x307FC
#define FROM_WRITE_CHECKSUM_SETF_LS		0x156FFF
#define FROM_WRITE_CHECKSUM_COMP_LS		0x407FF
#define CHECKSUM_SEED_ISP_FW_LL			0x271FFC
#define CHECKSUM_SEED_SETF_LL			0x14BFFC
#define CHECKSUM_SEED_COMP_FW_LL		0x31FFC
#define FROM_WRITE_CHECKSUM_SETF_LL		0x18DFFF
#define FROM_WRITE_CHECKSUM_COMP_LL		0x41FFF

#endif /* FIMC_IS_FROM_REAR_C2_IMX240_V003_H */
