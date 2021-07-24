/* Copyright 2019 Ryota Goto
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
  [0] = LAYOUT_ortho_6x4( /* Base */
    KC_ESC,  KC_CALC, OSL(1), KC_BSPC,
    KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
    KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
    KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    KC_P0,   KC_P0,   KC_PDOT, KC_PENT
  ),
  [1] = LAYOUT_ortho_6x4(
    _______, TG(2),  TG(3),    TO(0),
    KC_F10,  KC_F11,  KC_F12,  KC_PSCR,
    KC_F7,   KC_F8,   KC_F9,   KC_TAB,
    KC_F4,   KC_F5,   KC_F6,   KC_TAB,
    KC_F1,   KC_F2,   KC_F3,   KC_PENT,
    KC_COPY, KC_COPY, KC_PSTE, KC_PENT
  ),
  [2] = LAYOUT_ortho_6x4(
    RESET,   TG(1),  TG(3),    TO(0),
    _______, _______, _______, _______,
    KC_WH_D, KC_MS_U, KC_WH_U, _______,
    KC_MS_L, KC_BTN1, KC_MS_R, _______,
    KC_WH_L, KC_MS_D, KC_WH_R, _______,
    _______, _______, _______, _______
  ),
  [3] = LAYOUT_ortho_6x4(
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______
  ),
};