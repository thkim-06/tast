//=========================================================
// src/first_main.c: 하드웨어 구성에 의해 생성됨
//
// 이 파일은 문서를 저장할 때 업데이트됩니다.
// 구역을 안에 두다 "$[...]" 주석 태그 단독
// 그렇지 않으면 덮어쓰게 됩니다!!
//=========================================================

// 사용자 포함
#include <SI_EFM8BB52_Register_Enums.h>
#include "InitDevice.h"

// 사용자 프로토타입
// 사용자 기능

//==============================================================================
//시스템이 리셋되었을 때 기본 동작 모드로 진입하는 함수 또는 코드
//==============================================================================
extern void
enter_DefaultMode_from_RESET (void)
{
  // $[Config Calls]
  // Save the SFRPAGE
  uint8_t SFRPAGE_save = SFRPAGE;
  PORTS_0_enter_DefaultMode_from_RESET ();
  PORTS_1_enter_DefaultMode_from_RESET ();
  PORTS_3_enter_DefaultMode_from_RESET ();
  PBCFG_0_enter_DefaultMode_from_RESET ();
  // Restore the SFRPAGE
  SFRPAGE = SFRPAGE_save;
  // [Config Calls]$

}
// $[Library Includes]
// [Library Includes]$

extern void
PORTS_0_enter_DefaultMode_from_RESET (void)
{
  // $[P0 - Port 0 Pin Latch]
  // [P0 - Port 0 Pin Latch]$

  // $[P0MDOUT - Port 0 Output Mode]
  /***********************************************************************
   - P0.0 output is open-drain
   - P0.1 output is push-pull
   - P0.2 output is push-pull
   - P0.3 output is push-pull
   - P0.4 output is open-drain
   - P0.5 output is open-drain
   - P0.6 output is open-drain
   - P0.7 output is open-drain
   ***********************************************************************/
  SFRPAGE = 0x00;
  P0MDOUT = P0MDOUT_B0__OPEN_DRAIN | P0MDOUT_B1__PUSH_PULL
      | P0MDOUT_B2__PUSH_PULL | P0MDOUT_B3__PUSH_PULL | P0MDOUT_B4__OPEN_DRAIN
      | P0MDOUT_B5__OPEN_DRAIN | P0MDOUT_B6__OPEN_DRAIN
      | P0MDOUT_B7__OPEN_DRAIN;
  // [P0MDOUT - Port 0 Output Mode]$

  // $[P0MDIN - Port 0 Input Mode]
  /***********************************************************************
   - P0.0 pin is configured for analog mode
   - P0.1 pin is configured for digital mode
   - P0.2 pin is configured for digital mode
   - P0.3 pin is configured for digital mode
   - P0.4 pin is configured for analog mode
   - P0.5 pin is configured for analog mode
   - P0.6 pin is configured for analog mode
   - P0.7 pin is configured for analog mode
   ***********************************************************************/
  P0MDIN = P0MDIN_B0__ANALOG | P0MDIN_B1__DIGITAL | P0MDIN_B2__DIGITAL
      | P0MDIN_B3__DIGITAL | P0MDIN_B4__ANALOG | P0MDIN_B5__ANALOG
      | P0MDIN_B6__ANALOG | P0MDIN_B7__ANALOG;
  // [P0MDIN - Port 0 Input Mode]$

  // $[P0SKIP - Port 0 Skip]
  // [P0SKIP - Port 0 Skip]$

  // $[P0MASK - Port 0 Mask]
  // [P0MASK - Port 0 Mask]$

  // $[P0MAT - Port 0 Match]
  // [P0MAT - Port 0 Match]$

}

extern void
PBCFG_0_enter_DefaultMode_from_RESET (void)
{
  // $[XBR2 - Port I/O Crossbar 2]
  /***********************************************************************
   - Weak Pullups enabled 
   - Crossbar enabled
   - PWM single ended output for all enabled channels
   - UART1 I/O unavailable at Port pin
   - UART1 RTS1 unavailable at Port pin
   - UART1 CTS1 unavailable at Port pin
   - PWM I/O unavailable at Port pin
   ***********************************************************************/
  SFRPAGE = 0x00;
  XBR2 = XBR2_WEAKPUD__PULL_UPS_ENABLED | XBR2_XBARE__ENABLED
      | XBR2_PWMDE__SINGLE | XBR2_URT1E__DISABLED | XBR2_URT1RTSE__DISABLED
      | XBR2_URT1CTSE__DISABLED | XBR2_PWME__DISABLED;
  // [XBR2 - Port I/O Crossbar 2]$

  // $[PRTDRV - Port Drive Strength]
  // [PRTDRV - Port Drive Strength]$

  // $[XBR0 - Port I/O Crossbar 0]
  // [XBR0 - Port I/O Crossbar 0]$

  // $[XBR1 - Port I/O Crossbar 1]
  // [XBR1 - Port I/O Crossbar 1]$

}

extern void
WDT_0_enter_DefaultMode_from_RESET (void)
{

}

extern void
PORTS_3_enter_DefaultMode_from_RESET (void)
{
  // $[P3 - Port 3 Pin Latch]
  // [P3 - Port 3 Pin Latch]$

  // $[P3MDOUT - Port 3 Output Mode]
  /***********************************************************************
   - P3.0 output is push-pull
   - P3.1 output is push-pull
   - P3.2 output is push-pull
   - P3.3 output is push-pull
   - P3.4 output is push-pull
   - P3.7 output is open-drain
   ***********************************************************************/
  SFRPAGE = 0x20;
  P3MDOUT = P3MDOUT_B0__PUSH_PULL | P3MDOUT_B1__PUSH_PULL
      | P3MDOUT_B2__PUSH_PULL | P3MDOUT_B3__PUSH_PULL | P3MDOUT_B4__PUSH_PULL
      | P3MDOUT_B7__OPEN_DRAIN;
  // [P3MDOUT - Port 3 Output Mode]$

  // $[P3MDIN - Port 3 Input Mode]
  /***********************************************************************
   - P3.0 pin is configured for digital mode
   - P3.1 pin is configured for digital mode
   - P3.2 pin is configured for digital mode
   - P3.3 pin is configured for digital mode
   - P3.4 pin is configured for digital mode
   - P3.7 pin is configured for analog mode
   ***********************************************************************/
  P3MDIN = P3MDIN_B0__DIGITAL | P3MDIN_B1__DIGITAL | P3MDIN_B2__DIGITAL
      | P3MDIN_B3__DIGITAL | P3MDIN_B4__DIGITAL | P3MDIN_B7__ANALOG;
  // [P3MDIN - Port 3 Input Mode]$

}

extern void
PORTS_1_enter_DefaultMode_from_RESET (void)
{
  // $[P1 - Port 1 Pin Latch]
  // [P1 - Port 1 Pin Latch]$

  // $[P1MDOUT - Port 1 Output Mode]
  // [P1MDOUT - Port 1 Output Mode]$

  // $[P1MDIN - Port 1 Input Mode]
  /***********************************************************************
   - P1.0 pin is configured for digital mode
   - P1.1 pin is configured for digital mode
   - P1.2 pin is configured for analog mode
   - P1.3 pin is configured for analog mode
   - P1.4 pin is configured for analog mode
   - P1.5 pin is configured for analog mode
   - P1.6 pin is configured for analog mode
   - P1.7 pin is configured for analog mode
   ***********************************************************************/
  P1MDIN = P1MDIN_B0__DIGITAL | P1MDIN_B1__DIGITAL | P1MDIN_B2__ANALOG
      | P1MDIN_B3__ANALOG | P1MDIN_B4__ANALOG | P1MDIN_B5__ANALOG
      | P1MDIN_B6__ANALOG | P1MDIN_B7__ANALOG;
  // [P1MDIN - Port 1 Input Mode]$

  // $[P1SKIP - Port 1 Skip]
  // [P1SKIP - Port 1 Skip]$

  // $[P1MASK - Port 1 Mask]
  // [P1MASK - Port 1 Mask]$

  // $[P1MAT - Port 1 Match]
  // [P1MAT - Port 1 Match]$

}

