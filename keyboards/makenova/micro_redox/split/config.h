/* Copyright 2021 makenova <@makenova>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID     0xFEED
#define PRODUCT_ID    0x0000
#define DEVICE_VER    0x0001
#define MANUFACTURER  makenova
#define PRODUCT       micro_redox_split

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *                  NO_DIODE = switches are directly connected to AVR pins
 *
*/
#define DIRECT_PINS { \
    { D1, F5, D4, B1, E6 }, \
    { F4, D0, F7, D7, B2 }, \
    { D3, F6, C6, B3, B4 }, \
    { B5, B6, NO_PIN, NO_PIN, NO_PIN } \
}

/* I could not get this to work so I adjusted the physical layout in the micro_redox.h file*/
/*
#define DIRECT_PINS_RIGHT  { \
    { E6, B1, D4, F5, D1 }, \
    { B2, D7, F7, D0, F4 }, \
    { B4, B3, C6, F6, D3}, \
    { B6, B5, NO_PIN, NO_PIN, NO_PIN } \
}
*/

#define UNUSED_PINS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Serial settings */
#define USE_SERIAL
/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2

#define EE_HANDS
