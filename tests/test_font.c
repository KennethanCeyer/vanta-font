;/*
 * Copyright (c) 2019 PIGNOSE. All rights reserved.
 *
 * This source is govered under the MIT license.
 * Read README and LICENSE file of this project for more information.
 *
 */

#include <stdio.h>
#include <check.h>
#include "font.h"

START_TEST (vt_load_font) {
    printf("test");
    vt_load_font("./data/arial.ttf");
}
END_TEST
