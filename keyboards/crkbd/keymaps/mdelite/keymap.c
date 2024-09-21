/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        // base layout
    KC_ESCAPE, KC_Q,               MEH_T(KC_W),        ALL_T(KC_E),        KC_R,               KC_T,                     KC_Y, KC_U,           ALL_T(KC_I),    MEH_T(KC_O),    KC_P,           KC_BSLS,
    CW_TOGG,   MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), KC_G,                     KC_H, MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_QUOTE,
    KC_NO,     KC_Z,               KC_X,               KC_C,               KC_V,               KC_B,                     KC_N, KC_M,    KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,
                                              MO(3),      LT(1,KC_SPACE), LT(2,KC_TAB),                                   LT(5,KC_ENTER), LT(4,KC_SPACE),   MO(8)

  ),

    [1] = LAYOUT_split_3x6_3(
        // numpad
    KC_NO,          KC_NO,          KC_MEH,         KC_HYPR,        KC_NO,          KC_NO,                                          KC_BSPC,        KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_SLASH,
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_SPACE,       KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_ASTR,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,        KC_NO,                                          KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_DOT,         KC_COMMA,
                                         KC_TRANSPARENT,           KC_TRANSPARENT, KC_NO,                                          KC_ENTER,       KC_0, KC_TRANSPARENT
  ),

    [2] = LAYOUT_split_3x6_3(
        // navigation
    KC_NO,          KC_NO,          KC_MEH,         KC_HYPR,        KC_NO,          KC_NO,                                          KC_NO,          LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_NO,          KC_PSCR,        KC_BSPC,
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_INSERT,      KC_DELETE,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,        KC_NO,                                          KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_NO,          KC_NO,
                                          KC_TRANSPARENT,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [3] = LAYOUT_split_3x6_3(
        // function keys
    KC_NO,          KC_NO,          KC_MEH,         KC_HYPR,        KC_NO,          KC_NO,                                          KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_F11,         KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F12,         KC_NO,
                                          KC_TRANSPARENT,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_split_3x6_3(
        // symbols
    KC_NO,          KC_PERC,        KC_AMPR,        KC_GRAVE,       KC_LCBR,        KC_RCBR,                                        KC_NO,          KC_NO,          KC_HYPR,        KC_MEH,         KC_NO,          KC_NO,
    KC_NO,          KC_CIRC,        KC_ASTR,        KC_DLR,         KC_LBRC,        KC_RBRC,                                        KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_NO,
    KC_NO,          KC_AT,          KC_HASH,        KC_EXLM,        KC_LPRN,        KC_RPRN,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                       KC_TRANSPARENT,                             KC_LABK,        KC_RABK,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_split_3x6_3(
        // mouse
    KC_NO,          KC_NO,          KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    KC_NO,                                          KC_NO,          KC_NO,          KC_HYPR,        KC_MEH,         KC_NO,          KC_NO,
    KC_NO,          LALT(KC_LEFT),  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    LALT(KC_RIGHT),                                 KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_NO,
    KC_NO,          KC_NO,          KC_MS_WH_LEFT,  KC_NO,          KC_MS_WH_RIGHT, KC_MS_BTN3,                                     KC_NO,          KC_NO,        KC_NO,          KC_NO,          KC_NO,          KC_NO,
                         KC_TRANSPARENT,                           KC_MS_BTN1,     KC_MS_BTN2,                                     KC_TRANSPARENT, KC_NO, KC_TRANSPARENT
  ),
  [6] = LAYOUT_split_3x6_3(
        // gaming regular
    KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    KC_LEFT_CTRL,   KC_Z,KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           LT(8,KC_M),    KC_COMMA,       KC_DOT,         KC_SLASH,       KC_NO,
                                 KC_LEFT_ALT,                   KC_SPACE,       LT(7,KC_TAB),                                   KC_ENTER,       KC_BSPC, KC_TRANSPARENT
  ),
  [7] = LAYOUT_split_3x6_3(
        // gaming right hand left
    KC_ESCAPE,      KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_RIGHT_SHIFT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_RIGHT_CTRL,  KC_N,KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                KC_RIGHT_ALT,                    KC_SPACE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_split_3x6_3(
        // media
    RGB_HUI,        KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  RGB_SAI,                                        KC_NO,          KC_NO,          KC_HYPR,        KC_MEH,         KC_NO,          KC_NO,
    RGB_HUD,        KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,RGB_SAD,                                        KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_NO,
    TO(0),          TO(6),          KC_NO,          QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_PRINT,                                KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                        KC_TRANSPARENT,            KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
