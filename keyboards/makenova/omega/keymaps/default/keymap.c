/* Copyright 2020 makenova
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum {
  TD_SEMI_QUOTE = 0,
  TD_DOT_ENTER = 1
};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_SEMI_QUOTE]  = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_QUOT),
  [TD_DOT_ENTER]  = ACTION_TAP_DANCE_DOUBLE(KC_PDOT, KC_PENT)
// Other declarations would go here, separated by commas, if you have them
};

// Defines the keycodes used by our macros in process_record_user
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(TD_SEMI_QUOTE),
    KC_Z, KC_X, KC_C, KC_V, LT(2,KC_SPC), LT(3,KC_B), KC_N, KC_M, KC_COMM
    ),
    LAYOUT(
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(TD_SEMI_QUOTE),
    KC_Z, KC_X, KC_C, KC_V, LT(2,KC_SPC), LT(3,KC_B), KC_N, KC_M, KC_COMM
    ),
    LAYOUT(
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(TD_SEMI_QUOTE),
    KC_Z, KC_X, KC_C, KC_V, LT(2,KC_SPC), LT(3,KC_B), KC_N, KC_M, KC_COMM
    ),
    LAYOUT(
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(TD_SEMI_QUOTE),
    KC_Z, KC_X, KC_C, KC_V, LT(2,KC_SPC), LT(3,KC_B), KC_N, KC_M, KC_COMM
    )
};
