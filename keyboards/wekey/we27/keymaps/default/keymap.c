/* Copyright 2021 @wekey
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Base */
	[0] = LAYOUT_numpad_6x5(
		KC_ESC , KC_PWR , KC_SLEP, KC_F11 , KC_MUTE,
		KC_NUM,  KC_BSPC, KC_PSLS, KC_PAST, KC_PMNS,
		RM_NEXT, KC_P7  , KC_P8  , KC_P9  ,
		RM_PREV, KC_P4  , KC_P5  , KC_P6  , KC_PPLS,
		RM_TOGG, KC_P1  , KC_P2  , KC_P3  ,
		MO(1)  , KC_P0  ,          KC_PDOT, KC_PENT
	),
	[1] = LAYOUT_numpad_6x5(
		_______, _______, _______, _______, KC_MPLY,
		_______, _______, _______, _______, _______,
		RM_SPDU, RM_HUEU, RM_SATU, RM_VALU,
		RM_SPDD, RM_HUED, RM_SATD, RM_VALD, _______,
		_______, _______, _______, _______,
		_______, _______,          _______, QK_BOOT
	),
	[2] = LAYOUT_numpad_6x5(
		_______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______,
		_______, _______, _______, _______,
		_______, _______, _______, _______, _______,
		_______, _______, _______, _______,
		_______, _______,          _______, _______
	),
	[3] = LAYOUT_numpad_6x5(
		_______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______,
		_______, _______, _______, _______,
		_______, _______, _______, _______, _______,
		_______, _______, _______, _______,
		_______, _______,          _______, _______
	)
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(_______, _______) },
    [2] = { ENCODER_CCW_CW(_______, _______) },
    [3] = { ENCODER_CCW_CW(_______, _______) },
};
#endif
