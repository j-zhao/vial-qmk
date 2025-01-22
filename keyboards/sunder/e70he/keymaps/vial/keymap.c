#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _GAME
};

// enum custom_keycodes {
//     GC_LSU = QK_KB_0,
//     GC_LSD,
//     GC_LSL,
//     GC_LSR,
//     GC_RSU,
//     GC_RSD,
//     GC_RSL,
//     GC_RSR,
//     GC_DPU,
//     GC_DPD,
//     GC_DPL,
//     GC_DPR,
//     GC_SQU,
//     GC_CRO,
//     GC_CIR,
//     GC_TRI,
//     GC_L1,
//     GC_L2,
//     GC_L3,
//     GC_R1,
//     GC_R2,
//     GC_R3,
//     GC_STA,
//     GC_SEL,
//     GC_HOM,
//     GC_SHARE
// };

// Joystick Config
joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
    JOYSTICK_AXIS_VIRTUAL,
    JOYSTICK_AXIS_VIRTUAL,
    JOYSTICK_AXIS_VIRTUAL,
    JOYSTICK_AXIS_VIRTUAL,
    JOYSTICK_AXIS_VIRTUAL,
    JOYSTICK_AXIS_VIRTUAL,
};

// #define GAMEPAD TG(_GAMEPAD)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_HOME, KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_END,  KC_TAB,  KC_Q,                               \
        KC_W,    KC_E,    KC_R,    KC_T,    KC_PGUP, MO(_FN1),KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      \
        KC_PGDN, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LCTL, KC_LGUI, KC_LALT, MO(_FN2),KC_SPC,           \
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_Y,    KC_U,    KC_I,    KC_O,             \
        KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_N,             \
        KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_SPC,  KC_RALT, KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT  \
    ),

    [_FN1] = LAYOUT(
        TG(_GAME), KC_GRV,    KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     _______,   _______,   KC_PSCR,                              \
        KC_SCRL,   KC_PAUS,   _______,   _______,   _______,   _______,   KC_INS,    KC_HOME,   KC_PGUP,   _______,   _______,                  \
        _______,   _______,   KC_DEL,    KC_END,    KC_PGDN,   _______,   _______,   _______,   _______,   _______,   _______,   KC_MPLY,            \
        KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    _______,   _______,   _______,   _______,   _______,            \
        _______,   _______,   _______,   KC_DEL,    KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   _______,   _______,   _______,   _______,            \
        _______,   _______,   _______,   _______,   _______,   KC_VOLU,   KC_MPLY,   _______,   _______,   _______,   KC_MPRV,   KC_VOLD,   KC_MNXT  \
    ),

    [_FN2] = LAYOUT(
        QK_BOOT,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,                                 \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,                  \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,            \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,            \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,            \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______    \
    ),

    [_GAME] = LAYOUT(
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,                              \
        _______,   JS_0,    _______,   _______,   _______,   _______,   _______,   JS_1,    JS_2,    JS_3,   _______,                     \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,    JS_13,            \
        _______,   _______,   _______,   _______,   JS_17,  JS_16,    JS_15,    JS_14,    _______,   JS_6,   JS_7,     JS_8,            \
        JS_9,     _______,   _______,   _______,   _______,   JS_4,    JS_5,    JS_10,     JS_11,     _______,   _______,   _______,            \
        JS_12,     _______,   _______,   _______,   _______,   _______,   JS_0,    _______,   _______,   _______,   _______,   _______,   _______    \
    ),
};