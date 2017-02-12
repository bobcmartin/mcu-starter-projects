/**
 * \file
 *
 * \brief Component description for TAL
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMC21_TAL_COMPONENT_
#define _SAMC21_TAL_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TAL */
/* ========================================================================== */
/** \addtogroup SAMC21_TAL Trigger Allocator */
/*@{*/

#define TAL_U2253
#define REV_TAL                     0x104

/* -------- TAL_CTRLA : (TAL Offset: 0x00) (R/W  8) Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint8_t  ENABLE:1;         /*!< bit:      1  Enable                             */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_CTRLA_OFFSET            0x00         /**< \brief (TAL_CTRLA offset) Control A */
#define TAL_CTRLA_RESETVALUE        _U(0x00);    /**< \brief (TAL_CTRLA reset_value) Control A */

#define TAL_CTRLA_SWRST_Pos         0            /**< \brief (TAL_CTRLA) Software Reset */
#define TAL_CTRLA_SWRST             (_U(0x1) << TAL_CTRLA_SWRST_Pos)
#define TAL_CTRLA_ENABLE_Pos        1            /**< \brief (TAL_CTRLA) Enable */
#define TAL_CTRLA_ENABLE            (_U(0x1) << TAL_CTRLA_ENABLE_Pos)
#define TAL_CTRLA_MASK              _U(0x03)     /**< \brief (TAL_CTRLA) MASK Register */

/* -------- TAL_RSTCTRL : (TAL Offset: 0x04) (R/W  8) Reset Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_RSTCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_RSTCTRL_OFFSET          0x04         /**< \brief (TAL_RSTCTRL offset) Reset Control */
#define TAL_RSTCTRL_RESETVALUE      _U(0x00);    /**< \brief (TAL_RSTCTRL reset_value) Reset Control */
#define TAL_RSTCTRL_MASK            _U(0x00)     /**< \brief (TAL_RSTCTRL) MASK Register */

/* -------- TAL_EXTCTRL : (TAL Offset: 0x05) (R/W  8) External Break Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  ENABLE:1;         /*!< bit:      0  Enable BRK Pin                     */
    uint8_t  INV:1;            /*!< bit:      1  Invert BRK Pin                     */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_EXTCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_EXTCTRL_OFFSET          0x05         /**< \brief (TAL_EXTCTRL offset) External Break Control */
#define TAL_EXTCTRL_RESETVALUE      _U(0x00);    /**< \brief (TAL_EXTCTRL reset_value) External Break Control */

#define TAL_EXTCTRL_ENABLE_Pos      0            /**< \brief (TAL_EXTCTRL) Enable BRK Pin */
#define TAL_EXTCTRL_ENABLE          (_U(0x1) << TAL_EXTCTRL_ENABLE_Pos)
#define TAL_EXTCTRL_INV_Pos         1            /**< \brief (TAL_EXTCTRL) Invert BRK Pin */
#define TAL_EXTCTRL_INV             (_U(0x1) << TAL_EXTCTRL_INV_Pos)
#define TAL_EXTCTRL_MASK            _U(0x03)     /**< \brief (TAL_EXTCTRL) MASK Register */

/* -------- TAL_EVCTRL : (TAL Offset: 0x06) (R/W  8) Event Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  BRKEI:1;          /*!< bit:      0  Break Input Event Enable           */
    uint8_t  BRKEO:1;          /*!< bit:      1  Break Output Event Enable          */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_EVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_EVCTRL_OFFSET           0x06         /**< \brief (TAL_EVCTRL offset) Event Control */
#define TAL_EVCTRL_RESETVALUE       _U(0x00);    /**< \brief (TAL_EVCTRL reset_value) Event Control */

#define TAL_EVCTRL_BRKEI_Pos        0            /**< \brief (TAL_EVCTRL) Break Input Event Enable */
#define TAL_EVCTRL_BRKEI            (_U(0x1) << TAL_EVCTRL_BRKEI_Pos)
#define TAL_EVCTRL_BRKEO_Pos        1            /**< \brief (TAL_EVCTRL) Break Output Event Enable */
#define TAL_EVCTRL_BRKEO            (_U(0x1) << TAL_EVCTRL_BRKEO_Pos)
#define TAL_EVCTRL_MASK             _U(0x03)     /**< \brief (TAL_EVCTRL) MASK Register */

/* -------- TAL_INTENCLR : (TAL Offset: 0x08) (R/W  8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  BRK:1;            /*!< bit:      0  Break Interrupt Enable             */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_INTENCLR_OFFSET         0x08         /**< \brief (TAL_INTENCLR offset) Interrupt Enable Clear */
#define TAL_INTENCLR_RESETVALUE     _U(0x00);    /**< \brief (TAL_INTENCLR reset_value) Interrupt Enable Clear */

#define TAL_INTENCLR_BRK_Pos        0            /**< \brief (TAL_INTENCLR) Break Interrupt Enable */
#define TAL_INTENCLR_BRK            (_U(0x1) << TAL_INTENCLR_BRK_Pos)
#define TAL_INTENCLR_MASK           _U(0x01)     /**< \brief (TAL_INTENCLR) MASK Register */

/* -------- TAL_INTENSET : (TAL Offset: 0x09) (R/W  8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  BRK:1;            /*!< bit:      0  Break Interrupt Enable             */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_INTENSET_OFFSET         0x09         /**< \brief (TAL_INTENSET offset) Interrupt Enable Set */
#define TAL_INTENSET_RESETVALUE     _U(0x00);    /**< \brief (TAL_INTENSET reset_value) Interrupt Enable Set */

#define TAL_INTENSET_BRK_Pos        0            /**< \brief (TAL_INTENSET) Break Interrupt Enable */
#define TAL_INTENSET_BRK            (_U(0x1) << TAL_INTENSET_BRK_Pos)
#define TAL_INTENSET_MASK           _U(0x01)     /**< \brief (TAL_INTENSET) MASK Register */

/* -------- TAL_INTFLAG : (TAL Offset: 0x0A) (R/W  8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  BRK:1;            /*!< bit:      0  Break                              */
    __I uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_INTFLAG_OFFSET          0x0A         /**< \brief (TAL_INTFLAG offset) Interrupt Flag Status and Clear */
#define TAL_INTFLAG_RESETVALUE      _U(0x00);    /**< \brief (TAL_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define TAL_INTFLAG_BRK_Pos         0            /**< \brief (TAL_INTFLAG) Break */
#define TAL_INTFLAG_BRK             (_U(0x1) << TAL_INTFLAG_BRK_Pos)
#define TAL_INTFLAG_MASK            _U(0x01)     /**< \brief (TAL_INTFLAG) MASK Register */

/* -------- TAL_GLOBMASK : (TAL Offset: 0x0B) (R/W  8) Global Break Requests Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CM0P:1;           /*!< bit:      0  CM0P Break Master                  */
    uint8_t  PPP:1;            /*!< bit:      1  PPP Break Master                   */
    uint8_t  :4;               /*!< bit:  2.. 5  Reserved                           */
    uint8_t  EVBRK:1;          /*!< bit:      6  Event Break Master                 */
    uint8_t  EXTBRK:1;         /*!< bit:      7  External Break Master              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_GLOBMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_GLOBMASK_OFFSET         0x0B         /**< \brief (TAL_GLOBMASK offset) Global Break Requests Mask */
#define TAL_GLOBMASK_RESETVALUE     _U(0x00);    /**< \brief (TAL_GLOBMASK reset_value) Global Break Requests Mask */

#define TAL_GLOBMASK_CM0P_Pos       0            /**< \brief (TAL_GLOBMASK) CM0P Break Master */
#define TAL_GLOBMASK_CM0P           (_U(0x1) << TAL_GLOBMASK_CM0P_Pos)
#define TAL_GLOBMASK_PPP_Pos        1            /**< \brief (TAL_GLOBMASK) PPP Break Master */
#define TAL_GLOBMASK_PPP            (_U(0x1) << TAL_GLOBMASK_PPP_Pos)
#define TAL_GLOBMASK_EVBRK_Pos      6            /**< \brief (TAL_GLOBMASK) Event Break Master */
#define TAL_GLOBMASK_EVBRK          (_U(0x1) << TAL_GLOBMASK_EVBRK_Pos)
#define TAL_GLOBMASK_EXTBRK_Pos     7            /**< \brief (TAL_GLOBMASK) External Break Master */
#define TAL_GLOBMASK_EXTBRK         (_U(0x1) << TAL_GLOBMASK_EXTBRK_Pos)
#define TAL_GLOBMASK_MASK           _U(0xC3)     /**< \brief (TAL_GLOBMASK) MASK Register */

/* -------- TAL_HALT : (TAL Offset: 0x0C) ( /W  8) Debug Halt Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CM0P:1;           /*!< bit:      0  CM0P Break Master                  */
    uint8_t  PPP:1;            /*!< bit:      1  PPP Break Master                   */
    uint8_t  :4;               /*!< bit:  2.. 5  Reserved                           */
    uint8_t  EVBRK:1;          /*!< bit:      6  Event Break Master                 */
    uint8_t  EXTBRK:1;         /*!< bit:      7  External Break Master              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_HALT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_HALT_OFFSET             0x0C         /**< \brief (TAL_HALT offset) Debug Halt Request */
#define TAL_HALT_RESETVALUE         _U(0x00);    /**< \brief (TAL_HALT reset_value) Debug Halt Request */

#define TAL_HALT_CM0P_Pos           0            /**< \brief (TAL_HALT) CM0P Break Master */
#define TAL_HALT_CM0P               (_U(0x1) << TAL_HALT_CM0P_Pos)
#define TAL_HALT_PPP_Pos            1            /**< \brief (TAL_HALT) PPP Break Master */
#define TAL_HALT_PPP                (_U(0x1) << TAL_HALT_PPP_Pos)
#define TAL_HALT_EVBRK_Pos          6            /**< \brief (TAL_HALT) Event Break Master */
#define TAL_HALT_EVBRK              (_U(0x1) << TAL_HALT_EVBRK_Pos)
#define TAL_HALT_EXTBRK_Pos         7            /**< \brief (TAL_HALT) External Break Master */
#define TAL_HALT_EXTBRK             (_U(0x1) << TAL_HALT_EXTBRK_Pos)
#define TAL_HALT_MASK               _U(0xC3)     /**< \brief (TAL_HALT) MASK Register */

/* -------- TAL_RESTART : (TAL Offset: 0x0D) ( /W  8) Debug Restart Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CM0P:1;           /*!< bit:      0  CM0P Break Master                  */
    uint8_t  PPP:1;            /*!< bit:      1  PPP Break Master                   */
    uint8_t  :5;               /*!< bit:  2.. 6  Reserved                           */
    uint8_t  EXTBRK:1;         /*!< bit:      7  External Break Master              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_RESTART_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_RESTART_OFFSET          0x0D         /**< \brief (TAL_RESTART offset) Debug Restart Request */
#define TAL_RESTART_RESETVALUE      _U(0x00);    /**< \brief (TAL_RESTART reset_value) Debug Restart Request */

#define TAL_RESTART_CM0P_Pos        0            /**< \brief (TAL_RESTART) CM0P Break Master */
#define TAL_RESTART_CM0P            (_U(0x1) << TAL_RESTART_CM0P_Pos)
#define TAL_RESTART_PPP_Pos         1            /**< \brief (TAL_RESTART) PPP Break Master */
#define TAL_RESTART_PPP             (_U(0x1) << TAL_RESTART_PPP_Pos)
#define TAL_RESTART_EXTBRK_Pos      7            /**< \brief (TAL_RESTART) External Break Master */
#define TAL_RESTART_EXTBRK          (_U(0x1) << TAL_RESTART_EXTBRK_Pos)
#define TAL_RESTART_MASK            _U(0x83)     /**< \brief (TAL_RESTART) MASK Register */

/* -------- TAL_BRKSTATUS : (TAL Offset: 0x0E) (R/  16) Break Request Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t CM0P:2;           /*!< bit:  0.. 1  CM0P Break Request                 */
    uint16_t PPP:2;            /*!< bit:  2.. 3  PPP Break Request                  */
    uint16_t :8;               /*!< bit:  4..11  Reserved                           */
    uint16_t EVBRK:2;          /*!< bit: 12..13  Event Break Request                */
    uint16_t EXTBRK:2;         /*!< bit: 14..15  External Break Request             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} TAL_BRKSTATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_BRKSTATUS_OFFSET        0x0E         /**< \brief (TAL_BRKSTATUS offset) Break Request Status */
#define TAL_BRKSTATUS_RESETVALUE    _U(0x0000);  /**< \brief (TAL_BRKSTATUS reset_value) Break Request Status */

#define TAL_BRKSTATUS_CM0P_Pos      0            /**< \brief (TAL_BRKSTATUS) CM0P Break Request */
#define TAL_BRKSTATUS_CM0P_Msk      (_U(0x3) << TAL_BRKSTATUS_CM0P_Pos)
#define TAL_BRKSTATUS_CM0P(value)   (TAL_BRKSTATUS_CM0P_Msk & ((value) << TAL_BRKSTATUS_CM0P_Pos))
#define   TAL_BRKSTATUS_CM0P_INT_RUN_Val  _U(0x0)   /**< \brief (TAL_BRKSTATUS) CM0P running, by internal request */
#define   TAL_BRKSTATUS_CM0P_INT_HALT_Val _U(0x1)   /**< \brief (TAL_BRKSTATUS) CM0P halted, by internal request */
#define   TAL_BRKSTATUS_CM0P_EXT_RUN_Val  _U(0x2)   /**< \brief (TAL_BRKSTATUS) CM0P running, by external request */
#define   TAL_BRKSTATUS_CM0P_EXT_HALT_Val _U(0x3)   /**< \brief (TAL_BRKSTATUS) CM0P halted, by external request */
#define TAL_BRKSTATUS_CM0P_INT_RUN  (TAL_BRKSTATUS_CM0P_INT_RUN_Val << TAL_BRKSTATUS_CM0P_Pos)
#define TAL_BRKSTATUS_CM0P_INT_HALT (TAL_BRKSTATUS_CM0P_INT_HALT_Val << TAL_BRKSTATUS_CM0P_Pos)
#define TAL_BRKSTATUS_CM0P_EXT_RUN  (TAL_BRKSTATUS_CM0P_EXT_RUN_Val << TAL_BRKSTATUS_CM0P_Pos)
#define TAL_BRKSTATUS_CM0P_EXT_HALT (TAL_BRKSTATUS_CM0P_EXT_HALT_Val << TAL_BRKSTATUS_CM0P_Pos)
#define TAL_BRKSTATUS_PPP_Pos       2            /**< \brief (TAL_BRKSTATUS) PPP Break Request */
#define TAL_BRKSTATUS_PPP_Msk       (_U(0x3) << TAL_BRKSTATUS_PPP_Pos)
#define TAL_BRKSTATUS_PPP(value)    (TAL_BRKSTATUS_PPP_Msk & ((value) << TAL_BRKSTATUS_PPP_Pos))
#define   TAL_BRKSTATUS_PPP_INT_RUN_Val   _U(0x0)   /**< \brief (TAL_BRKSTATUS) PPP running, by internal request */
#define   TAL_BRKSTATUS_PPP_INT_HALT_Val  _U(0x1)   /**< \brief (TAL_BRKSTATUS) PPP halted, by internal request */
#define   TAL_BRKSTATUS_PPP_EXT_RUN_Val   _U(0x2)   /**< \brief (TAL_BRKSTATUS) PPP running, by external request */
#define   TAL_BRKSTATUS_PPP_EXT_HALT_Val  _U(0x3)   /**< \brief (TAL_BRKSTATUS) PPP halted, by external request */
#define TAL_BRKSTATUS_PPP_INT_RUN   (TAL_BRKSTATUS_PPP_INT_RUN_Val << TAL_BRKSTATUS_PPP_Pos)
#define TAL_BRKSTATUS_PPP_INT_HALT  (TAL_BRKSTATUS_PPP_INT_HALT_Val << TAL_BRKSTATUS_PPP_Pos)
#define TAL_BRKSTATUS_PPP_EXT_RUN   (TAL_BRKSTATUS_PPP_EXT_RUN_Val << TAL_BRKSTATUS_PPP_Pos)
#define TAL_BRKSTATUS_PPP_EXT_HALT  (TAL_BRKSTATUS_PPP_EXT_HALT_Val << TAL_BRKSTATUS_PPP_Pos)
#define TAL_BRKSTATUS_EVBRK_Pos     12           /**< \brief (TAL_BRKSTATUS) Event Break Request */
#define TAL_BRKSTATUS_EVBRK_Msk     (_U(0x3) << TAL_BRKSTATUS_EVBRK_Pos)
#define TAL_BRKSTATUS_EVBRK(value)  (TAL_BRKSTATUS_EVBRK_Msk & ((value) << TAL_BRKSTATUS_EVBRK_Pos))
#define   TAL_BRKSTATUS_EVBRK_INT_RUN_Val _U(0x0)   /**< \brief (TAL_BRKSTATUS) EVBRK running */
#define TAL_BRKSTATUS_EVBRK_INT_RUN (TAL_BRKSTATUS_EVBRK_INT_RUN_Val << TAL_BRKSTATUS_EVBRK_Pos)
#define TAL_BRKSTATUS_EXTBRK_Pos    14           /**< \brief (TAL_BRKSTATUS) External Break Request */
#define TAL_BRKSTATUS_EXTBRK_Msk    (_U(0x3) << TAL_BRKSTATUS_EXTBRK_Pos)
#define TAL_BRKSTATUS_EXTBRK(value) (TAL_BRKSTATUS_EXTBRK_Msk & ((value) << TAL_BRKSTATUS_EXTBRK_Pos))
#define   TAL_BRKSTATUS_EXTBRK_INT_RUN_Val _U(0x0)   /**< \brief (TAL_BRKSTATUS) External CPU running, by internal request */
#define   TAL_BRKSTATUS_EXTBRK_INT_HALT_Val _U(0x1)   /**< \brief (TAL_BRKSTATUS) External CPU halted, by internal request */
#define   TAL_BRKSTATUS_EXTBRK_EXT_RUN_Val _U(0x2)   /**< \brief (TAL_BRKSTATUS) External CPU running, by external request */
#define   TAL_BRKSTATUS_EXTBRK_EXT_HALT_Val _U(0x3)   /**< \brief (TAL_BRKSTATUS) External CPU halted, by external request */
#define TAL_BRKSTATUS_EXTBRK_INT_RUN (TAL_BRKSTATUS_EXTBRK_INT_RUN_Val << TAL_BRKSTATUS_EXTBRK_Pos)
#define TAL_BRKSTATUS_EXTBRK_INT_HALT (TAL_BRKSTATUS_EXTBRK_INT_HALT_Val << TAL_BRKSTATUS_EXTBRK_Pos)
#define TAL_BRKSTATUS_EXTBRK_EXT_RUN (TAL_BRKSTATUS_EXTBRK_EXT_RUN_Val << TAL_BRKSTATUS_EXTBRK_Pos)
#define TAL_BRKSTATUS_EXTBRK_EXT_HALT (TAL_BRKSTATUS_EXTBRK_EXT_HALT_Val << TAL_BRKSTATUS_EXTBRK_Pos)
#define TAL_BRKSTATUS_MASK          _U(0xF00F)   /**< \brief (TAL_BRKSTATUS) MASK Register */

/* -------- TAL_CTICTRLA : (TAL Offset: 0x10) (R/W  8) CTIS Cross-Trigger Interface n Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  ACTION:2;         /*!< bit:  0.. 1  Action when global break issued    */
    uint8_t  RESTART:1;        /*!< bit:      2  Action when global restart issued  */
    uint8_t  :5;               /*!< bit:  3.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_CTICTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_CTICTRLA_OFFSET         0x10         /**< \brief (TAL_CTICTRLA offset) Cross-Trigger Interface n Control A */
#define TAL_CTICTRLA_RESETVALUE     _U(0x00);    /**< \brief (TAL_CTICTRLA reset_value) Cross-Trigger Interface n Control A */

#define TAL_CTICTRLA_ACTION_Pos     0            /**< \brief (TAL_CTICTRLA) Action when global break issued */
#define TAL_CTICTRLA_ACTION_Msk     (_U(0x3) << TAL_CTICTRLA_ACTION_Pos)
#define TAL_CTICTRLA_ACTION(value)  (TAL_CTICTRLA_ACTION_Msk & ((value) << TAL_CTICTRLA_ACTION_Pos))
#define   TAL_CTICTRLA_ACTION_BREAK_Val   _U(0x0)   /**< \brief (TAL_CTICTRLA) Break when requested */
#define   TAL_CTICTRLA_ACTION_INTERRUPT_Val _U(0x1)   /**< \brief (TAL_CTICTRLA) Trigger DBG interrupt instead of break */
#define   TAL_CTICTRLA_ACTION_IGNORE_Val  _U(0x2)   /**< \brief (TAL_CTICTRLA) Ignore break request */
#define TAL_CTICTRLA_ACTION_BREAK   (TAL_CTICTRLA_ACTION_BREAK_Val << TAL_CTICTRLA_ACTION_Pos)
#define TAL_CTICTRLA_ACTION_INTERRUPT (TAL_CTICTRLA_ACTION_INTERRUPT_Val << TAL_CTICTRLA_ACTION_Pos)
#define TAL_CTICTRLA_ACTION_IGNORE  (TAL_CTICTRLA_ACTION_IGNORE_Val << TAL_CTICTRLA_ACTION_Pos)
#define TAL_CTICTRLA_RESTART_Pos    2            /**< \brief (TAL_CTICTRLA) Action when global restart issued */
#define TAL_CTICTRLA_RESTART        (_U(0x1) << TAL_CTICTRLA_RESTART_Pos)
#define TAL_CTICTRLA_MASK           _U(0x07)     /**< \brief (TAL_CTICTRLA) MASK Register */

/* -------- TAL_CTIMASK : (TAL Offset: 0x11) (R/W  8) CTIS Cross-Trigger Interface n Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CM0P:1;           /*!< bit:      0  CM0P Break Master                  */
    uint8_t  PPP:1;            /*!< bit:      1  PPP Break Master                   */
    uint8_t  :4;               /*!< bit:  2.. 5  Reserved                           */
    uint8_t  EVBRK:1;          /*!< bit:      6  Event Break Master                 */
    uint8_t  EXTBRK:1;         /*!< bit:      7  External Break Master              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_CTIMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_CTIMASK_OFFSET          0x11         /**< \brief (TAL_CTIMASK offset) Cross-Trigger Interface n Mask */
#define TAL_CTIMASK_RESETVALUE      _U(0x00);    /**< \brief (TAL_CTIMASK reset_value) Cross-Trigger Interface n Mask */

#define TAL_CTIMASK_CM0P_Pos        0            /**< \brief (TAL_CTIMASK) CM0P Break Master */
#define TAL_CTIMASK_CM0P            (_U(0x1) << TAL_CTIMASK_CM0P_Pos)
#define TAL_CTIMASK_PPP_Pos         1            /**< \brief (TAL_CTIMASK) PPP Break Master */
#define TAL_CTIMASK_PPP             (_U(0x1) << TAL_CTIMASK_PPP_Pos)
#define TAL_CTIMASK_EVBRK_Pos       6            /**< \brief (TAL_CTIMASK) Event Break Master */
#define TAL_CTIMASK_EVBRK           (_U(0x1) << TAL_CTIMASK_EVBRK_Pos)
#define TAL_CTIMASK_EXTBRK_Pos      7            /**< \brief (TAL_CTIMASK) External Break Master */
#define TAL_CTIMASK_EXTBRK          (_U(0x1) << TAL_CTIMASK_EXTBRK_Pos)
#define TAL_CTIMASK_MASK            _U(0xC3)     /**< \brief (TAL_CTIMASK) MASK Register */

/* -------- TAL_INTSTATUS : (TAL Offset: 0x20) (R/   8) Interrupt n Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  IRQ0:1;           /*!< bit:      0  Interrupt Status for Interrupt Request 0 within Interrupt n */
    uint8_t  IRQ1:1;           /*!< bit:      1  Interrupt Status for Interrupt Request 1 within Interrupt n */
    uint8_t  IRQ2:1;           /*!< bit:      2  Interrupt Status for Interrupt Request 2 within Interrupt n */
    uint8_t  IRQ3:1;           /*!< bit:      3  Interrupt Status for Interrupt Request 3 within Interrupt n */
    uint8_t  IRQ4:1;           /*!< bit:      4  Interrupt Status for Interrupt Request 4 within Interrupt n */
    uint8_t  IRQ5:1;           /*!< bit:      5  Interrupt Status for Interrupt Request 5 within Interrupt n */
    uint8_t  IRQ6:1;           /*!< bit:      6  Interrupt Status for Interrupt Request 6 within Interrupt n */
    uint8_t  IRQ7:1;           /*!< bit:      7  Interrupt Status for Interrupt Request 7 within Interrupt n */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  IRQ:8;            /*!< bit:  0.. 7  Interrupt Status for Interrupt Request x within Interrupt n */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TAL_INTSTATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_INTSTATUS_OFFSET        0x20         /**< \brief (TAL_INTSTATUS offset) Interrupt n Status */
#define TAL_INTSTATUS_RESETVALUE    _U(0x00);    /**< \brief (TAL_INTSTATUS reset_value) Interrupt n Status */

#define TAL_INTSTATUS_IRQ0_Pos      0            /**< \brief (TAL_INTSTATUS) Interrupt Status for Interrupt Request 0 within Interrupt n */
#define TAL_INTSTATUS_IRQ0          (1 << TAL_INTSTATUS_IRQ0_Pos)
#define TAL_INTSTATUS_IRQ1_Pos      1            /**< \brief (TAL_INTSTATUS) Interrupt Status for Interrupt Request 1 within Interrupt n */
#define TAL_INTSTATUS_IRQ1          (1 << TAL_INTSTATUS_IRQ1_Pos)
#define TAL_INTSTATUS_IRQ2_Pos      2            /**< \brief (TAL_INTSTATUS) Interrupt Status for Interrupt Request 2 within Interrupt n */
#define TAL_INTSTATUS_IRQ2          (1 << TAL_INTSTATUS_IRQ2_Pos)
#define TAL_INTSTATUS_IRQ3_Pos      3            /**< \brief (TAL_INTSTATUS) Interrupt Status for Interrupt Request 3 within Interrupt n */
#define TAL_INTSTATUS_IRQ3          (1 << TAL_INTSTATUS_IRQ3_Pos)
#define TAL_INTSTATUS_IRQ4_Pos      4            /**< \brief (TAL_INTSTATUS) Interrupt Status for Interrupt Request 4 within Interrupt n */
#define TAL_INTSTATUS_IRQ4          (1 << TAL_INTSTATUS_IRQ4_Pos)
#define TAL_INTSTATUS_IRQ5_Pos      5            /**< \brief (TAL_INTSTATUS) Interrupt Status for Interrupt Request 5 within Interrupt n */
#define TAL_INTSTATUS_IRQ5          (1 << TAL_INTSTATUS_IRQ5_Pos)
#define TAL_INTSTATUS_IRQ6_Pos      6            /**< \brief (TAL_INTSTATUS) Interrupt Status for Interrupt Request 6 within Interrupt n */
#define TAL_INTSTATUS_IRQ6          (1 << TAL_INTSTATUS_IRQ6_Pos)
#define TAL_INTSTATUS_IRQ7_Pos      7            /**< \brief (TAL_INTSTATUS) Interrupt Status for Interrupt Request 7 within Interrupt n */
#define TAL_INTSTATUS_IRQ7          (1 << TAL_INTSTATUS_IRQ7_Pos)
#define TAL_INTSTATUS_IRQ_Pos       0            /**< \brief (TAL_INTSTATUS) Interrupt Status for Interrupt Request x within Interrupt n */
#define TAL_INTSTATUS_IRQ_Msk       (_U(0xFF) << TAL_INTSTATUS_IRQ_Pos)
#define TAL_INTSTATUS_IRQ(value)    (TAL_INTSTATUS_IRQ_Msk & ((value) << TAL_INTSTATUS_IRQ_Pos))
#define TAL_INTSTATUS_MASK          _U(0xFF)     /**< \brief (TAL_INTSTATUS) MASK Register */

/* -------- TAL_DMACPUSEL0 : (TAL Offset: 0x40) (R/W 32) DMA Channel Interrupts CPU Select 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CH0:1;            /*!< bit:      0  DMA Channel 0 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:      1  Reserved                           */
    uint32_t CH1:1;            /*!< bit:      2  DMA Channel 1 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t CH2:1;            /*!< bit:      4  DMA Channel 2 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t CH3:1;            /*!< bit:      6  DMA Channel 3 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t CH4:1;            /*!< bit:      8  DMA Channel 4 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:      9  Reserved                           */
    uint32_t CH5:1;            /*!< bit:     10  DMA Channel 5 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t CH6:1;            /*!< bit:     12  DMA Channel 6 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t CH7:1;            /*!< bit:     14  DMA Channel 7 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t CH8:1;            /*!< bit:     16  DMA Channel 8 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     17  Reserved                           */
    uint32_t CH9:1;            /*!< bit:     18  DMA Channel 9 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     19  Reserved                           */
    uint32_t CH10:1;           /*!< bit:     20  DMA Channel 10 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     21  Reserved                           */
    uint32_t CH11:1;           /*!< bit:     22  DMA Channel 11 Interrupt CPU Select */
    uint32_t :9;               /*!< bit: 23..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TAL_DMACPUSEL0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_DMACPUSEL0_OFFSET       0x40         /**< \brief (TAL_DMACPUSEL0 offset) DMA Channel Interrupts CPU Select 0 */
#define TAL_DMACPUSEL0_RESETVALUE   _U(0x00000000); /**< \brief (TAL_DMACPUSEL0 reset_value) DMA Channel Interrupts CPU Select 0 */

#define TAL_DMACPUSEL0_CH0_Pos      0            /**< \brief (TAL_DMACPUSEL0) DMA Channel 0 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH0_Msk      (_U(0x1) << TAL_DMACPUSEL0_CH0_Pos)
#define TAL_DMACPUSEL0_CH0(value)   (TAL_DMACPUSEL0_CH0_Msk & ((value) << TAL_DMACPUSEL0_CH0_Pos))
#define TAL_DMACPUSEL0_CH1_Pos      2            /**< \brief (TAL_DMACPUSEL0) DMA Channel 1 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH1_Msk      (_U(0x1) << TAL_DMACPUSEL0_CH1_Pos)
#define TAL_DMACPUSEL0_CH1(value)   (TAL_DMACPUSEL0_CH1_Msk & ((value) << TAL_DMACPUSEL0_CH1_Pos))
#define TAL_DMACPUSEL0_CH2_Pos      4            /**< \brief (TAL_DMACPUSEL0) DMA Channel 2 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH2_Msk      (_U(0x1) << TAL_DMACPUSEL0_CH2_Pos)
#define TAL_DMACPUSEL0_CH2(value)   (TAL_DMACPUSEL0_CH2_Msk & ((value) << TAL_DMACPUSEL0_CH2_Pos))
#define TAL_DMACPUSEL0_CH3_Pos      6            /**< \brief (TAL_DMACPUSEL0) DMA Channel 3 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH3_Msk      (_U(0x1) << TAL_DMACPUSEL0_CH3_Pos)
#define TAL_DMACPUSEL0_CH3(value)   (TAL_DMACPUSEL0_CH3_Msk & ((value) << TAL_DMACPUSEL0_CH3_Pos))
#define TAL_DMACPUSEL0_CH4_Pos      8            /**< \brief (TAL_DMACPUSEL0) DMA Channel 4 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH4_Msk      (_U(0x1) << TAL_DMACPUSEL0_CH4_Pos)
#define TAL_DMACPUSEL0_CH4(value)   (TAL_DMACPUSEL0_CH4_Msk & ((value) << TAL_DMACPUSEL0_CH4_Pos))
#define TAL_DMACPUSEL0_CH5_Pos      10           /**< \brief (TAL_DMACPUSEL0) DMA Channel 5 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH5_Msk      (_U(0x1) << TAL_DMACPUSEL0_CH5_Pos)
#define TAL_DMACPUSEL0_CH5(value)   (TAL_DMACPUSEL0_CH5_Msk & ((value) << TAL_DMACPUSEL0_CH5_Pos))
#define TAL_DMACPUSEL0_CH6_Pos      12           /**< \brief (TAL_DMACPUSEL0) DMA Channel 6 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH6_Msk      (_U(0x1) << TAL_DMACPUSEL0_CH6_Pos)
#define TAL_DMACPUSEL0_CH6(value)   (TAL_DMACPUSEL0_CH6_Msk & ((value) << TAL_DMACPUSEL0_CH6_Pos))
#define TAL_DMACPUSEL0_CH7_Pos      14           /**< \brief (TAL_DMACPUSEL0) DMA Channel 7 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH7_Msk      (_U(0x1) << TAL_DMACPUSEL0_CH7_Pos)
#define TAL_DMACPUSEL0_CH7(value)   (TAL_DMACPUSEL0_CH7_Msk & ((value) << TAL_DMACPUSEL0_CH7_Pos))
#define TAL_DMACPUSEL0_CH8_Pos      16           /**< \brief (TAL_DMACPUSEL0) DMA Channel 8 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH8_Msk      (_U(0x1) << TAL_DMACPUSEL0_CH8_Pos)
#define TAL_DMACPUSEL0_CH8(value)   (TAL_DMACPUSEL0_CH8_Msk & ((value) << TAL_DMACPUSEL0_CH8_Pos))
#define TAL_DMACPUSEL0_CH9_Pos      18           /**< \brief (TAL_DMACPUSEL0) DMA Channel 9 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH9_Msk      (_U(0x1) << TAL_DMACPUSEL0_CH9_Pos)
#define TAL_DMACPUSEL0_CH9(value)   (TAL_DMACPUSEL0_CH9_Msk & ((value) << TAL_DMACPUSEL0_CH9_Pos))
#define TAL_DMACPUSEL0_CH10_Pos     20           /**< \brief (TAL_DMACPUSEL0) DMA Channel 10 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH10_Msk     (_U(0x1) << TAL_DMACPUSEL0_CH10_Pos)
#define TAL_DMACPUSEL0_CH10(value)  (TAL_DMACPUSEL0_CH10_Msk & ((value) << TAL_DMACPUSEL0_CH10_Pos))
#define TAL_DMACPUSEL0_CH11_Pos     22           /**< \brief (TAL_DMACPUSEL0) DMA Channel 11 Interrupt CPU Select */
#define TAL_DMACPUSEL0_CH11_Msk     (_U(0x1) << TAL_DMACPUSEL0_CH11_Pos)
#define TAL_DMACPUSEL0_CH11(value)  (TAL_DMACPUSEL0_CH11_Msk & ((value) << TAL_DMACPUSEL0_CH11_Pos))
#define TAL_DMACPUSEL0_MASK         _U(0x00555555) /**< \brief (TAL_DMACPUSEL0) MASK Register */

/* -------- TAL_EVCPUSEL0 : (TAL Offset: 0x48) (R/W 32) EVSYS Channel Interrupts CPU Select 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CH0:1;            /*!< bit:      0  Event Channel 0 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:      1  Reserved                           */
    uint32_t CH1:1;            /*!< bit:      2  Event Channel 1 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t CH2:1;            /*!< bit:      4  Event Channel 2 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t CH3:1;            /*!< bit:      6  Event Channel 3 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t CH4:1;            /*!< bit:      8  Event Channel 4 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:      9  Reserved                           */
    uint32_t CH5:1;            /*!< bit:     10  Event Channel 5 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t CH6:1;            /*!< bit:     12  Event Channel 6 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t CH7:1;            /*!< bit:     14  Event Channel 7 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t CH8:1;            /*!< bit:     16  Event Channel 8 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     17  Reserved                           */
    uint32_t CH9:1;            /*!< bit:     18  Event Channel 9 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     19  Reserved                           */
    uint32_t CH10:1;           /*!< bit:     20  Event Channel 10 Interrupt CPU Select */
    uint32_t :1;               /*!< bit:     21  Reserved                           */
    uint32_t CH11:1;           /*!< bit:     22  Event Channel 11 Interrupt CPU Select */
    uint32_t :9;               /*!< bit: 23..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TAL_EVCPUSEL0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_EVCPUSEL0_OFFSET        0x48         /**< \brief (TAL_EVCPUSEL0 offset) EVSYS Channel Interrupts CPU Select 0 */
#define TAL_EVCPUSEL0_RESETVALUE    _U(0x00000000); /**< \brief (TAL_EVCPUSEL0 reset_value) EVSYS Channel Interrupts CPU Select 0 */

#define TAL_EVCPUSEL0_CH0_Pos       0            /**< \brief (TAL_EVCPUSEL0) Event Channel 0 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH0_Msk       (_U(0x1) << TAL_EVCPUSEL0_CH0_Pos)
#define TAL_EVCPUSEL0_CH0(value)    (TAL_EVCPUSEL0_CH0_Msk & ((value) << TAL_EVCPUSEL0_CH0_Pos))
#define TAL_EVCPUSEL0_CH1_Pos       2            /**< \brief (TAL_EVCPUSEL0) Event Channel 1 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH1_Msk       (_U(0x1) << TAL_EVCPUSEL0_CH1_Pos)
#define TAL_EVCPUSEL0_CH1(value)    (TAL_EVCPUSEL0_CH1_Msk & ((value) << TAL_EVCPUSEL0_CH1_Pos))
#define TAL_EVCPUSEL0_CH2_Pos       4            /**< \brief (TAL_EVCPUSEL0) Event Channel 2 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH2_Msk       (_U(0x1) << TAL_EVCPUSEL0_CH2_Pos)
#define TAL_EVCPUSEL0_CH2(value)    (TAL_EVCPUSEL0_CH2_Msk & ((value) << TAL_EVCPUSEL0_CH2_Pos))
#define TAL_EVCPUSEL0_CH3_Pos       6            /**< \brief (TAL_EVCPUSEL0) Event Channel 3 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH3_Msk       (_U(0x1) << TAL_EVCPUSEL0_CH3_Pos)
#define TAL_EVCPUSEL0_CH3(value)    (TAL_EVCPUSEL0_CH3_Msk & ((value) << TAL_EVCPUSEL0_CH3_Pos))
#define TAL_EVCPUSEL0_CH4_Pos       8            /**< \brief (TAL_EVCPUSEL0) Event Channel 4 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH4_Msk       (_U(0x1) << TAL_EVCPUSEL0_CH4_Pos)
#define TAL_EVCPUSEL0_CH4(value)    (TAL_EVCPUSEL0_CH4_Msk & ((value) << TAL_EVCPUSEL0_CH4_Pos))
#define TAL_EVCPUSEL0_CH5_Pos       10           /**< \brief (TAL_EVCPUSEL0) Event Channel 5 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH5_Msk       (_U(0x1) << TAL_EVCPUSEL0_CH5_Pos)
#define TAL_EVCPUSEL0_CH5(value)    (TAL_EVCPUSEL0_CH5_Msk & ((value) << TAL_EVCPUSEL0_CH5_Pos))
#define TAL_EVCPUSEL0_CH6_Pos       12           /**< \brief (TAL_EVCPUSEL0) Event Channel 6 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH6_Msk       (_U(0x1) << TAL_EVCPUSEL0_CH6_Pos)
#define TAL_EVCPUSEL0_CH6(value)    (TAL_EVCPUSEL0_CH6_Msk & ((value) << TAL_EVCPUSEL0_CH6_Pos))
#define TAL_EVCPUSEL0_CH7_Pos       14           /**< \brief (TAL_EVCPUSEL0) Event Channel 7 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH7_Msk       (_U(0x1) << TAL_EVCPUSEL0_CH7_Pos)
#define TAL_EVCPUSEL0_CH7(value)    (TAL_EVCPUSEL0_CH7_Msk & ((value) << TAL_EVCPUSEL0_CH7_Pos))
#define TAL_EVCPUSEL0_CH8_Pos       16           /**< \brief (TAL_EVCPUSEL0) Event Channel 8 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH8_Msk       (_U(0x1) << TAL_EVCPUSEL0_CH8_Pos)
#define TAL_EVCPUSEL0_CH8(value)    (TAL_EVCPUSEL0_CH8_Msk & ((value) << TAL_EVCPUSEL0_CH8_Pos))
#define TAL_EVCPUSEL0_CH9_Pos       18           /**< \brief (TAL_EVCPUSEL0) Event Channel 9 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH9_Msk       (_U(0x1) << TAL_EVCPUSEL0_CH9_Pos)
#define TAL_EVCPUSEL0_CH9(value)    (TAL_EVCPUSEL0_CH9_Msk & ((value) << TAL_EVCPUSEL0_CH9_Pos))
#define TAL_EVCPUSEL0_CH10_Pos      20           /**< \brief (TAL_EVCPUSEL0) Event Channel 10 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH10_Msk      (_U(0x1) << TAL_EVCPUSEL0_CH10_Pos)
#define TAL_EVCPUSEL0_CH10(value)   (TAL_EVCPUSEL0_CH10_Msk & ((value) << TAL_EVCPUSEL0_CH10_Pos))
#define TAL_EVCPUSEL0_CH11_Pos      22           /**< \brief (TAL_EVCPUSEL0) Event Channel 11 Interrupt CPU Select */
#define TAL_EVCPUSEL0_CH11_Msk      (_U(0x1) << TAL_EVCPUSEL0_CH11_Pos)
#define TAL_EVCPUSEL0_CH11(value)   (TAL_EVCPUSEL0_CH11_Msk & ((value) << TAL_EVCPUSEL0_CH11_Pos))
#define TAL_EVCPUSEL0_MASK          _U(0x00555555) /**< \brief (TAL_EVCPUSEL0) MASK Register */

/* -------- TAL_EICCPUSEL0 : (TAL Offset: 0x50) (R/W 32) EIC External Interrupts CPU Select 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EXTINT0:1;        /*!< bit:      0  External Interrupt 0 CPU Select    */
    uint32_t :1;               /*!< bit:      1  Reserved                           */
    uint32_t EXTINT1:1;        /*!< bit:      2  External Interrupt 1 CPU Select    */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t EXTINT2:1;        /*!< bit:      4  External Interrupt 2 CPU Select    */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t EXTINT3:1;        /*!< bit:      6  External Interrupt 3 CPU Select    */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t EXTINT4:1;        /*!< bit:      8  External Interrupt 4 CPU Select    */
    uint32_t :1;               /*!< bit:      9  Reserved                           */
    uint32_t EXTINT5:1;        /*!< bit:     10  External Interrupt 5 CPU Select    */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t EXTINT6:1;        /*!< bit:     12  External Interrupt 6 CPU Select    */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t EXTINT7:1;        /*!< bit:     14  External Interrupt 7 CPU Select    */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t EXTINT8:1;        /*!< bit:     16  External Interrupt 8 CPU Select    */
    uint32_t :1;               /*!< bit:     17  Reserved                           */
    uint32_t EXTINT9:1;        /*!< bit:     18  External Interrupt 9 CPU Select    */
    uint32_t :1;               /*!< bit:     19  Reserved                           */
    uint32_t EXTINT10:1;       /*!< bit:     20  External Interrupt 10 CPU Select   */
    uint32_t :1;               /*!< bit:     21  Reserved                           */
    uint32_t EXTINT11:1;       /*!< bit:     22  External Interrupt 11 CPU Select   */
    uint32_t :1;               /*!< bit:     23  Reserved                           */
    uint32_t EXTINT12:1;       /*!< bit:     24  External Interrupt 12 CPU Select   */
    uint32_t :1;               /*!< bit:     25  Reserved                           */
    uint32_t EXTINT13:1;       /*!< bit:     26  External Interrupt 13 CPU Select   */
    uint32_t :1;               /*!< bit:     27  Reserved                           */
    uint32_t EXTINT14:1;       /*!< bit:     28  External Interrupt 14 CPU Select   */
    uint32_t :1;               /*!< bit:     29  Reserved                           */
    uint32_t EXTINT15:1;       /*!< bit:     30  External Interrupt 15 CPU Select   */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TAL_EICCPUSEL0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_EICCPUSEL0_OFFSET       0x50         /**< \brief (TAL_EICCPUSEL0 offset) EIC External Interrupts CPU Select 0 */
#define TAL_EICCPUSEL0_RESETVALUE   _U(0x00000000); /**< \brief (TAL_EICCPUSEL0 reset_value) EIC External Interrupts CPU Select 0 */

#define TAL_EICCPUSEL0_EXTINT0_Pos  0            /**< \brief (TAL_EICCPUSEL0) External Interrupt 0 CPU Select */
#define TAL_EICCPUSEL0_EXTINT0_Msk  (_U(0x1) << TAL_EICCPUSEL0_EXTINT0_Pos)
#define TAL_EICCPUSEL0_EXTINT0(value) (TAL_EICCPUSEL0_EXTINT0_Msk & ((value) << TAL_EICCPUSEL0_EXTINT0_Pos))
#define TAL_EICCPUSEL0_EXTINT1_Pos  2            /**< \brief (TAL_EICCPUSEL0) External Interrupt 1 CPU Select */
#define TAL_EICCPUSEL0_EXTINT1_Msk  (_U(0x1) << TAL_EICCPUSEL0_EXTINT1_Pos)
#define TAL_EICCPUSEL0_EXTINT1(value) (TAL_EICCPUSEL0_EXTINT1_Msk & ((value) << TAL_EICCPUSEL0_EXTINT1_Pos))
#define TAL_EICCPUSEL0_EXTINT2_Pos  4            /**< \brief (TAL_EICCPUSEL0) External Interrupt 2 CPU Select */
#define TAL_EICCPUSEL0_EXTINT2_Msk  (_U(0x1) << TAL_EICCPUSEL0_EXTINT2_Pos)
#define TAL_EICCPUSEL0_EXTINT2(value) (TAL_EICCPUSEL0_EXTINT2_Msk & ((value) << TAL_EICCPUSEL0_EXTINT2_Pos))
#define TAL_EICCPUSEL0_EXTINT3_Pos  6            /**< \brief (TAL_EICCPUSEL0) External Interrupt 3 CPU Select */
#define TAL_EICCPUSEL0_EXTINT3_Msk  (_U(0x1) << TAL_EICCPUSEL0_EXTINT3_Pos)
#define TAL_EICCPUSEL0_EXTINT3(value) (TAL_EICCPUSEL0_EXTINT3_Msk & ((value) << TAL_EICCPUSEL0_EXTINT3_Pos))
#define TAL_EICCPUSEL0_EXTINT4_Pos  8            /**< \brief (TAL_EICCPUSEL0) External Interrupt 4 CPU Select */
#define TAL_EICCPUSEL0_EXTINT4_Msk  (_U(0x1) << TAL_EICCPUSEL0_EXTINT4_Pos)
#define TAL_EICCPUSEL0_EXTINT4(value) (TAL_EICCPUSEL0_EXTINT4_Msk & ((value) << TAL_EICCPUSEL0_EXTINT4_Pos))
#define TAL_EICCPUSEL0_EXTINT5_Pos  10           /**< \brief (TAL_EICCPUSEL0) External Interrupt 5 CPU Select */
#define TAL_EICCPUSEL0_EXTINT5_Msk  (_U(0x1) << TAL_EICCPUSEL0_EXTINT5_Pos)
#define TAL_EICCPUSEL0_EXTINT5(value) (TAL_EICCPUSEL0_EXTINT5_Msk & ((value) << TAL_EICCPUSEL0_EXTINT5_Pos))
#define TAL_EICCPUSEL0_EXTINT6_Pos  12           /**< \brief (TAL_EICCPUSEL0) External Interrupt 6 CPU Select */
#define TAL_EICCPUSEL0_EXTINT6_Msk  (_U(0x1) << TAL_EICCPUSEL0_EXTINT6_Pos)
#define TAL_EICCPUSEL0_EXTINT6(value) (TAL_EICCPUSEL0_EXTINT6_Msk & ((value) << TAL_EICCPUSEL0_EXTINT6_Pos))
#define TAL_EICCPUSEL0_EXTINT7_Pos  14           /**< \brief (TAL_EICCPUSEL0) External Interrupt 7 CPU Select */
#define TAL_EICCPUSEL0_EXTINT7_Msk  (_U(0x1) << TAL_EICCPUSEL0_EXTINT7_Pos)
#define TAL_EICCPUSEL0_EXTINT7(value) (TAL_EICCPUSEL0_EXTINT7_Msk & ((value) << TAL_EICCPUSEL0_EXTINT7_Pos))
#define TAL_EICCPUSEL0_EXTINT8_Pos  16           /**< \brief (TAL_EICCPUSEL0) External Interrupt 8 CPU Select */
#define TAL_EICCPUSEL0_EXTINT8_Msk  (_U(0x1) << TAL_EICCPUSEL0_EXTINT8_Pos)
#define TAL_EICCPUSEL0_EXTINT8(value) (TAL_EICCPUSEL0_EXTINT8_Msk & ((value) << TAL_EICCPUSEL0_EXTINT8_Pos))
#define TAL_EICCPUSEL0_EXTINT9_Pos  18           /**< \brief (TAL_EICCPUSEL0) External Interrupt 9 CPU Select */
#define TAL_EICCPUSEL0_EXTINT9_Msk  (_U(0x1) << TAL_EICCPUSEL0_EXTINT9_Pos)
#define TAL_EICCPUSEL0_EXTINT9(value) (TAL_EICCPUSEL0_EXTINT9_Msk & ((value) << TAL_EICCPUSEL0_EXTINT9_Pos))
#define TAL_EICCPUSEL0_EXTINT10_Pos 20           /**< \brief (TAL_EICCPUSEL0) External Interrupt 10 CPU Select */
#define TAL_EICCPUSEL0_EXTINT10_Msk (_U(0x1) << TAL_EICCPUSEL0_EXTINT10_Pos)
#define TAL_EICCPUSEL0_EXTINT10(value) (TAL_EICCPUSEL0_EXTINT10_Msk & ((value) << TAL_EICCPUSEL0_EXTINT10_Pos))
#define TAL_EICCPUSEL0_EXTINT11_Pos 22           /**< \brief (TAL_EICCPUSEL0) External Interrupt 11 CPU Select */
#define TAL_EICCPUSEL0_EXTINT11_Msk (_U(0x1) << TAL_EICCPUSEL0_EXTINT11_Pos)
#define TAL_EICCPUSEL0_EXTINT11(value) (TAL_EICCPUSEL0_EXTINT11_Msk & ((value) << TAL_EICCPUSEL0_EXTINT11_Pos))
#define TAL_EICCPUSEL0_EXTINT12_Pos 24           /**< \brief (TAL_EICCPUSEL0) External Interrupt 12 CPU Select */
#define TAL_EICCPUSEL0_EXTINT12_Msk (_U(0x1) << TAL_EICCPUSEL0_EXTINT12_Pos)
#define TAL_EICCPUSEL0_EXTINT12(value) (TAL_EICCPUSEL0_EXTINT12_Msk & ((value) << TAL_EICCPUSEL0_EXTINT12_Pos))
#define TAL_EICCPUSEL0_EXTINT13_Pos 26           /**< \brief (TAL_EICCPUSEL0) External Interrupt 13 CPU Select */
#define TAL_EICCPUSEL0_EXTINT13_Msk (_U(0x1) << TAL_EICCPUSEL0_EXTINT13_Pos)
#define TAL_EICCPUSEL0_EXTINT13(value) (TAL_EICCPUSEL0_EXTINT13_Msk & ((value) << TAL_EICCPUSEL0_EXTINT13_Pos))
#define TAL_EICCPUSEL0_EXTINT14_Pos 28           /**< \brief (TAL_EICCPUSEL0) External Interrupt 14 CPU Select */
#define TAL_EICCPUSEL0_EXTINT14_Msk (_U(0x1) << TAL_EICCPUSEL0_EXTINT14_Pos)
#define TAL_EICCPUSEL0_EXTINT14(value) (TAL_EICCPUSEL0_EXTINT14_Msk & ((value) << TAL_EICCPUSEL0_EXTINT14_Pos))
#define TAL_EICCPUSEL0_EXTINT15_Pos 30           /**< \brief (TAL_EICCPUSEL0) External Interrupt 15 CPU Select */
#define TAL_EICCPUSEL0_EXTINT15_Msk (_U(0x1) << TAL_EICCPUSEL0_EXTINT15_Pos)
#define TAL_EICCPUSEL0_EXTINT15(value) (TAL_EICCPUSEL0_EXTINT15_Msk & ((value) << TAL_EICCPUSEL0_EXTINT15_Pos))
#define TAL_EICCPUSEL0_MASK         _U(0x55555555) /**< \brief (TAL_EICCPUSEL0) MASK Register */

/* -------- TAL_INTCPUSEL0 : (TAL Offset: 0x58) (R/W 32) Interrupts CPU Select 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} TAL_INTCPUSEL0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_INTCPUSEL0_OFFSET       0x58         /**< \brief (TAL_INTCPUSEL0 offset) Interrupts CPU Select 0 */
#define TAL_INTCPUSEL0_RESETVALUE   _U(0x00000000); /**< \brief (TAL_INTCPUSEL0 reset_value) Interrupts CPU Select 0 */
#define TAL_INTCPUSEL0_MASK         _U(0x00000000) /**< \brief (TAL_INTCPUSEL0) MASK Register */

/* -------- TAL_INTCPUSEL1 : (TAL Offset: 0x5C) (R/W 32) Interrupts CPU Select 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} TAL_INTCPUSEL1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_INTCPUSEL1_OFFSET       0x5C         /**< \brief (TAL_INTCPUSEL1 offset) Interrupts CPU Select 1 */
#define TAL_INTCPUSEL1_RESETVALUE   _U(0x00000000); /**< \brief (TAL_INTCPUSEL1 reset_value) Interrupts CPU Select 1 */
#define TAL_INTCPUSEL1_MASK         _U(0x00000000) /**< \brief (TAL_INTCPUSEL1) MASK Register */

/* -------- TAL_IRQTRIG : (TAL Offset: 0x60) (R/W 16) Interrupt Trigger -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t ENABLE:1;         /*!< bit:      0  Trigger Enable                     */
    uint16_t IRQNUM:5;         /*!< bit:  1.. 5  Interrupt Request Number           */
    uint16_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint16_t OVERRIDE:8;       /*!< bit:  8..15  Interrupt Request Override Value   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} TAL_IRQTRIG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TAL_IRQTRIG_OFFSET          0x60         /**< \brief (TAL_IRQTRIG offset) Interrupt Trigger */
#define TAL_IRQTRIG_RESETVALUE      _U(0x0000);  /**< \brief (TAL_IRQTRIG reset_value) Interrupt Trigger */

#define TAL_IRQTRIG_ENABLE_Pos      0            /**< \brief (TAL_IRQTRIG) Trigger Enable */
#define TAL_IRQTRIG_ENABLE          (_U(0x1) << TAL_IRQTRIG_ENABLE_Pos)
#define TAL_IRQTRIG_IRQNUM_Pos      1            /**< \brief (TAL_IRQTRIG) Interrupt Request Number */
#define TAL_IRQTRIG_IRQNUM_Msk      (_U(0x1F) << TAL_IRQTRIG_IRQNUM_Pos)
#define TAL_IRQTRIG_IRQNUM(value)   (TAL_IRQTRIG_IRQNUM_Msk & ((value) << TAL_IRQTRIG_IRQNUM_Pos))
#define TAL_IRQTRIG_OVERRIDE_Pos    8            /**< \brief (TAL_IRQTRIG) Interrupt Request Override Value */
#define TAL_IRQTRIG_OVERRIDE_Msk    (_U(0xFF) << TAL_IRQTRIG_OVERRIDE_Pos)
#define TAL_IRQTRIG_OVERRIDE(value) (TAL_IRQTRIG_OVERRIDE_Msk & ((value) << TAL_IRQTRIG_OVERRIDE_Pos))
#define TAL_IRQTRIG_MASK            _U(0xFF3F)   /**< \brief (TAL_IRQTRIG) MASK Register */

/** \brief TalCtis hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO TAL_CTICTRLA_Type         CTICTRLA;    /**< \brief Offset: 0x00 (R/W  8) Cross-Trigger Interface n Control A */
  __IO TAL_CTIMASK_Type          CTIMASK;     /**< \brief Offset: 0x01 (R/W  8) Cross-Trigger Interface n Mask */
} TalCtis;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief TAL hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO TAL_CTRLA_Type            CTRLA;       /**< \brief Offset: 0x00 (R/W  8) Control A */
       RoReg8                    Reserved1[0x3];
  __IO TAL_RSTCTRL_Type          RSTCTRL;     /**< \brief Offset: 0x04 (R/W  8) Reset Control */
  __IO TAL_EXTCTRL_Type          EXTCTRL;     /**< \brief Offset: 0x05 (R/W  8) External Break Control */
  __IO TAL_EVCTRL_Type           EVCTRL;      /**< \brief Offset: 0x06 (R/W  8) Event Control */
       RoReg8                    Reserved2[0x1];
  __IO TAL_INTENCLR_Type         INTENCLR;    /**< \brief Offset: 0x08 (R/W  8) Interrupt Enable Clear */
  __IO TAL_INTENSET_Type         INTENSET;    /**< \brief Offset: 0x09 (R/W  8) Interrupt Enable Set */
  __IO TAL_INTFLAG_Type          INTFLAG;     /**< \brief Offset: 0x0A (R/W  8) Interrupt Flag Status and Clear */
  __IO TAL_GLOBMASK_Type         GLOBMASK;    /**< \brief Offset: 0x0B (R/W  8) Global Break Requests Mask */
  __O  TAL_HALT_Type             HALT;        /**< \brief Offset: 0x0C ( /W  8) Debug Halt Request */
  __O  TAL_RESTART_Type          RESTART;     /**< \brief Offset: 0x0D ( /W  8) Debug Restart Request */
  __I  TAL_BRKSTATUS_Type        BRKSTATUS;   /**< \brief Offset: 0x0E (R/  16) Break Request Status */
       TalCtis                   Ctis[3];     /**< \brief Offset: 0x10 TalCtis groups [CTI_NUM] */
       RoReg8                    Reserved3[0xA];
  __I  TAL_INTSTATUS_Type        INTSTATUS[31]; /**< \brief Offset: 0x20 (R/   8) Interrupt n Status */
       RoReg8                    Reserved4[0x1];
  __IO TAL_DMACPUSEL0_Type       DMACPUSEL0;  /**< \brief Offset: 0x40 (R/W 32) DMA Channel Interrupts CPU Select 0 */
       RoReg8                    Reserved5[0x4];
  __IO TAL_EVCPUSEL0_Type        EVCPUSEL0;   /**< \brief Offset: 0x48 (R/W 32) EVSYS Channel Interrupts CPU Select 0 */
       RoReg8                    Reserved6[0x4];
  __IO TAL_EICCPUSEL0_Type       EICCPUSEL0;  /**< \brief Offset: 0x50 (R/W 32) EIC External Interrupts CPU Select 0 */
       RoReg8                    Reserved7[0x4];
  __IO TAL_INTCPUSEL0_Type       INTCPUSEL0;  /**< \brief Offset: 0x58 (R/W 32) Interrupts CPU Select 0 */
  __IO TAL_INTCPUSEL1_Type       INTCPUSEL1;  /**< \brief Offset: 0x5C (R/W 32) Interrupts CPU Select 1 */
  __IO TAL_IRQTRIG_Type          IRQTRIG;     /**< \brief Offset: 0x60 (R/W 16) Interrupt Trigger */
} Tal;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMC21_TAL_COMPONENT_ */
