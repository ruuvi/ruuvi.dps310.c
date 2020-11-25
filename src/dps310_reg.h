#ifndef DPS310_REG_H
#define DPS310_REG_H

/**
 * @addtogroup DPS310 DPS310 driver
 *
 */
/** @{ */
/**
 * @file dps310.h
 * @author Otso Jousimaa <otso@ojousima.net>
 * @date 2020-11-25
 * @copyright Ruuvi Innovations, License MIT
 *
 */

#define DPS310_PRES_CFG_REG      (0x06U)
#define DPS310_PRES_CFG_WMASK    (0x7FU)
#define DPS310_TEMP_CFG_REG      (0x07U)
#define DPS310_TEMP_CFG_WMASK    (0xFFU)
#define DPS310_MEAS_CFG_REG      (0x08U)
#define DPS310_MEAS_CFG_WMASK    (0x07U)
#define DPS310_MEAS_CFG_BOOT_VAL (0xC0U)
#define DPS310_MODE_STANDBY_VAL  (0x00U)
#define DPS310_MODE_MASK         (0x07U)
#define DPS310_CFG_REG           (0x09U)
#define DPS310_CFG_WMASK         (0xFFU)
#define DPS310_RST_CFG_REG       (0x0CU)
#define DPS310_RST_CFG_WMASK     (0x8FU)
#define DPS310_SOFT_RST_VAL      (0x09U)
#define DPS310_SOFT_RST_MASK     (0x0FU)
#define DPS310_PROD_ID_REG       (0x0DU)
#define DPS310_PROD_ID_BOOT_VAL  (0xC0U)

#define DPS310_COEF_START_REG    (0x10U)
#define DPS310_COEF_REG_LEN      (0x11U)
#define DPS310_COEF_C0_OFFSET    (0U)
#define DPS310_COEF_C0_LEN_BIT   (12U)
#define DPS310_COEF_C0_SHIFT     (4U)

#define DPS310_COEF_SRC_REG      (0x28U)


#define DPS310_RESERVED_START (0x22U)
#define DPS310_RESERVED_END   (0x27U)

#define DPS310_REGISTER_TABLE_SIZE (0x29U)

#define DPS310_EFUSE_0_REG (0x0EU)
#define DPS310_EFUSE_0_VAL (0xA5U)
#define DPS310_EFUSE_1_REG (0x0FU)
#define DPS310_EFUSE_1_VAL (0x96U)
#define DPS310_EFUSE_2_REG (0x62U)
#define DPS310_EFUSE_2_VAL (0x02U)
#define DPS310_SIM_TABLE_SIZE (0x63U)


/** @} */

#endif