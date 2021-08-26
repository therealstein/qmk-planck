#include QMK_KEYBOARD_H

enum planck_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _SETTINGS,
  _FUNCY1,
  _FUNCY2,
  _BSPWM
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
};

enum unicode_names {
    BANG,
    IRONY,
    SNEK,
    AE,
    OE,
    UE,
    SZ,
    CRIGHT,
    EURO
};

const uint32_t PROGMEM unicode_map[] = {
    [BANG]  = 0x203D,  // ‽
    [IRONY] = 0x2E2E,  // ⸮
    [SNEK]  = 0x1F40D, // 🐍
    [AE]=0x00E4,
    [OE]=0x00F6,
    [UE]=0x00FC,
    [SZ]=0x00DF,
    [CRIGHT]=0x00A9,
    [EURO]=0x20AC
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define FUNCY1 LT(_FUNCY1, KC_TAB)
#define FUNCY2 LT(_FUNCY2, KC_QUOT)
#define BSPWM LT(_BSPWM, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
*/



[_QWERTY] = LAYOUT_planck_grid(

BSPWM,   KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_BSPC,
FUNCY1,    KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   FUNCY2,
KC_LGUI,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_LALT,
KC_LCTL,   _______,   _______,   _______,   LOWER,   KC_LSFT,     KC_SPC,    RAISE,     _______,   _______,     _______,   KC_ENT

),

[_LOWER] = LAYOUT_planck_grid(

KC_TILD,   KC_EXLM,   KC_AT,     KC_HASH,   KC_DLR,    KC_PERC,   KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RPRN,   _______,
KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   _______,   _______,
KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    _______,   _______,   _______,   _______,   _______,    _______,
_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______

),

[_RAISE] = LAYOUT_planck_grid(

KC_PSCR,   KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      _______,
_______,   KC_INS,    KC_HOME,   KC_PGUP,   _______,   _______,   _______,   KC_4,      KC_5,      KC_6,      _______,   _______,
_______,   KC_DEL,    KC_END,    KC_PGDN,   _______,   _______,   _______,   KC_1,      KC_2,      KC_3,      KC_PGDN,   _______,
_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   KC_0,      KC__VOLUP, KC__VOLDOWN, KC__MUTE

),

[_SETTINGS] = LAYOUT_planck_grid(

RESET,     _______,   DEBUG,     RGB_TOG,   RGB_MOD,   RGB_HUI,   RGB_HUD,   RGB_SAI,   RGB_SAD,   RGB_VAI,   RGB_VAD,   KC_SYSTEM_SLEEP,
_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______

),

[_FUNCY1] = LAYOUT_planck_grid(

_______,   _______,   _______,   _______,   _______,   G(KC_GRAVE),KC_BSLS,     _______,   _______,   _______,   _______,   _______,
_______,   _______,   KC_LPRN,   KC_LCBR,   KC_LBRC,   KC_GRAVE,   G(KC_BSLS),  KC_RBRC,   KC_RCBR,   KC_RPRN,   _______,   _______,
_______,   _______,   _______,   _______,   KC_LT,     G(KC_EQL),  KC_EQL,      KC_GT,     _______,   _______,   _______,   _______,
_______,   _______,   _______,   _______,   _______,   KC_MINS,    G(KC_MINS),  _______,   _______,   _______,   _______,   _______

),

[_BSPWM] = LAYOUT_planck_grid(

XXXXXXX,   G(KC_1),   G(KC_2),   G(KC_3),   G(KC_4),   G(KC_5),   G(KC_6),   G(KC_7),   G(KC_8),   G(KC_9),   G(KC_0),   XXXXXXX,
XXXXXXX,   LSG(KC_1), LSG(KC_2), LSG(KC_3), LSG(KC_4), LSG(KC_5), LSG(KC_6), LSG(KC_7), LSG(KC_8), LSG(KC_9), LSG(KC_0), XXXXXXX,
XXXXXXX,   XXXXXXX,   LAG(KC_R), XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   G(KC_PSCR),KC_PSCR,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX

),

[_FUNCY2] = LAYOUT_planck_grid(
_______,   X(SNEK),      _______,   X(EURO),   _______,   _______,   _______,   X(UE),     _______,     X(OE),   _______,   _______,
_______,   X(AE),        X(SZ),     _______,   _______,   _______,   _______,   _______,  _______,   _______,   _______, _______,  
_______,   X(BANG),      _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,   _______,   _______, 
_______,   X(IRONY),      _______,  X(CRIGHT),   _______,   _______,   _______,   _______,    _______,   _______,   _______,   _______ 
),


};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _SETTINGS);
}
