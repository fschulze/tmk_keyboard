#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if 0
    [0] =
    KEYMAP(F6  ,F3  ,ESC ,F9  ,F12 ,PAUS,           \
           F8  ,F5  ,F2  ,F11 ,SLCK,                \
           F7  ,F4  ,F1  ,F10 ,PSCR,                \
           5   ,T   ,G   ,B   ,RGHT,LALT,LCTL,      \
           4   ,R   ,F   ,V   ,          DEL ,RGUI, \
           3   ,E   ,D   ,C   ,LEFT,HOME,BSPC,      \
           2   ,W   ,S   ,X   ,NUBS,     RCTL,PGUP, \
           1   ,Q   ,A   ,Z   ,GRV ,END ,ENT ,      \
           EQL ,TAB ,CAPS,LSFT,          SPC ,PGDN, \
                          UP  ,6   ,Y   ,H   ,N   , \
                               7   ,U   ,J   ,M   , \
                          DOWN,8   ,I   ,K   ,COMM, \
                                                    \
                          LBRC,9   ,O   ,L   ,DOT , \
                          RBRC,0   ,P   ,SCLN,SLSH, \
                               MINS,BSPC,QUOT,RSFT),
#endif

    [0] =
    KEYMAP(F6  ,F3  ,ESC ,F9  ,F12 ,PAUS,           \
           F8  ,F5  ,F2  ,F11 ,SLCK,                \
           F7  ,F4  ,F1  ,F10 ,PSCR,                \
           5   ,B   ,G   ,V   ,RGHT,FN0 ,LGUI,      \
           4   ,W   ,T   ,C   ,          ESC ,FN0, \
           3   ,R   ,H   ,M   ,LEFT,LALT,BSPC,      \
           2   ,D   ,S   ,X   ,NUBS,     RGUI,RALT, \
           1   ,Q   ,A   ,Z   ,GRV ,LCTL,ENT ,      \
           EQL ,TAB ,LCTL,LSFT,          SPC ,RCTL , \
                          UP  ,6   ,J   ,Y   ,K   , \
                               7   ,F   ,N   ,L   , \
                          DOWN,8   ,U   ,E   ,COMM, \
                                                    \
                          LBRC,9   ,P   ,O   ,DOT , \
                          RBRC,0   ,SCLN,I   ,SLSH, \
                               MINS,BSLS,QUOT,RSFT),

    [1] =
    KEYMAP(F6  ,F3  ,ESC ,F9  ,F12 ,PAUS,           \
           F8  ,F5  ,F2  ,F11 ,SLCK,                \
           F7  ,F4  ,F1  ,F10 ,PSCR,                \
           5   ,T   ,G   ,B   ,RGHT,FN0 ,LGUI,      \
           4   ,R   ,F   ,V   ,          ESC ,FN0, \
           3   ,E   ,D   ,C   ,LEFT,LALT,BSPC,      \
           2   ,W   ,S   ,X   ,NUBS,     RGUI,RALT, \
           1   ,Q   ,A   ,Z   ,GRV ,LCTL,ENT ,      \
           EQL ,TAB ,LCTL,LSFT,          SPC ,RCTL , \
                          UP  ,6   ,Y   ,H   ,N   , \
                               7   ,U   ,J   ,M   , \
                          DOWN,8   ,I   ,K   ,COMM, \
                                                    \
                          LBRC,9   ,O   ,L   ,DOT , \
                          RBRC,0   ,P   ,SCLN,SLSH, \
                               MINS,BSLS,QUOT,RSFT),

    [2] =
    KEYMAP(F6  ,F3  ,ESC ,F9  ,F12 ,PAUS,           \
           F8  ,F5  ,F2  ,F11 ,SLCK,                \
           F7  ,F4  ,F1  ,F10 ,PSCR,                \
           5   ,B   ,G   ,V   ,RGHT,FN0 ,LGUI,      \
           4   ,W   ,T   ,C   ,          ESC ,FN0, \
           3   ,R   ,H   ,M   ,LEFT,LALT,BSPC,      \
           2   ,D   ,S   ,X   ,NUBS,     RGUI,RALT, \
           1   ,Q   ,A   ,Z   ,GRV ,LCTL,ENT ,      \
           EQL ,TAB ,LCTL,LSFT,          SPC ,RCTL , \
                          UP  ,6   ,J   ,Y   ,K   , \
                               7   ,F   ,N   ,L   , \
                          DOWN,8   ,U   ,E   ,COMM, \
                                                    \
                          LBRC,9   ,P   ,O   ,DOT , \
                          RBRC,0   ,SCLN,I   ,SLSH, \
                               MINS,BSLS,QUOT,RSFT),

    [3] =
    KEYMAP(F6  ,F3  ,ESC ,F9  ,F12 ,PAUS,           \
           F8  ,F5  ,F2  ,F11 ,SLCK,                \
           F7  ,F4  ,F1  ,F10 ,PSCR,                \
           5   ,B   ,G   ,V   ,RGHT,FN0 ,LGUI,      \
           4   ,W   ,T   ,C   ,          ESC ,FN0, \
           3   ,R   ,H   ,M   ,LEFT,LALT,BSPC,      \
           2   ,D   ,S   ,X   ,NUBS,     RGUI,RALT, \
           1   ,Q   ,A   ,Z   ,GRV ,LCTL,ENT ,      \
           EQL ,TAB ,LCTL,LSFT,          SPC ,RCTL , \
                          UP  ,6   ,J   ,Y   ,K   , \
                               7   ,F   ,N   ,L   , \
                          DOWN,8   ,U   ,E   ,COMM, \
                                                    \
                          LBRC,9   ,P   ,O   ,DOT , \
                          RBRC,0   ,SCLN,I   ,SLSH, \
                               MINS,BSLS,QUOT,RSFT),

    [4] =
    KEYMAP(F6  ,F3  ,ESC ,F9  ,F12 ,PAUS,           \
           F8  ,F5  ,F2  ,F11 ,SLCK,                \
           F7  ,F4  ,F1  ,F10 ,PSCR,                \
           5   ,B   ,G   ,V   ,RGHT,FN0 ,LGUI,      \
           4   ,W   ,T   ,C   ,          ESC ,FN0, \
           3   ,R   ,H   ,M   ,LEFT,LALT,BSPC,      \
           2   ,D   ,S   ,X   ,NUBS,     RGUI,RALT, \
           1   ,Q   ,A   ,Z   ,GRV ,LCTL,ENT ,      \
           EQL ,TAB ,LCTL,LSFT,          SPC ,RCTL , \
                          UP  ,6   ,J   ,Y   ,K   , \
                               7   ,F   ,N   ,L   , \
                          DOWN,8   ,U   ,E   ,COMM, \
                                                    \
                          LBRC,9   ,P   ,O   ,DOT , \
                          RBRC,0   ,SCLN,I   ,SLSH, \
                               MINS,BSLS,QUOT,RSFT),

    [5] =
    KEYMAP(TRNS,TRNS,PWR ,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,                \
           TRNS,TRNS,TRNS,TRNS,TRNS,                \
           TRNS,TRNS,TRNS,TRNS,END ,TRNS,TRNS,      \
           TRNS,TRNS,RGHT,TRNS,          TRNS,TRNS, \
           TRNS,UP  ,DOWN,TRNS,HOME,TRNS,DEL ,      \
           TRNS,TRNS,LEFT,TRNS,TRNS,     TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PENT,      \
           TRNS,TRNS,CAPS,TRNS,          TRNS,TRNS, \
                          PGUP,TRNS,TRNS,TRNS,TRNS, \
                               TRNS,TRNS,MS_L,BTN1, \
                          PGDN,TRNS,MS_U,MS_D,TRNS, \
                                                    \
                          TRNS,TRNS,BTN2,MS_R,TRNS, \
                          TRNS,TRNS,TRNS,TRNS,TRNS, \
                               TRNS,TRNS,TRNS,TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_MOMENTARY(5),
};

