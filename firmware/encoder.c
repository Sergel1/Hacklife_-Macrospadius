#include QMK_KEYBOARD_H


enum layers {
    _ENTE,
    _MEDIA
};
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return false;
}
