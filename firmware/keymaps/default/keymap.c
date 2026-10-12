
// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 enum layers {
    _Ente,
    _MEDIA
};
``
      [_Ente]= LAYOUT(
    LCTL(KC_C), LCTL(KC_V), LCTL(KC_X),
    LCTL(KC_Z), LCTL(KC_S), KC_ENT
),
    [_MEDIA] = LAYOUT(
    KC_MPRV, KC_MPLY, KC_MNXT,
    KC_MUTE, KC_VOLU, KC_VOLD
)
};

