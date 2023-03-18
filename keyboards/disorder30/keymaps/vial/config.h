// Copyright 2022 mkylama (@mkylama)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#include "config_common.h"

#define VENDOR_ID       0x4C42
#define PRODUCT_ID      0x7005
#define DEVICE_VER      0x0100
#define MANUFACTURER    LB x FMKC
#define PRODUCT         Disorder30

#define MATRIX_ROWS  4
#define MATRIX_COLS  10

#define MATRIX_ROW_PINS \
    { D5, B4, B5, B6 }

// wiring of each half
#define MATRIX_COL_PINS \
    { F4, F5, F6, F7, B1, B3, B2, E6, D7, C6 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x5E, 0x87, 0xD8, 0xDF, 0xE2, 0x0D, 0xA6, 0x7B}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

