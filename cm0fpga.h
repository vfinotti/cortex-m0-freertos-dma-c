/****************************************************************************
 *   $Id:: cmofpga.h       2019-04-04 18:44:30Z                             $
 *   Project:
 *
 *   Description:
 *     CMSIS Cortex-M0 Core Peripheral Access Layer Header File for
 *     Cortex-M0 DesignStart implementation on FPGA
 *
 ****************************************************************************
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * products. This software is supplied "AS IS" without any warranties.
 * NXP Semiconductors assumes no responsibility or liability for the
 * use of the software, conveys no license or title under any patent,
 * copyright, or mask work right to the product. NXP Semiconductors
 * reserves the right to make changes in the software without
 * notification. NXP Semiconductors also make no representation or
 * warranty that such application will be suitable for the specified
 * use without further testing or modification.
****************************************************************************/
#ifndef __CM0FPGA_H__
#define __CM0FPGA_H__

#ifdef __cplusplus
 extern "C" {
#endif

/** @addtogroup CM0FPGA_Definitions CM0FPGA Definitions
  This file defines all structures and symbols for CM0FPGA:
    - Registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
  @{
*/


/******************************************************************************/
/*                Processor and Core Peripherals                              */
/******************************************************************************/
/** @addtogroup CM0FPGA_CMSIS CM0FPGA CMSIS Definitions
  Configuration of the Cortex-M0 Processor and Core Peripherals
  @{
*/

/*
 * ==========================================================================
 * ---------- Interrupt Number Definition -----------------------------------
 * ==========================================================================
 */

/*
 * ==========================================================================
 * ----------- Processor and Core Peripheral Section ------------------------
 * ==========================================================================
 */

/* Configuration of the Cortex-M0 Processor and Core Peripherals */
#define __MPU_PRESENT             0         /*!< MPU present or not                               */
#define __NVIC_PRIO_BITS          2         /*!< Number of Bits used for Priority Levels          */
#define __Vendor_SysTickConfig    0         /*!< Set to 1 if different SysTick Config is used     */

/*@}*/ /* end of group CM0FPGA_CMSIS */


#include "ARMCM0.h"
#include "core_cm0.h"                       /* Cortex-M0 processor and core peripherals           */

/******************************************************************************/
/*                Device Specific Peripheral Registers structures             */
/******************************************************************************/

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

// ------------------------------------------------------------------------------------------------
// -----                                       FLASHCTRL                                      -----
// ------------------------------------------------------------------------------------------------

/*------------- Cordic ----------------------------*/
/** @addtogroup CM0FPGA_CORDIC CM0FPGA Cordic registers
  @{
*/
typedef struct
{
  __IO uint32_t X;              /* 0x000 */
  __IO uint32_t Y;
  __IO uint32_t Z;
  __IO uint32_t CONTROL_START;
  __IO uint32_t X_RESULT;
  __IO uint32_t Y_RESULT;
  __IO uint32_t Z_RESULT;
  __IO uint32_t CONTROL_DONE;
} CM0FPGA_CORDIC_TypeDef;
/*@}*/ /* end of group CM0FPGA_CORDIC */


/*------------- Timer (TMR) ----------------------------*/
/** @addtogroup CM0FPGA_TIMER CM0FPGA Timer registers
    @{
*/
typedef struct
{
    __IO uint32_t TIMER_GLO_PRESCALE;               /* 0x000 */
    __IO uint32_t TIMER_IPENDING;
    __IO uint32_t TIMER_IRQ_EN;
    __IO uint32_t TIMER_MTIME;
    __IO uint32_t TIMER_MTIMECMP0;
} CM0FPGA_TMR_TypeDef;
/*@}*/ /* end of group CM0FPGA_TIMER */


/*------------- DMA ----------------------------*/
/** @addtogroup CM0FPGA_DMA CM0FPGA Direct Memory Access registers
    @{
*/
typedef struct
{
    __IO uint32_t CSR;              /* 0x000 */
    __IO uint32_t INT_MSK_A;
    __IO uint32_t INT_MSK_B;
    __IO uint32_t INT_SRC_A;
    __IO uint32_t INT_SRC_B;
         uint32_t RESERVED0[3];
    __IO uint32_t CH0_CSR;          /* 0x020 */
    __IO uint32_t CH0_SZ;
    __IO uint32_t CH0_A0;
    __IO uint32_t CH0_AM0;
    __IO uint32_t CH0_A1;
    __IO uint32_t CH0_AM1;
    __IO uint32_t CH0_DESC;
    __IO uint32_t CH0_SWPTR;
    __IO uint32_t CH1_CSR;          /* 0x040 */
    __IO uint32_t CH1_SZ;
    __IO uint32_t CH1_A0;
    __IO uint32_t CH1_AM0;
    __IO uint32_t CH1_A1;
    __IO uint32_t CH1_AM1;
    __IO uint32_t CH1_DESC;
    __IO uint32_t CH1_SWPTR;
    __IO uint32_t CH2_CSR;          /* 0x060 */
    __IO uint32_t CH2_SZ;
    __IO uint32_t CH2_A0;
    __IO uint32_t CH2_AM0;
    __IO uint32_t CH2_A1;
    __IO uint32_t CH2_AM1;
    __IO uint32_t CH2_DESC;
    __IO uint32_t CH2_SWPTR;
    __IO uint32_t CH3_CSR;          /* 0x080 */
    __IO uint32_t CH3_SZ;
    __IO uint32_t CH3_A0;
    __IO uint32_t CH3_AM0;
    __IO uint32_t CH3_A1;
    __IO uint32_t CH3_AM1;
    __IO uint32_t CH3_DESC;
    __IO uint32_t CH3_SWPTR;
    __IO uint32_t CH4_CSR;          /* 0x0a0 */
    __IO uint32_t CH4_SZ;
    __IO uint32_t CH4_A0;
    __IO uint32_t CH4_AM0;
    __IO uint32_t CH4_A1;
    __IO uint32_t CH4_AM1;
    __IO uint32_t CH4_DESC;
    __IO uint32_t CH4_SWPTR;
    __IO uint32_t CH5_CSR;          /* 0x0c0 */
    __IO uint32_t CH5_SZ;
    __IO uint32_t CH5_A0;
    __IO uint32_t CH5_AM0;
    __IO uint32_t CH5_A1;
    __IO uint32_t CH5_AM1;
    __IO uint32_t CH5_DESC;
    __IO uint32_t CH5_SWPTR;
    __IO uint32_t CH6_CSR;          /* 0x0e0 */
    __IO uint32_t CH6_SZ;
    __IO uint32_t CH6_A0;
    __IO uint32_t CH6_AM0;
    __IO uint32_t CH6_A1;
    __IO uint32_t CH6_AM1;
    __IO uint32_t CH6_DESC;
    __IO uint32_t CH6_SWPTR;
    __IO uint32_t CH7_CSR;          /* 0x100 */
    __IO uint32_t CH7_SZ;
    __IO uint32_t CH7_A0;
    __IO uint32_t CH7_AM0;
    __IO uint32_t CH7_A1;
    __IO uint32_t CH7_AM1;
    __IO uint32_t CH7_DESC;
    __IO uint32_t CH7_SWPTR;
    __IO uint32_t CH8_CSR;          /* 0x120 */
    __IO uint32_t CH8_SZ;
    __IO uint32_t CH8_A0;
    __IO uint32_t CH8_AM0;
    __IO uint32_t CH8_A1;
    __IO uint32_t CH8_AM1;
    __IO uint32_t CH8_DESC;
    __IO uint32_t CH8_SWPTR;
    __IO uint32_t CH9_CSR;          /* 0x140 */
    __IO uint32_t CH9_SZ;
    __IO uint32_t CH9_A0;
    __IO uint32_t CH9_AM0;
    __IO uint32_t CH9_A1;
    __IO uint32_t CH9_AM1;
    __IO uint32_t CH9_DESC;
    __IO uint32_t CH9_SWPTR;
    __IO uint32_t CH10_CSR;         /* 0x160 */
    __IO uint32_t CH10_SZ;
    __IO uint32_t CH10_A0;
    __IO uint32_t CH10_AM0;
    __IO uint32_t CH10_A1;
    __IO uint32_t CH10_AM1;
    __IO uint32_t CH10_DESC;
    __IO uint32_t CH10_SWPTR;
    __IO uint32_t CH11_CSR;         /* 0x180 */
    __IO uint32_t CH11_SZ;
    __IO uint32_t CH11_A0;
    __IO uint32_t CH11_AM0;
    __IO uint32_t CH11_A1;
    __IO uint32_t CH11_AM1;
    __IO uint32_t CH11_DESC;
    __IO uint32_t CH11_SWPTR;
    __IO uint32_t CH12_CSR;         /* 0x1a0 */
    __IO uint32_t CH12_SZ;
    __IO uint32_t CH12_A0;
    __IO uint32_t CH12_AM0;
    __IO uint32_t CH12_A1;
    __IO uint32_t CH12_AM1;
    __IO uint32_t CH12_DESC;
    __IO uint32_t CH12_SWPTR;
    __IO uint32_t CH13_CSR;         /* 0x1c0 */
    __IO uint32_t CH13_SZ;
    __IO uint32_t CH13_A0;
    __IO uint32_t CH13_AM0;
    __IO uint32_t CH13_A1;
    __IO uint32_t CH13_AM1;
    __IO uint32_t CH13_DESC;
    __IO uint32_t CH13_SWPTR;
    __IO uint32_t CH14_CSR;         /* 0x1e0 */
    __IO uint32_t CH14_SZ;
    __IO uint32_t CH14_A0;
    __IO uint32_t CH14_AM0;
    __IO uint32_t CH14_A1;
    __IO uint32_t CH14_AM1;
    __IO uint32_t CH14_DESC;
    __IO uint32_t CH14_SWPTR;
    __IO uint32_t CH15_CSR;         /* 0x200 */
    __IO uint32_t CH15_SZ;
    __IO uint32_t CH15_A0;
    __IO uint32_t CH15_AM0;
    __IO uint32_t CH15_A1;
    __IO uint32_t CH15_AM1;
    __IO uint32_t CH15_DESC;
    __IO uint32_t CH15_SWPTR;
    __IO uint32_t CH16_CSR;         /* 0x220 */
    __IO uint32_t CH16_SZ;
    __IO uint32_t CH16_A0;
    __IO uint32_t CH16_AM0;
    __IO uint32_t CH16_A1;
    __IO uint32_t CH16_AM1;
    __IO uint32_t CH16_DESC;
    __IO uint32_t CH16_SWPTR;
    __IO uint32_t CH17_CSR;         /* 0x240 */
    __IO uint32_t CH17_SZ;
    __IO uint32_t CH17_A0;
    __IO uint32_t CH17_AM0;
    __IO uint32_t CH17_A1;
    __IO uint32_t CH17_AM1;
    __IO uint32_t CH17_DESC;
    __IO uint32_t CH17_SWPTR;
    __IO uint32_t CH18_CSR;         /* 0x260 */
    __IO uint32_t CH18_SZ;
    __IO uint32_t CH18_A0;
    __IO uint32_t CH18_AM0;
    __IO uint32_t CH18_A1;
    __IO uint32_t CH18_AM1;
    __IO uint32_t CH18_DESC;
    __IO uint32_t CH18_SWPTR;
    __IO uint32_t CH19_CSR;         /* 0x280 */
    __IO uint32_t CH19_SZ;
    __IO uint32_t CH19_A0;
    __IO uint32_t CH19_AM0;
    __IO uint32_t CH19_A1;
    __IO uint32_t CH19_AM1;
    __IO uint32_t CH19_DESC;
    __IO uint32_t CH19_SWPTR;
    __IO uint32_t CH20_CSR;         /* 0x2a0 */
    __IO uint32_t CH20_SZ;
    __IO uint32_t CH20_A0;
    __IO uint32_t CH20_AM0;
    __IO uint32_t CH20_A1;
    __IO uint32_t CH20_AM1;
    __IO uint32_t CH20_DESC;
    __IO uint32_t CH20_SWPTR;
    __IO uint32_t CH21_CSR;         /* 0x2c0 */
    __IO uint32_t CH21_SZ;
    __IO uint32_t CH21_A0;
    __IO uint32_t CH21_AM0;
    __IO uint32_t CH21_A1;
    __IO uint32_t CH21_AM1;
    __IO uint32_t CH21_DESC;
    __IO uint32_t CH21_SWPTR;
    __IO uint32_t CH22_CSR;         /* 0x2e0 */
    __IO uint32_t CH22_SZ;
    __IO uint32_t CH22_A0;
    __IO uint32_t CH22_AM0;
    __IO uint32_t CH22_A1;
    __IO uint32_t CH22_AM1;
    __IO uint32_t CH22_DESC;
    __IO uint32_t CH22_SWPTR;
    __IO uint32_t CH23_CSR;         /* 0x300 */
    __IO uint32_t CH23_SZ;
    __IO uint32_t CH23_A0;
    __IO uint32_t CH23_AM0;
    __IO uint32_t CH23_A1;
    __IO uint32_t CH23_AM1;
    __IO uint32_t CH23_DESC;
    __IO uint32_t CH23_SWPTR;
    __IO uint32_t CH24_CSR;         /* 0x320 */
    __IO uint32_t CH24_SZ;
    __IO uint32_t CH24_A0;
    __IO uint32_t CH24_AM0;
    __IO uint32_t CH24_A1;
    __IO uint32_t CH24_AM1;
    __IO uint32_t CH24_DESC;
    __IO uint32_t CH24_SWPTR;
    __IO uint32_t CH25_CSR;         /* 0x340 */
    __IO uint32_t CH25_SZ;
    __IO uint32_t CH25_A0;
    __IO uint32_t CH25_AM0;
    __IO uint32_t CH25_A1;
    __IO uint32_t CH25_AM1;
    __IO uint32_t CH25_DESC;
    __IO uint32_t CH25_SWPTR;
    __IO uint32_t CH26_CSR;         /* 0x360 */
    __IO uint32_t CH26_SZ;
    __IO uint32_t CH26_A0;
    __IO uint32_t CH26_AM0;
    __IO uint32_t CH26_A1;
    __IO uint32_t CH26_AM1;
    __IO uint32_t CH26_DESC;
    __IO uint32_t CH26_SWPTR;
    __IO uint32_t CH27_CSR;         /* 0x380 */
    __IO uint32_t CH27_SZ;
    __IO uint32_t CH27_A0;
    __IO uint32_t CH27_AM0;
    __IO uint32_t CH27_A1;
    __IO uint32_t CH27_AM1;
    __IO uint32_t CH27_DESC;
    __IO uint32_t CH27_SWPTR;
    __IO uint32_t CH28_CSR;         /* 0x3a0 */
    __IO uint32_t CH28_SZ;
    __IO uint32_t CH28_A0;
    __IO uint32_t CH28_AM0;
    __IO uint32_t CH28_A1;
    __IO uint32_t CH28_AM1;
    __IO uint32_t CH28_DESC;
    __IO uint32_t CH28_SWPTR;
    __IO uint32_t CH29_CSR;         /* 0x3c0 */
    __IO uint32_t CH29_SZ;
    __IO uint32_t CH29_A0;
    __IO uint32_t CH29_AM0;
    __IO uint32_t CH29_A1;
    __IO uint32_t CH29_AM1;
    __IO uint32_t CH29_DESC;
    __IO uint32_t CH29_SWPTR;
    __IO uint32_t CH30_CSR;         /* 0x3e0 */
    __IO uint32_t CH30_SZ;
    __IO uint32_t CH30_A0;
    __IO uint32_t CH30_AM0;
    __IO uint32_t CH30_A1;
    __IO uint32_t CH30_AM1;
    __IO uint32_t CH30_DESC;
    __IO uint32_t CH30_SWPTR;
} CM0FPGA_DMA_TypeDef;
/*@}*/ /* end of group CM0FPGA_DMA */


#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

/******************************************************************************/
/*                         Peripheral memory map                              */
/******************************************************************************/
/* Base addresses                                                             */
#define CM0FPGA_FLASH_BASE    (0x00000000UL)
#define CM0FPGA_RAM_BASE      (0x20000000UL)
#define CM0FPGA_AHB_BASE      (0x40000000UL)

/* AHB peripherals                                                            */
#define CM0FPGA_CORDIC0_BASE  (CM0FPGA_AHB_BASE  + 0x00000)
#define CM0FPGA_CORDIC1_BASE  (CM0FPGA_AHB_BASE  + 0x00100)
#define CM0FPGA_CORDIC2_BASE  (CM0FPGA_AHB_BASE  + 0x00200)
#define CM0FPGA_CORDIC3_BASE  (CM0FPGA_AHB_BASE  + 0x00300)
#define CM0FPGA_TMR_BASE      (CM0FPGA_AHB_BASE  + 0x00400)
#define CM0FPGA_DMA_BASE      (0x50000000UL)

/******************************************************************************/
/*                         Peripheral declaration                             */
/******************************************************************************/
#define CM0FPGA_CORDIC0       ((CM0FPGA_CORDIC_TypeDef *) CM0FPGA_CORDIC0_BASE )
#define CM0FPGA_CORDIC1       ((CM0FPGA_CORDIC_TypeDef *) CM0FPGA_CORDIC1_BASE )
#define CM0FPGA_CORDIC2       ((CM0FPGA_CORDIC_TypeDef *) CM0FPGA_CORDIC2_BASE )
#define CM0FPGA_CORDIC3       ((CM0FPGA_CORDIC_TypeDef *) CM0FPGA_CORDIC3_BASE )
#define CM0FPGA_TMR           ((CM0FPGA_TMR_TypeDef    *) CM0FPGA_TMR_BASE     )
#define CM0FPGA_DMA           ((CM0FPGA_DMA_TypeDef    *) CM0FPGA_DMA_BASE     )

#ifdef __cplusplus
}
#endif

#endif  /* __CM0FPGA_H__ */
