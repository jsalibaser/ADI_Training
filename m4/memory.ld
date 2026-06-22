/**
 * Configuration for MAX78000-CTBGA.
 *
 * This file was generated using Analog Devices CodeFusion Studio.
 * https://github.com/analogdevicesinc/codefusion-studio
 *
 * Generated at: 2026-06-22T04:10:12.820Z *
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (c) 2026 Analog Devices, Inc.
 */


MEMORY {
    ROM         (rx)  : ORIGIN = 0x00000000, LENGTH = 0x00010000 /* 64kB ROM */

    FLASH (r)   : ORIGIN = 0x10000000, LENGTH = 0x00080000 /* FLASH */
    SRAM  (rw)  : ORIGIN = 0x20000000, LENGTH = 0x00020000 /* SRAM  */
}

INCLUDE max78000.sects.ld
