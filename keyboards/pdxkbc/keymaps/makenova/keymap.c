#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
			MO(1), MO(2), KC_VOLU, KC_F15, KC_VOLD, KC_F14
		),
	[1] = LAYOUT(
			KC_TRNS, KC_R, KC_D, KC_X, KC_S, KC_Z
		),
	[2] = LAYOUT(
			KC_SLEP, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO
		)
};
