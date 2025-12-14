// Copyright 2025 Erik Rigtorp
// Copyright 2022 Manna Harbour
// SPDX-License-Identifier: GPL-2.0-or-later

// Based on miryoku layout: https://github.com/manna-harbour/miryoku_qmk/tree/miryoku/users/manna-harbour_miryok

#include QMK_KEYBOARD_H

enum layers {
    L_BAS,
    L_TAP,
    L_NAV,
    L_MOU,
    L_MED,
    L_NUM,
    L_SYM,
    L_FUN,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_BAS] = LAYOUT_split_3x5_3(
        KC_Q,               KC_W,               KC_F,               KC_P,               KC_B,                       KC_J,               KC_L,               KC_U,               KC_Y,               KC_QUOT,
        LGUI_T(KC_A),       LALT_T(KC_R),       LCTL_T(KC_S),       LSFT_T(KC_T),       KC_G,                       KC_M,               LSFT_T(KC_N),       LCTL_T(KC_E),       LALT_T(KC_I),       LGUI_T(KC_O),
        KC_Z,               ALGR_T(KC_X),       KC_C,               KC_D,               KC_V,                       KC_K,               KC_H,               KC_COMM,            ALGR_T(KC_DOT),     KC_SLSH,
                                                LT(L_MED,KC_ESC),   LT(L_NAV,KC_SPC),   LT(L_MOU,KC_TAB),           LT(L_SYM,KC_ENT),   LT(L_NUM,KC_BSPC),  LT(L_FUN,KC_DEL)
    ),
    [L_TAP] = LAYOUT_split_3x5_3(
        KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                   KC_J,           KC_L,           KC_U,           KC_Y,           KC_QUOT,
        KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                   KC_M,           KC_N,           KC_E,           KC_I,           KC_O,
        KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                   KC_K,           KC_H,           KC_COMM,        KC_DOT,         KC_SLSH,
                                        KC_ESC,         KC_SPC,         KC_TAB,                 KC_ENT,         KC_BSPC,        KC_DEL
    ),
    [L_NAV] = LAYOUT_split_3x5_3(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_LSFT,        KC_NO,                  CW_TOGG,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT,
        KC_NO,          KC_ALGR,        KC_NO,          KC_NO,          KC_NO,                  KC_INS,         KC_HOME,        KC_PGDN,        KC_PGUP,        KC_END,
                                        KC_NO,          KC_NO,          KC_NO,                  KC_ENT,         KC_BSPC,        KC_DEL
    ),
    [L_MOU] = LAYOUT_split_3x5_3(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_LSFT,        KC_NO,                  KC_NO,          MS_LEFT,        MS_DOWN,        MS_UP,          MS_RGHT,
        KC_NO,          KC_ALGR,        KC_NO,          KC_NO,          KC_NO,                  KC_NO,          MS_WHLL,        MS_WHLD,        MS_WHLU,        MS_WHLR,
                                        KC_NO,          KC_NO,          KC_NO,                  MS_BTN2,        MS_BTN1,        MS_BTN3
    ),
    [L_MED] = LAYOUT_split_3x5_3(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_LSFT,        KC_NO,                  KC_NO,          KC_MPRV,        KC_VOLD,        KC_VOLU,        KC_MNXT,
        KC_NO,          KC_ALGR,        KC_NO,          KC_NO,          KC_NO,                  OU_AUTO,        KC_NO,          KC_NO,          KC_NO,           KC_NO,
                                        KC_NO,          KC_NO,          KC_NO,                  KC_MSTP,        KC_MPLY,        KC_MUTE
    ),
    [L_NUM] = LAYOUT_split_3x5_3(
        KC_LBRC,        KC_7,           KC_8,           KC_9,           KC_RBRC,                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_SCLN,        KC_4,           KC_5,           KC_6,           KC_EQL,                 KC_NO,          KC_LSFT,        KC_LCTL,        KC_LALT,        KC_LGUI,
        KC_GRV,         KC_1,           KC_2,           KC_3,           KC_BSLS,                KC_NO,          KC_NO,          KC_NO,          KC_ALGR,        KC_NO,
                                        KC_DOT,         KC_0,           KC_MINS,                KC_NO,          KC_NO,          KC_NO
    ),
    [L_SYM] = LAYOUT_split_3x5_3(
        KC_LCBR,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RCBR,                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_COLN,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_PLUS,                KC_NO,          KC_LSFT,        KC_LCTL,        KC_LALT,        KC_LGUI,
        KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_PIPE,                KC_NO,          KC_NO,          KC_NO,          KC_ALGR,        KC_NO,
                                        KC_LPRN,        KC_RPRN,        KC_UNDS,                KC_NO,          KC_NO,          KC_NO
    ),
    [L_FUN] = LAYOUT_split_3x5_3(
        KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_SCRL,                KC_NO,          KC_LSFT,        KC_LCTL,        KC_LALT,        KC_LGUI,
        KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_PAUS,                KC_NO,          KC_NO,          KC_NO,          KC_ALGR,        KC_NO,
                                        KC_APP,         KC_SPC,         KC_TAB,                 KC_NO,          KC_NO,          KC_NO
    )
};
// clang-format on

// TODO: add this to upstream piantor keyboard.json
// clang-format off
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_split_3x5_3(
        'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
                  'L', 'L', 'L',  'R', 'R', 'R'
    );
// clang-format on
