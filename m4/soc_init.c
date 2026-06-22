/**
 * Configuration for MAX78000-CTBGA.
 *
 * This file was generated using Analog Devices CodeFusion Studio.
 * https://github.com/analogdevicesinc/codefusion-studio
 *
 * Generated at: 2026-06-22T04:10:12.806Z *
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (c) 2026 Analog Devices, Inc.
 */


#include <mxc_device.h>
#include <mxc_sys.h>
#include <stddef.h>
#include <uart.h>
#include "soc_init.h"

int PinInit(void) {
  int result;

  /* Initialize all the used GPIO Ports.
  */
  result = MXC_GPIO_Init(MXC_GPIO_PORT_0 | MXC_GPIO_PORT_1 | MXC_GPIO_PORT_2);
  if (result != E_NO_ERROR) {
    return result;
  }

  MXC_GPIO_SetConfigLock(MXC_GPIO_CONFIG_UNLOCKED);

  /* P0.2 (J8): assigned to GPIO0_P0.2.
  */
  const mxc_gpio_cfg_t cfg_p0_2 = {
    .port = MXC_GPIO0,
    .mask = MXC_GPIO_PIN_2,
    .func = MXC_GPIO_FUNC_IN,
    .pad = MXC_GPIO_PAD_PULL_UP,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p0_2);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P1.7 (C2): assigned to GPIO1_P1.7.
  */
  const mxc_gpio_cfg_t cfg_p1_7 = {
    .port = MXC_GPIO1,
    .mask = MXC_GPIO_PIN_7,
    .func = MXC_GPIO_FUNC_IN,
    .pad = MXC_GPIO_PAD_PULL_UP,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p1_7);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P2.1 (E8): assigned to GPIO2_P2.1.
  */
  const mxc_gpio_cfg_t cfg_p2_1 = {
    .port = MXC_GPIO2,
    .mask = MXC_GPIO_PIN_1,
    .func = MXC_GPIO_FUNC_OUT,
    .pad = MXC_GPIO_PAD_NONE,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p2_1);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P2.0 (D7): assigned to GPIO2_P2.0.
  */
  const mxc_gpio_cfg_t cfg_p2_0 = {
    .port = MXC_GPIO2,
    .mask = MXC_GPIO_PIN_0,
    .func = MXC_GPIO_FUNC_OUT,
    .pad = MXC_GPIO_PAD_NONE,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p2_0);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P0.0 (J9): assigned to UART0_RX.
  */
  const mxc_gpio_cfg_t cfg_p0_0 = {
    .port = MXC_GPIO0,
    .mask = MXC_GPIO_PIN_0,
    .func = MXC_GPIO_FUNC_ALT1,
    .pad = MXC_GPIO_PAD_WEAK_PULL_UP,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p0_0);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P0.1 (H9): assigned to UART0_TX.
  */
  const mxc_gpio_cfg_t cfg_p0_1 = {
    .port = MXC_GPIO0,
    .mask = MXC_GPIO_PIN_1,
    .func = MXC_GPIO_FUNC_ALT1,
    .pad = MXC_GPIO_PAD_NONE,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p0_1);
  if (result != E_NO_ERROR) {
    return result;
  }

  MXC_GPIO_SetConfigLock(MXC_GPIO_CONFIG_LOCKED);

  return E_NO_ERROR;
}

int PeripheralInit(void) {
  int result = E_NO_ERROR;

  { /* Configure UART0.
     */

    /* Initialize the peripheral. */
    result = MXC_UART_Init(MXC_UART0,
                           115200U,
                           MXC_UART_IBRO_CLK);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Data Size. */
    result = MXC_UART_SetDataSize(MXC_UART0, 8);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Stop Bits. */
    result = MXC_UART_SetStopBits(MXC_UART0, MXC_UART_STOP_1);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Flow Control. */
    result = MXC_UART_SetFlowCtrl(MXC_UART0, MXC_UART_FLOW_DIS, 1);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Parity. */
    result = MXC_UART_SetParity(MXC_UART0, MXC_UART_PARITY_DISABLE);
    if (result != E_NO_ERROR) {
      return result;
    }

  }


  return result;
}
