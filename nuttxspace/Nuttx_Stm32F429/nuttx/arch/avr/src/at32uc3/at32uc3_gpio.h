/****************************************************************************
 * arch/avr/src/at32uc3/at32uc3_gpio.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_AVR_SRC_AT32UC3_AT32UC3_GPIO_H
#define __ARCH_AVR_SRC_AT32UC3_AT32UC3_GPIO_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Port Identifiers *********************************************************/

#define AVR32_GPIO0              0       /* General Purpose Input/Output Port 0 */
#define AVR32_GPIO1              1       /* General Purpose Input/Output Port 1 */
#define AVR32_GPIO2              2       /* General Purpose Input/Output Port 2 */
#define AVR32_GPIO3              3       /* General Purpose Input/Output Port 3 */
#define AVR32_GPIO4              4       /* General Purpose Input/Output Port 4 */

/* Port Offsets *************************************************************/

#define AVR32_GPIOn_OFFSET(n)    ((n) << 8)
#define AVR32_GPIO0_OFFSET       0x0000   /* General Purpose Input/Output Port 0 */
#define AVR32_GPIO1_OFFSET       0x0100   /* General Purpose Input/Output Port 1 */
#define AVR32_GPIO2_OFFSET       0x0200   /* General Purpose Input/Output Port 2 */
#define AVR32_GPIO3_OFFSET       0x0300   /* General Purpose Input/Output Port 3 */
#define AVR32_GPIO4_OFFSET       0x0400   /* General Purpose Input/Output Port 4 */

/* Register offsets *********************************************************/

#define AVR32_GPIO_GPER_OFFSET   0x00     /* GPIO Enable Register */
#define AVR32_GPIO_GPERS_OFFSET  0x04     /* GPIO Enable Register Set */
#define AVR32_GPIO_GPERC_OFFSET  0x08     /* GPIO Enable Register Clear */
#define AVR32_GPIO_GPERT_OFFSET  0x0c     /* GPIO Enable Register Toggle */
#define AVR32_GPIO_PMR0_OFFSET   0x10     /* Peripheral Mux Register 0 */
#define AVR32_GPIO_PMR0S_OFFSET  0x14     /* Peripheral Mux Register 0 Set */
#define AVR32_GPIO_PMR0C_OFFSET  0x18     /* Peripheral Mux Register 0 Clear */
#define AVR32_GPIO_PMR0T_OFFSET  0x1c     /* Peripheral Mux Register 0 Toggle */
#define AVR32_GPIO_PMR1_OFFSET   0x20     /* Peripheral Mux Register 1 */
#define AVR32_GPIO_PMR1S_OFFSET  0x24     /* Peripheral Mux Register 1 Set */
#define AVR32_GPIO_PMR1C_OFFSET  0x28     /* Peripheral Mux Register 1 Clear */
#define AVR32_GPIO_PMR1T_OFFSET  0x2c     /* Peripheral Mux Register 1 Toggle */
#define AVR32_GPIO_ODER_OFFSET   0x40     /* Output Driver Enable Register */
#define AVR32_GPIO_ODERS_OFFSET  0x44     /* Output Driver Enable Register Set */
#define AVR32_GPIO_ODERC_OFFSET  0x48     /* Output Driver Enable Register Clear */
#define AVR32_GPIO_ODERT_OFFSET  0x4c     /* Output Driver Enable Register Toggle */
#define AVR32_GPIO_OVR_OFFSET    0x50     /* Output Value Register */
#define AVR32_GPIO_OVRS_OFFSET   0x54     /* Output Value Register Set */
#define AVR32_GPIO_OVRC_OFFSET   0x58     /* Output Value Register Clear */
#define AVR32_GPIO_OVRT_OFFSET   0x5c     /* Output Value Register Toggle */
#define AVR32_GPIO_PVR_OFFSET    0x60     /* Pin Value Register Read */
#define AVR32_GPIO_PUER_OFFSET   0x70     /* Pull-up Enable Register */
#define AVR32_GPIO_PUERS_OFFSET  0x74     /* Pull-up Enable Register Set */
#define AVR32_GPIO_PUERC_OFFSET  0x78     /* Pull-up Enable Register Clear */
#define AVR32_GPIO_PUERT_OFFSET  0x7c     /* Pull-up Enable Register Toggle */
#define AVR32_GPIO_IER_OFFSET    0x90     /* Interrupt Enable Register */
#define AVR32_GPIO_IERS_OFFSET   0x94     /* Interrupt Enable Register Set */
#define AVR32_GPIO_IERC_OFFSET   0x98     /* Interrupt Enable Register Clear */
#define AVR32_GPIO_IERT_OFFSET   0x9c     /* Interrupt Enable Register Toggle */
#define AVR32_GPIO_IMR0_OFFSET   0xa0     /* Interrupt Mode Register 0  */
#define AVR32_GPIO_IMR0S_OFFSET  0xa4     /* Interrupt Mode Register 0 Set */
#define AVR32_GPIO_IMR0C_OFFSET  0xa8     /* Interrupt Mode Register 0 Clear */
#define AVR32_GPIO_IMR0T_OFFSET  0xac     /* Interrupt Mode Register 0 Toggle */
#define AVR32_GPIO_IMR1_OFFSET   0xb0     /* Interrupt Mode Register 1  */
#define AVR32_GPIO_IMR1S_OFFSET  0xb4     /* Interrupt Mode Register 1 Set */
#define AVR32_GPIO_IMR1C_OFFSET  0xb8     /* Interrupt Mode Register 1 Clear */
#define AVR32_GPIO_IMR1T_OFFSET  0xbc     /* Interrupt Mode Register 1 Toggle */
#define AVR32_GPIO_GFER_OFFSET   0xc0     /* Glitch Filter Enable Register  */
#define AVR32_GPIO_GFERS_OFFSET  0xc4     /* Glitch Filter Enable Register Set */
#define AVR32_GPIO_GFERC_OFFSET  0xc8     /* Glitch Filter Enable Register Clear */
#define AVR32_GPIO_GFERT_OFFSET  0xcc     /* Glitch Filter Enable Register Toggle */
#define AVR32_GPIO_IFR_OFFSET    0xd0     /* Interrupt Flag Register Read */
#define AVR32_GPIO_IFRC_OFFSET   0xd8     /* Interrupt Flag Register Clear */

/* Port Base Addresses ******************************************************/

#define AVR32_GPIOn_BASE(n)      (AVR32_GPIO_BASE+AVR32_GPIO_OFFSET(n))
#define AVR32_GPIO0_BASE         (AVR32_GPIO_BASE+AVR32_GPIO0_OFFSET)
#define AVR32_GPIO1_BASE         (AVR32_GPIO_BASE+AVR32_GPIO1_OFFSET)
#define AVR32_GPIO2_BASE         (AVR32_GPIO_BASE+AVR32_GPIO2_OFFSET)
#define AVR32_GPIO3_BASE         (AVR32_GPIO_BASE+AVR32_GPIO3_OFFSET)
#define AVR32_GPIO4_BASE         (AVR32_GPIO_BASE+AVR32_GPIO4_OFFSET)

/* Local bus mapped GPIO ports */

#define AVR32_GPIOn_LBUS_BASE(n) (AVR32_GPIO_LBUS_BASE+AVR32_GPIO_OFFSET(n))
#define AVR32_GPIO0_LBUS_BASE    (AVR32_GPIO_LBUS_BASE+AVR32_GPIO0_OFFSET)
#define AVR32_GPIO1_LBUS_BASE    (AVR32_GPIO_LBUS_BASE+AVR32_GPIO1_OFFSET)

/* Register Addresses *******************************************************/

#define AVR32_GPIO_GPER(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_GPER_OFFSET)
#define AVR32_GPIO_GPERS(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_GPERS_OFFSET)
#define AVR32_GPIO_GPERC(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_GPERC_OFFSET)
#define AVR32_GPIO_GPERT(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_GPERT_OFFSET)
#define AVR32_GPIO_PMR0(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PMR0_OFFSET)
#define AVR32_GPIO_PMR0S(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PMR0S_OFFSET)
#define AVR32_GPIO_PMR0C(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PMR0C_OFFSET)
#define AVR32_GPIO_PMR0T(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PMR0T_OFFSET)
#define AVR32_GPIO_PMR1(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PMR1_OFFSET)
#define AVR32_GPIO_PMR1S(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PMR1S_OFFSET)
#define AVR32_GPIO_PMR1C(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PMR1C_OFFSET)
#define AVR32_GPIO_PMR1T(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PMR1T_OFFSET)
#define AVR32_GPIO_ODER(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_ODER_OFFSET)
#define AVR32_GPIO_ODERS(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_ODERS_OFFSET)
#define AVR32_GPIO_ODERC(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_ODERC_OFFSET)
#define AVR32_GPIO_ODERT(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_ODERT_OFFSET)
#define AVR32_GPIO_OVR(n)        (AVR32_GPIOn_BASE(n)+AVR32_GPIO_OVR_OFFSET)
#define AVR32_GPIO_OVRS(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_OVRS_OFFSET)
#define AVR32_GPIO_OVRC(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_OVRC_OFFSET)
#define AVR32_GPIO_OVRT(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_OVRT_OFFSET)
#define AVR32_GPIO_PVR(n)        (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PVR_OFFSET)
#define AVR32_GPIO_PUER(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PUER_OFFSET)
#define AVR32_GPIO_PUERS(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PUERS_OFFSET)
#define AVR32_GPIO_PUERC(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PUERC_OFFSET)
#define AVR32_GPIO_PUERT(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_PUERT_OFFSET)
#define AVR32_GPIO_IER(n)        (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IER_OFFSET)
#define AVR32_GPIO_IERS(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IERS_OFFSET)
#define AVR32_GPIO_IERC(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IERC_OFFSET)
#define AVR32_GPIO_IERT(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IERT_OFFSET)
#define AVR32_GPIO_IMR0(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IMR0_OFFSET)
#define AVR32_GPIO_IMR0S(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IMR0S_OFFSET)
#define AVR32_GPIO_IMR0C(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IMR0C_OFFSET)
#define AVR32_GPIO_IMR0T(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IMR0T_OFFSET)
#define AVR32_GPIO_IMR1(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IMR1_OFFSET)
#define AVR32_GPIO_IMR1S(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IMR1S_OFFSET)
#define AVR32_GPIO_IMR1C(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IMR1C_OFFSET)
#define AVR32_GPIO_IMR1T(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IMR1T_OFFSET)
#define AVR32_GPIO_GFER(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_GFER_OFFSET)
#define AVR32_GPIO_GFERS(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_GFERS_OFFSET)
#define AVR32_GPIO_GFERC(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_GFERC_OFFSET)
#define AVR32_GPIO_GFERT(n)      (AVR32_GPIOn_BASE(n)+AVR32_GPIO_GFERT_OFFSET)
#define AVR32_GPIO_IFR(n)        (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IFR_OFFSET)
#define AVR32_GPIO_IFRC(n)       (AVR32_GPIOn_BASE(n)+AVR32_GPIO_IFRC_OFFSET)

#define AVR32_GPIO0_GPER         (AVR32_GPIO0_BASE+AVR32_GPIO_GPER_OFFSET)
#define AVR32_GPIO0_GPERS        (AVR32_GPIO0_BASE+AVR32_GPIO_GPERS_OFFSET)
#define AVR32_GPIO0_GPERC        (AVR32_GPIO0_BASE+AVR32_GPIO_GPERC_OFFSET)
#define AVR32_GPIO0_GPERT        (AVR32_GPIO0_BASE+AVR32_GPIO_GPERT_OFFSET)
#define AVR32_GPIO0_PMR0         (AVR32_GPIO0_BASE+AVR32_GPIO_PMR0_OFFSET)
#define AVR32_GPIO0_PMR0S        (AVR32_GPIO0_BASE+AVR32_GPIO_PMR0S_OFFSET)
#define AVR32_GPIO0_PMR0C        (AVR32_GPIO0_BASE+AVR32_GPIO_PMR0C_OFFSET)
#define AVR32_GPIO0_PMR0T        (AVR32_GPIO0_BASE+AVR32_GPIO_PMR0T_OFFSET)
#define AVR32_GPIO0_PMR1         (AVR32_GPIO0_BASE+AVR32_GPIO_PMR1_OFFSET)
#define AVR32_GPIO0_PMR1S        (AVR32_GPIO0_BASE+AVR32_GPIO_PMR1S_OFFSET)
#define AVR32_GPIO0_PMR1C        (AVR32_GPIO0_BASE+AVR32_GPIO_PMR1C_OFFSET)
#define AVR32_GPIO0_PMR1T        (AVR32_GPIO0_BASE+AVR32_GPIO_PMR1T_OFFSET)
#define AVR32_GPIO0_ODER         (AVR32_GPIO0_BASE+AVR32_GPIO_ODER_OFFSET)
#define AVR32_GPIO0_ODERS        (AVR32_GPIO0_BASE+AVR32_GPIO_ODERS_OFFSET)
#define AVR32_GPIO0_ODERC        (AVR32_GPIO0_BASE+AVR32_GPIO_ODERC_OFFSET)
#define AVR32_GPIO0_ODERT        (AVR32_GPIO0_BASE+AVR32_GPIO_ODERT_OFFSET)
#define AVR32_GPIO0_OVR          (AVR32_GPIO0_BASE+AVR32_GPIO_OVR_OFFSET)
#define AVR32_GPIO0_OVRS         (AVR32_GPIO0_BASE+AVR32_GPIO_OVRS_OFFSET)
#define AVR32_GPIO0_OVRC         (AVR32_GPIO0_BASE+AVR32_GPIO_OVRC_OFFSET)
#define AVR32_GPIO0_OVRT         (AVR32_GPIO0_BASE+AVR32_GPIO_OVRT_OFFSET)
#define AVR32_GPIO0_PVR          (AVR32_GPIO0_BASE+AVR32_GPIO_PVR_OFFSET)
#define AVR32_GPIO0_PUER         (AVR32_GPIO0_BASE+AVR32_GPIO_PUER_OFFSET)
#define AVR32_GPIO0_PUERS        (AVR32_GPIO0_BASE+AVR32_GPIO_PUERS_OFFSET)
#define AVR32_GPIO0_PUERC        (AVR32_GPIO0_BASE+AVR32_GPIO_PUERC_OFFSET)
#define AVR32_GPIO0_PUERT        (AVR32_GPIO0_BASE+AVR32_GPIO_PUERT_OFFSET)
#define AVR32_GPIO0_IER          (AVR32_GPIO0_BASE+AVR32_GPIO_IER_OFFSET)
#define AVR32_GPIO0_IERS         (AVR32_GPIO0_BASE+AVR32_GPIO_IERS_OFFSET)
#define AVR32_GPIO0_IERC         (AVR32_GPIO0_BASE+AVR32_GPIO_IERC_OFFSET)
#define AVR32_GPIO0_IERT         (AVR32_GPIO0_BASE+AVR32_GPIO_IERT_OFFSET)
#define AVR32_GPIO0_IMR0         (AVR32_GPIO0_BASE+AVR32_GPIO_IMR0_OFFSET)
#define AVR32_GPIO0_IMR0S        (AVR32_GPIO0_BASE+AVR32_GPIO_IMR0S_OFFSET)
#define AVR32_GPIO0_IMR0C        (AVR32_GPIO0_BASE+AVR32_GPIO_IMR0C_OFFSET)
#define AVR32_GPIO0_IMR0T        (AVR32_GPIO0_BASE+AVR32_GPIO_IMR0T_OFFSET)
#define AVR32_GPIO0_IMR1         (AVR32_GPIO0_BASE+AVR32_GPIO_IMR1_OFFSET)
#define AVR32_GPIO0_IMR1S        (AVR32_GPIO0_BASE+AVR32_GPIO_IMR1S_OFFSET)
#define AVR32_GPIO0_IMR1C        (AVR32_GPIO0_BASE+AVR32_GPIO_IMR1C_OFFSET)
#define AVR32_GPIO0_IMR1T        (AVR32_GPIO0_BASE+AVR32_GPIO_IMR1T_OFFSET)
#define AVR32_GPIO0_GFER         (AVR32_GPIO0_BASE+AVR32_GPIO_GFER_OFFSET)
#define AVR32_GPIO0_GFERS        (AVR32_GPIO0_BASE+AVR32_GPIO_GFERS_OFFSET)
#define AVR32_GPIO0_GFERC        (AVR32_GPIO0_BASE+AVR32_GPIO_GFERC_OFFSET)
#define AVR32_GPIO0_GFERT        (AVR32_GPIO0_BASE+AVR32_GPIO_GFERT_OFFSET)
#define AVR32_GPIO0_IFR          (AVR32_GPIO0_BASE+AVR32_GPIO_IFR_OFFSET)
#define AVR32_GPIO0_IFRC         (AVR32_GPIO0_BASE+AVR32_GPIO_IFRC_OFFSET)

#define AVR32_GPIO1_GPER         (AVR32_GPIO1_BASE+AVR32_GPIO_GPER_OFFSET)
#define AVR32_GPIO1_GPERS        (AVR32_GPIO1_BASE+AVR32_GPIO_GPERS_OFFSET)
#define AVR32_GPIO1_GPERC        (AVR32_GPIO1_BASE+AVR32_GPIO_GPERC_OFFSET)
#define AVR32_GPIO1_GPERT        (AVR32_GPIO1_BASE+AVR32_GPIO_GPERT_OFFSET)
#define AVR32_GPIO1_PMR0         (AVR32_GPIO1_BASE+AVR32_GPIO_PMR0_OFFSET)
#define AVR32_GPIO1_PMR0S        (AVR32_GPIO1_BASE+AVR32_GPIO_PMR0S_OFFSET)
#define AVR32_GPIO1_PMR0C        (AVR32_GPIO1_BASE+AVR32_GPIO_PMR0C_OFFSET)
#define AVR32_GPIO1_PMR0T        (AVR32_GPIO1_BASE+AVR32_GPIO_PMR0T_OFFSET)
#define AVR32_GPIO1_PMR1         (AVR32_GPIO1_BASE+AVR32_GPIO_PMR1_OFFSET)
#define AVR32_GPIO1_PMR1S        (AVR32_GPIO1_BASE+AVR32_GPIO_PMR1S_OFFSET)
#define AVR32_GPIO1_PMR1C        (AVR32_GPIO1_BASE+AVR32_GPIO_PMR1C_OFFSET)
#define AVR32_GPIO1_PMR1T        (AVR32_GPIO1_BASE+AVR32_GPIO_PMR1T_OFFSET)
#define AVR32_GPIO1_ODER         (AVR32_GPIO1_BASE+AVR32_GPIO_ODER_OFFSET)
#define AVR32_GPIO1_ODERS        (AVR32_GPIO1_BASE+AVR32_GPIO_ODERS_OFFSET)
#define AVR32_GPIO1_ODERC        (AVR32_GPIO1_BASE+AVR32_GPIO_ODERC_OFFSET)
#define AVR32_GPIO1_ODERT        (AVR32_GPIO1_BASE+AVR32_GPIO_ODERT_OFFSET)
#define AVR32_GPIO1_OVR          (AVR32_GPIO1_BASE+AVR32_GPIO_OVR_OFFSET)
#define AVR32_GPIO1_OVRS         (AVR32_GPIO1_BASE+AVR32_GPIO_OVRS_OFFSET)
#define AVR32_GPIO1_OVRC         (AVR32_GPIO1_BASE+AVR32_GPIO_OVRC_OFFSET)
#define AVR32_GPIO1_OVRT         (AVR32_GPIO1_BASE+AVR32_GPIO_OVRT_OFFSET)
#define AVR32_GPIO1_PVR          (AVR32_GPIO1_BASE+AVR32_GPIO_PVR_OFFSET)
#define AVR32_GPIO1_PUER         (AVR32_GPIO1_BASE+AVR32_GPIO_PUER_OFFSET)
#define AVR32_GPIO1_PUERS        (AVR32_GPIO1_BASE+AVR32_GPIO_PUERS_OFFSET)
#define AVR32_GPIO1_PUERC        (AVR32_GPIO1_BASE+AVR32_GPIO_PUERC_OFFSET)
#define AVR32_GPIO1_PUERT        (AVR32_GPIO1_BASE+AVR32_GPIO_PUERT_OFFSET)
#define AVR32_GPIO1_IER          (AVR32_GPIO1_BASE+AVR32_GPIO_IER_OFFSET)
#define AVR32_GPIO1_IERS         (AVR32_GPIO1_BASE+AVR32_GPIO_IERS_OFFSET)
#define AVR32_GPIO1_IERC         (AVR32_GPIO1_BASE+AVR32_GPIO_IERC_OFFSET)
#define AVR32_GPIO1_IERT         (AVR32_GPIO1_BASE+AVR32_GPIO_IERT_OFFSET)
#define AVR32_GPIO1_IMR0         (AVR32_GPIO1_BASE+AVR32_GPIO_IMR0_OFFSET)
#define AVR32_GPIO1_IMR0S        (AVR32_GPIO1_BASE+AVR32_GPIO_IMR0S_OFFSET)
#define AVR32_GPIO1_IMR0C        (AVR32_GPIO1_BASE+AVR32_GPIO_IMR0C_OFFSET)
#define AVR32_GPIO1_IMR0T        (AVR32_GPIO1_BASE+AVR32_GPIO_IMR0T_OFFSET)
#define AVR32_GPIO1_IMR1         (AVR32_GPIO1_BASE+AVR32_GPIO_IMR1_OFFSET)
#define AVR32_GPIO1_IMR1S        (AVR32_GPIO1_BASE+AVR32_GPIO_IMR1S_OFFSET)
#define AVR32_GPIO1_IMR1C        (AVR32_GPIO1_BASE+AVR32_GPIO_IMR1C_OFFSET)
#define AVR32_GPIO1_IMR1T        (AVR32_GPIO1_BASE+AVR32_GPIO_IMR1T_OFFSET)
#define AVR32_GPIO1_GFER         (AVR32_GPIO1_BASE+AVR32_GPIO_GFER_OFFSET)
#define AVR32_GPIO1_GFERS        (AVR32_GPIO1_BASE+AVR32_GPIO_GFERS_OFFSET)
#define AVR32_GPIO1_GFERC        (AVR32_GPIO1_BASE+AVR32_GPIO_GFERC_OFFSET)
#define AVR32_GPIO1_GFERT        (AVR32_GPIO1_BASE+AVR32_GPIO_GFERT_OFFSET)
#define AVR32_GPIO1_IFR          (AVR32_GPIO1_BASE+AVR32_GPIO_IFR_OFFSET)
#define AVR32_GPIO1_IFRC         (AVR32_GPIO1_BASE+AVR32_GPIO_IFRC_OFFSET)

#define AVR32_GPIO2_GPER         (AVR32_GPIO2_BASE+AVR32_GPIO_GPER_OFFSET)
#define AVR32_GPIO2_GPERS        (AVR32_GPIO2_BASE+AVR32_GPIO_GPERS_OFFSET)
#define AVR32_GPIO2_GPERC        (AVR32_GPIO2_BASE+AVR32_GPIO_GPERC_OFFSET)
#define AVR32_GPIO2_GPERT        (AVR32_GPIO2_BASE+AVR32_GPIO_GPERT_OFFSET)
#define AVR32_GPIO2_PMR0         (AVR32_GPIO2_BASE+AVR32_GPIO_PMR0_OFFSET)
#define AVR32_GPIO2_PMR0S        (AVR32_GPIO2_BASE+AVR32_GPIO_PMR0S_OFFSET)
#define AVR32_GPIO2_PMR0C        (AVR32_GPIO2_BASE+AVR32_GPIO_PMR0C_OFFSET)
#define AVR32_GPIO2_PMR0T        (AVR32_GPIO2_BASE+AVR32_GPIO_PMR0T_OFFSET)
#define AVR32_GPIO2_PMR1         (AVR32_GPIO2_BASE+AVR32_GPIO_PMR1_OFFSET)
#define AVR32_GPIO2_PMR1S        (AVR32_GPIO2_BASE+AVR32_GPIO_PMR1S_OFFSET)
#define AVR32_GPIO2_PMR1C        (AVR32_GPIO2_BASE+AVR32_GPIO_PMR1C_OFFSET)
#define AVR32_GPIO2_PMR1T        (AVR32_GPIO2_BASE+AVR32_GPIO_PMR1T_OFFSET)
#define AVR32_GPIO2_ODER         (AVR32_GPIO2_BASE+AVR32_GPIO_ODER_OFFSET)
#define AVR32_GPIO2_ODERS        (AVR32_GPIO2_BASE+AVR32_GPIO_ODERS_OFFSET)
#define AVR32_GPIO2_ODERC        (AVR32_GPIO2_BASE+AVR32_GPIO_ODERC_OFFSET)
#define AVR32_GPIO2_ODERT        (AVR32_GPIO2_BASE+AVR32_GPIO_ODERT_OFFSET)
#define AVR32_GPIO2_OVR          (AVR32_GPIO2_BASE+AVR32_GPIO_OVR_OFFSET)
#define AVR32_GPIO2_OVRS         (AVR32_GPIO2_BASE+AVR32_GPIO_OVRS_OFFSET)
#define AVR32_GPIO2_OVRC         (AVR32_GPIO2_BASE+AVR32_GPIO_OVRC_OFFSET)
#define AVR32_GPIO2_OVRT         (AVR32_GPIO2_BASE+AVR32_GPIO_OVRT_OFFSET)
#define AVR32_GPIO2_PVR          (AVR32_GPIO2_BASE+AVR32_GPIO_PVR_OFFSET)
#define AVR32_GPIO2_PUER         (AVR32_GPIO2_BASE+AVR32_GPIO_PUER_OFFSET)
#define AVR32_GPIO2_PUERS        (AVR32_GPIO2_BASE+AVR32_GPIO_PUERS_OFFSET)
#define AVR32_GPIO2_PUERC        (AVR32_GPIO2_BASE+AVR32_GPIO_PUERC_OFFSET)
#define AVR32_GPIO2_PUERT        (AVR32_GPIO2_BASE+AVR32_GPIO_PUERT_OFFSET)
#define AVR32_GPIO2_IER          (AVR32_GPIO2_BASE+AVR32_GPIO_IER_OFFSET)
#define AVR32_GPIO2_IERS         (AVR32_GPIO2_BASE+AVR32_GPIO_IERS_OFFSET)
#define AVR32_GPIO2_IERC         (AVR32_GPIO2_BASE+AVR32_GPIO_IERC_OFFSET)
#define AVR32_GPIO2_IERT         (AVR32_GPIO2_BASE+AVR32_GPIO_IERT_OFFSET)
#define AVR32_GPIO2_IMR0         (AVR32_GPIO2_BASE+AVR32_GPIO_IMR0_OFFSET)
#define AVR32_GPIO2_IMR0S        (AVR32_GPIO2_BASE+AVR32_GPIO_IMR0S_OFFSET)
#define AVR32_GPIO2_IMR0C        (AVR32_GPIO2_BASE+AVR32_GPIO_IMR0C_OFFSET)
#define AVR32_GPIO2_IMR0T        (AVR32_GPIO2_BASE+AVR32_GPIO_IMR0T_OFFSET)
#define AVR32_GPIO2_IMR1         (AVR32_GPIO2_BASE+AVR32_GPIO_IMR1_OFFSET)
#define AVR32_GPIO2_IMR1S        (AVR32_GPIO2_BASE+AVR32_GPIO_IMR1S_OFFSET)
#define AVR32_GPIO2_IMR1C        (AVR32_GPIO2_BASE+AVR32_GPIO_IMR1C_OFFSET)
#define AVR32_GPIO2_IMR1T        (AVR32_GPIO2_BASE+AVR32_GPIO_IMR1T_OFFSET)
#define AVR32_GPIO2_GFER         (AVR32_GPIO2_BASE+AVR32_GPIO_GFER_OFFSET)
#define AVR32_GPIO2_GFERS        (AVR32_GPIO2_BASE+AVR32_GPIO_GFERS_OFFSET)
#define AVR32_GPIO2_GFERC        (AVR32_GPIO2_BASE+AVR32_GPIO_GFERC_OFFSET)
#define AVR32_GPIO2_GFERT        (AVR32_GPIO2_BASE+AVR32_GPIO_GFERT_OFFSET)
#define AVR32_GPIO2_IFR          (AVR32_GPIO2_BASE+AVR32_GPIO_IFR_OFFSET)
#define AVR32_GPIO2_IFRC         (AVR32_GPIO2_BASE+AVR32_GPIO_IFRC_OFFSET)

#define AVR32_GPIO3_GPER         (AVR32_GPIO3_BASE+AVR32_GPIO_GPER_OFFSET)
#define AVR32_GPIO3_GPERS        (AVR32_GPIO3_BASE+AVR32_GPIO_GPERS_OFFSET)
#define AVR32_GPIO3_GPERC        (AVR32_GPIO3_BASE+AVR32_GPIO_GPERC_OFFSET)
#define AVR32_GPIO3_GPERT        (AVR32_GPIO3_BASE+AVR32_GPIO_GPERT_OFFSET)
#define AVR32_GPIO3_PMR0         (AVR32_GPIO3_BASE+AVR32_GPIO_PMR0_OFFSET)
#define AVR32_GPIO3_PMR0S        (AVR32_GPIO3_BASE+AVR32_GPIO_PMR0S_OFFSET)
#define AVR32_GPIO3_PMR0C        (AVR32_GPIO3_BASE+AVR32_GPIO_PMR0C_OFFSET)
#define AVR32_GPIO3_PMR0T        (AVR32_GPIO3_BASE+AVR32_GPIO_PMR0T_OFFSET)
#define AVR32_GPIO3_PMR1         (AVR32_GPIO3_BASE+AVR32_GPIO_PMR1_OFFSET)
#define AVR32_GPIO3_PMR1S        (AVR32_GPIO3_BASE+AVR32_GPIO_PMR1S_OFFSET)
#define AVR32_GPIO3_PMR1C        (AVR32_GPIO3_BASE+AVR32_GPIO_PMR1C_OFFSET)
#define AVR32_GPIO3_PMR1T        (AVR32_GPIO3_BASE+AVR32_GPIO_PMR1T_OFFSET)
#define AVR32_GPIO3_ODER         (AVR32_GPIO3_BASE+AVR32_GPIO_ODER_OFFSET)
#define AVR32_GPIO3_ODERS        (AVR32_GPIO3_BASE+AVR32_GPIO_ODERS_OFFSET)
#define AVR32_GPIO3_ODERC        (AVR32_GPIO3_BASE+AVR32_GPIO_ODERC_OFFSET)
#define AVR32_GPIO3_ODERT        (AVR32_GPIO3_BASE+AVR32_GPIO_ODERT_OFFSET)
#define AVR32_GPIO3_OVR          (AVR32_GPIO3_BASE+AVR32_GPIO_OVR_OFFSET)
#define AVR32_GPIO3_OVRS         (AVR32_GPIO3_BASE+AVR32_GPIO_OVRS_OFFSET)
#define AVR32_GPIO3_OVRC         (AVR32_GPIO3_BASE+AVR32_GPIO_OVRC_OFFSET)
#define AVR32_GPIO3_OVRT         (AVR32_GPIO3_BASE+AVR32_GPIO_OVRT_OFFSET)
#define AVR32_GPIO3_PVR          (AVR32_GPIO3_BASE+AVR32_GPIO_PVR_OFFSET)
#define AVR32_GPIO3_PUER         (AVR32_GPIO3_BASE+AVR32_GPIO_PUER_OFFSET)
#define AVR32_GPIO3_PUERS        (AVR32_GPIO3_BASE+AVR32_GPIO_PUERS_OFFSET)
#define AVR32_GPIO3_PUERC        (AVR32_GPIO3_BASE+AVR32_GPIO_PUERC_OFFSET)
#define AVR32_GPIO3_PUERT        (AVR32_GPIO3_BASE+AVR32_GPIO_PUERT_OFFSET)
#define AVR32_GPIO3_IER          (AVR32_GPIO3_BASE+AVR32_GPIO_IER_OFFSET)
#define AVR32_GPIO3_IERS         (AVR32_GPIO3_BASE+AVR32_GPIO_IERS_OFFSET)
#define AVR32_GPIO3_IERC         (AVR32_GPIO3_BASE+AVR32_GPIO_IERC_OFFSET)
#define AVR32_GPIO3_IERT         (AVR32_GPIO3_BASE+AVR32_GPIO_IERT_OFFSET)
#define AVR32_GPIO3_IMR0         (AVR32_GPIO3_BASE+AVR32_GPIO_IMR0_OFFSET)
#define AVR32_GPIO3_IMR0S        (AVR32_GPIO3_BASE+AVR32_GPIO_IMR0S_OFFSET)
#define AVR32_GPIO3_IMR0C        (AVR32_GPIO3_BASE+AVR32_GPIO_IMR0C_OFFSET)
#define AVR32_GPIO3_IMR0T        (AVR32_GPIO3_BASE+AVR32_GPIO_IMR0T_OFFSET)
#define AVR32_GPIO3_IMR1         (AVR32_GPIO3_BASE+AVR32_GPIO_IMR1_OFFSET)
#define AVR32_GPIO3_IMR1S        (AVR32_GPIO3_BASE+AVR32_GPIO_IMR1S_OFFSET)
#define AVR32_GPIO3_IMR1C        (AVR32_GPIO3_BASE+AVR32_GPIO_IMR1C_OFFSET)
#define AVR32_GPIO3_IMR1T        (AVR32_GPIO3_BASE+AVR32_GPIO_IMR1T_OFFSET)
#define AVR32_GPIO3_GFER         (AVR32_GPIO3_BASE+AVR32_GPIO_GFER_OFFSET)
#define AVR32_GPIO3_GFERS        (AVR32_GPIO3_BASE+AVR32_GPIO_GFERS_OFFSET)
#define AVR32_GPIO3_GFERC        (AVR32_GPIO3_BASE+AVR32_GPIO_GFERC_OFFSET)
#define AVR32_GPIO3_GFERT        (AVR32_GPIO3_BASE+AVR32_GPIO_GFERT_OFFSET)
#define AVR32_GPIO3_IFR          (AVR32_GPIO3_BASE+AVR32_GPIO_IFR_OFFSET)
#define AVR32_GPIO3_IFRC         (AVR32_GPIO3_BASE+AVR32_GPIO_IFRC_OFFSET)

#define AVR32_GPIO4_GPER         (AVR32_GPIO4_BASE+AVR32_GPIO_GPER_OFFSET)
#define AVR32_GPIO4_GPERS        (AVR32_GPIO4_BASE+AVR32_GPIO_GPERS_OFFSET)
#define AVR32_GPIO4_GPERC        (AVR32_GPIO4_BASE+AVR32_GPIO_GPERC_OFFSET)
#define AVR32_GPIO4_GPERT        (AVR32_GPIO4_BASE+AVR32_GPIO_GPERT_OFFSET)
#define AVR32_GPIO4_PMR0         (AVR32_GPIO4_BASE+AVR32_GPIO_PMR0_OFFSET)
#define AVR32_GPIO4_PMR0S        (AVR32_GPIO4_BASE+AVR32_GPIO_PMR0S_OFFSET)
#define AVR32_GPIO4_PMR0C        (AVR32_GPIO4_BASE+AVR32_GPIO_PMR0C_OFFSET)
#define AVR32_GPIO4_PMR0T        (AVR32_GPIO4_BASE+AVR32_GPIO_PMR0T_OFFSET)
#define AVR32_GPIO4_PMR1         (AVR32_GPIO4_BASE+AVR32_GPIO_PMR1_OFFSET)
#define AVR32_GPIO4_PMR1S        (AVR32_GPIO4_BASE+AVR32_GPIO_PMR1S_OFFSET)
#define AVR32_GPIO4_PMR1C        (AVR32_GPIO4_BASE+AVR32_GPIO_PMR1C_OFFSET)
#define AVR32_GPIO4_PMR1T        (AVR32_GPIO4_BASE+AVR32_GPIO_PMR1T_OFFSET)
#define AVR32_GPIO4_ODER         (AVR32_GPIO4_BASE+AVR32_GPIO_ODER_OFFSET)
#define AVR32_GPIO4_ODERS        (AVR32_GPIO4_BASE+AVR32_GPIO_ODERS_OFFSET)
#define AVR32_GPIO4_ODERC        (AVR32_GPIO4_BASE+AVR32_GPIO_ODERC_OFFSET)
#define AVR32_GPIO4_ODERT        (AVR32_GPIO4_BASE+AVR32_GPIO_ODERT_OFFSET)
#define AVR32_GPIO4_OVR          (AVR32_GPIO4_BASE+AVR32_GPIO_OVR_OFFSET)
#define AVR32_GPIO4_OVRS         (AVR32_GPIO4_BASE+AVR32_GPIO_OVRS_OFFSET)
#define AVR32_GPIO4_OVRC         (AVR32_GPIO4_BASE+AVR32_GPIO_OVRC_OFFSET)
#define AVR32_GPIO4_OVRT         (AVR32_GPIO4_BASE+AVR32_GPIO_OVRT_OFFSET)
#define AVR32_GPIO4_PVR          (AVR32_GPIO4_BASE+AVR32_GPIO_PVR_OFFSET)
#define AVR32_GPIO4_PUER         (AVR32_GPIO4_BASE+AVR32_GPIO_PUER_OFFSET)
#define AVR32_GPIO4_PUERS        (AVR32_GPIO4_BASE+AVR32_GPIO_PUERS_OFFSET)
#define AVR32_GPIO4_PUERC        (AVR32_GPIO4_BASE+AVR32_GPIO_PUERC_OFFSET)
#define AVR32_GPIO4_PUERT        (AVR32_GPIO4_BASE+AVR32_GPIO_PUERT_OFFSET)
#define AVR32_GPIO4_IER          (AVR32_GPIO4_BASE+AVR32_GPIO_IER_OFFSET)
#define AVR32_GPIO4_IERS         (AVR32_GPIO4_BASE+AVR32_GPIO_IERS_OFFSET)
#define AVR32_GPIO4_IERC         (AVR32_GPIO4_BASE+AVR32_GPIO_IERC_OFFSET)
#define AVR32_GPIO4_IERT         (AVR32_GPIO4_BASE+AVR32_GPIO_IERT_OFFSET)
#define AVR32_GPIO4_IMR0         (AVR32_GPIO4_BASE+AVR32_GPIO_IMR0_OFFSET)
#define AVR32_GPIO4_IMR0S        (AVR32_GPIO4_BASE+AVR32_GPIO_IMR0S_OFFSET)
#define AVR32_GPIO4_IMR0C        (AVR32_GPIO4_BASE+AVR32_GPIO_IMR0C_OFFSET)
#define AVR32_GPIO4_IMR0T        (AVR32_GPIO4_BASE+AVR32_GPIO_IMR0T_OFFSET)
#define AVR32_GPIO4_IMR1         (AVR32_GPIO4_BASE+AVR32_GPIO_IMR1_OFFSET)
#define AVR32_GPIO4_IMR1S        (AVR32_GPIO4_BASE+AVR32_GPIO_IMR1S_OFFSET)
#define AVR32_GPIO4_IMR1C        (AVR32_GPIO4_BASE+AVR32_GPIO_IMR1C_OFFSET)
#define AVR32_GPIO4_IMR1T        (AVR32_GPIO4_BASE+AVR32_GPIO_IMR1T_OFFSET)
#define AVR32_GPIO4_GFER         (AVR32_GPIO4_BASE+AVR32_GPIO_GFER_OFFSET)
#define AVR32_GPIO4_GFERS        (AVR32_GPIO4_BASE+AVR32_GPIO_GFERS_OFFSET)
#define AVR32_GPIO4_GFERC        (AVR32_GPIO4_BASE+AVR32_GPIO_GFERC_OFFSET)
#define AVR32_GPIO4_GFERT        (AVR32_GPIO4_BASE+AVR32_GPIO_GFERT_OFFSET)
#define AVR32_GPIO4_IFR          (AVR32_GPIO4_BASE+AVR32_GPIO_IFR_OFFSET)
#define AVR32_GPIO4_IFRC         (AVR32_GPIO4_BASE+AVR32_GPIO_IFRC_OFFSET)

/* Local bus mapped GPIO registers */

#define AVR32_GPIO0_LBUS_ODER    (AVR32_GPIO0_LBUS_BASE+AVR32_GPIO_ODER_OFFSET)
#define AVR32_GPIO0_LBUS_ODERS   (AVR32_GPIO0_LBUS_BASE+AVR32_GPIO_ODERS_OFFSET)
#define AVR32_GPIO0_LBUS_ODERC   (AVR32_GPIO0_LBUS_BASE+AVR32_GPIO_ODERC_OFFSET)
#define AVR32_GPIO0_LBUS_ODERT   (AVR32_GPIO0_LBUS_BASE+AVR32_GPIO_ODERT_OFFSET)
#define AVR32_GPIO0_LBUS_OVR     (AVR32_GPIO0_LBUS_BASE+AVR32_GPIO_OVR_OFFSET)
#define AVR32_GPIO0_LBUS_OVRS    (AVR32_GPIO0_LBUS_BASE+AVR32_GPIO_OVRS_OFFSET)
#define AVR32_GPIO0_LBUS_OVRC    (AVR32_GPIO0_LBUS_BASE+AVR32_GPIO_OVRC_OFFSET)
#define AVR32_GPIO0_LBUS_OVRT    (AVR32_GPIO0_LBUS_BASE+AVR32_GPIO_OVRT_OFFSET)
#define AVR32_GPIO0_LBUS_PVR     (AVR32_GPIO0_LBUS_BASE+AVR32_GPIO_PVR_OFFSET)

#define AVR32_GPIO1_LBUS_ODER    (AVR32_GPIO1_LBUS_BASE+AVR32_GPIO_ODER_OFFSET)
#define AVR32_GPIO1_LBUS_ODERS   (AVR32_GPIO1_LBUS_BASE+AVR32_GPIO_ODERS_OFFSET)
#define AVR32_GPIO1_LBUS_ODERC   (AVR32_GPIO1_LBUS_BASE+AVR32_GPIO_ODERC_OFFSET)
#define AVR32_GPIO1_LBUS_ODERT   (AVR32_GPIO1_LBUS_BASE+AVR32_GPIO_ODERT_OFFSET)
#define AVR32_GPIO1_LBUS_OVR     (AVR32_GPIO1_LBUS_BASE+AVR32_GPIO_OVR_OFFSET)
#define AVR32_GPIO1_LBUS_OVRS    (AVR32_GPIO1_LBUS_BASE+AVR32_GPIO_OVRS_OFFSET)
#define AVR32_GPIO1_LBUS_OVRC    (AVR32_GPIO1_LBUS_BASE+AVR32_GPIO_OVRC_OFFSET)
#define AVR32_GPIO1_LBUS_OVRT    (AVR32_GPIO1_LBUS_BASE+AVR32_GPIO_OVRT_OFFSET)
#define AVR32_GPIO1_LBUS_PVR     (AVR32_GPIO1_LBUS_BASE+AVR32_GPIO_PVR_OFFSET)

/* Register Bit-field Definitions *******************************************/

/* For all registers, there are 32 bits,
 * each associated with one pin on the port.
 */

#define GPIO_PIN(n)              (1 << (n))
#define GPIO_PIN0                (1 << 0)
#define GPIO_PIN1                (1 << 1)
#define GPIO_PIN2                (1 << 2)
#define GPIO_PIN3                (1 << 3)
#define GPIO_PIN4                (1 << 4)
#define GPIO_PIN5                (1 << 5)
#define GPIO_PIN6                (1 << 6)
#define GPIO_PIN7                (1 << 7)
#define GPIO_PIN8                (1 << 8)
#define GPIO_PIN9                (1 << 9)
#define GPIO_PIN10               (1 << 10)
#define GPIO_PIN11               (1 << 11)
#define GPIO_PIN12               (1 << 12)
#define GPIO_PIN13               (1 << 13)
#define GPIO_PIN14               (1 << 14)
#define GPIO_PIN15               (1 << 15)
#define GPIO_PIN16               (1 << 16)
#define GPIO_PIN17               (1 << 17)
#define GPIO_PIN18               (1 << 18)
#define GPIO_PIN19               (1 << 19)
#define GPIO_PIN20               (1 << 20)
#define GPIO_PIN21               (1 << 21)
#define GPIO_PIN22               (1 << 22)
#define GPIO_PIN23               (1 << 23)
#define GPIO_PIN24               (1 << 24)
#define GPIO_PIN25               (1 << 25)
#define GPIO_PIN26               (1 << 26)
#define GPIO_PIN27               (1 << 27)
#define GPIO_PIN28               (1 << 28)
#define GPIO_PIN29               (1 << 29)
#define GPIO_PIN30               (1 << 30)
#define GPIO_PIN31               (1 << 31)

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

/****************************************************************************
 * Public Functions Prototypes
 ****************************************************************************/

#endif /* __ARCH_AVR_SRC_AT32UC3_AT32UC3_GPIO_H */
