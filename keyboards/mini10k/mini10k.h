#ifndef MINI10K_H
#define MINI10K_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
    k00, k01, k02, \
    k10, k11, k12, \
    k20, k21, k22, \
    k30            \
) \
{ \
    { k00, k01,   k02   }, \
    { k10, k11,   k12   }, \
    { k20, k21,   k22   }, \
    { k30, KC_NO, KC_NO }, \
}

#endif
