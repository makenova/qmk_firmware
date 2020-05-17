/* Copyright 2018 Holten Campbell
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
  TD_SEMI_QUOTE = 0
};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_SEMI_QUOTE]  = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_QUOT)
// Other declarations would go here, separated by commas, if you have them
};

// In Layer declaration, add tap dance item in place of a key code
// TD(TD_SEMI_QUOTE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
    KC_ESC,   KC_Q,     KC_W,     KC_E,   KC_R,    KC_T,          KC_Y,   KC_U,     KC_I, KC_O,    KC_P,    KC_DEL, KC_BSPC,
    MT(MOD_LCTL,KC_TAB),   KC_A,     KC_S,     KC_D,   KC_F,    KC_G,          KC_H,   KC_J,     KC_K, KC_L,    TD(TD_SEMI_QUOTE), KC_ENT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,   KC_V,    KC_B,          LT(3,KC_B),  KC_N,     KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
    KC_LCTL,  KC_LALT,            KC_LGUI, LT(2,KC_SPC),	          LT(1,KC_SPC), KC_RALT,                          KC_RGUI, KC_RCTL
    ),

    LAYOUT(
    KC_GRV,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_UP,     KC_TRNS,   KC_MUTE,   KC_VOLD,   KC_VOLU,
    KC_CAPS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_LEFT,    KC_DOWN,   KC_RIGHT,  KC_QUOT,   KC_BSLS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
    BL_TOGG,   BL_STEP,                         KC_TRNS,    KC_TRNS,	        KC_TRNS,   KC_TRNS,                                     KC_TRNS,   KC_TRNS
    ),

    LAYOUT(
    KC_TRNS,  KC_1,      KC_2,      KC_3,      KC_4,       KC_5,             KC_6,      KC_7,     KC_8,    KC_9,    KC_0,      KC_MINS,  KC_EQL,
    KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_P4,    KC_P5,   KC_P6,   KC_LBRC,   KC_RBRC,
    KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_P1,    KC_P2,   KC_P3,   KC_TRNS,   KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,                         KC_TRNS,    KC_TRNS,	         KC_PENT,   KC_PDOT,                               KC_TRNS,  KC_TRNS
    ),

    LAYOUT(
    KC_POWER,  KC_F1,     KC_F2,     KC_F3,     KC_F4,      KC_F5,            KC_F6,     KC_F7,    KC_F8,   KC_F9,   KC_F10,    KC_F11,   KC_F12,
    KC_CAPS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_F14,   KC_F15,
    KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,  KC_MUTE, KC_VOLD, KC_VOLU,   KC_TRNS,  KC_TRNS,
    RESET,  KC_TRNS,                         KC_TRNS,    KC_TRNS,	         KC_TRNS,   KC_TRNS,                               KC_TRNS,  KC_TRNS
    )
};

void matrix_init_user(void) {
  // set CapsLock LED to output and low
  setPinOutput(B1);
  writePinLow(B1);
  // set NumLock LED to output and low
  setPinOutput(B2);
  writePinLow(B2);
  // set ScrollLock LED to output and low
  setPinOutput(B3);
  writePinLow(B3);
}

void matrix_scan_user(void) {

}


void led_set_user(uint8_t usb_led) {
  // if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
  //   writePinHigh(B2);
  // } else {
  //   writePinLow(B2);
  // }
  // if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
  //   writePinHigh(B1);
  // } else {
  //   writePinLow(B1);
  // }
/*
  if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {
    writePinHigh(B3);
  } else {
    writePinLow(B3);
  }*/

}

//function for layer indicator LED
uint32_t layer_state_set_user(uint32_t state)
{
// if (layer_state_cmp(state, 1)) {
//         writePinHigh(B3);
//     } else {
//         writePinLow(B3);
//     }
//     if (layer_state_cmp(state, 2)) {
//         writePinHigh(B2);
//     } else {
//         writePinLow(B2);
//     }
//     if (layer_state_cmp(state, 3)) {
//         writePinHigh(B1);
//     } else {
//         writePinLow(B1);
//     }
  
  return state;
}
