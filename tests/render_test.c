/*
 * Copyright (c) 2019 PIGNOSE. All rights reserved.
 *
 * This source is govered under the MIT license.
 * Read README and LICENSE file of this project for more information.
 *
 */

#include <stdio.h>
#include <gtest/gtest.h>
#include "../src/font.c"

TEST(font, render) {
    vt_load_font("./data/arial.ttf");
    printf("A");
}