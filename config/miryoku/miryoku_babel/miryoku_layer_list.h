// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

#pragma once

#if !defined (MIRYOKU_LAYER_LIST)

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base   S10PAO") \
MIRYOKU_X(EXTRA,  "Extra  S10PAO") \
MIRYOKU_X(TAP,    "Tap    S10PAO") \
MIRYOKU_X(BUTTON, "Button S10PAO") \
MIRYOKU_X(NAV,    "Nav    S10PAO") \
MIRYOKU_X(MOUSE,  "Mouse  S10PAO") \
MIRYOKU_X(MEDIA,  "Media  S10PAO") \
MIRYOKU_X(NUM,    "Num    S10PAO") \
MIRYOKU_X(SYM,    "Sym    S10PAO") \
MIRYOKU_X(FUN,    "Fun    S10PAO")

#if 0
#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#else
enum {
    U_BASE
    ,U_EXTRA
    ,U_TAP
    ,U_BUTTON
    ,U_NAV
    ,U_MOUSE
    ,U_MEDIA
    ,U_NUM
    ,U_SYM
    ,U_FUN
};
#endif

#endif
