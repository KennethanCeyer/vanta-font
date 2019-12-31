;/*
 * Copyright (c) 2019 PIGNOSE. All rights reserved.
 *
 * This source is govered under the MIT license.
 * Read README and LICENSE file of this project for more information.
 *
 */

#include <check.h>
#include "../src/font.c"

START_TEST ("vt_load_font") {
    std::cout << "test";
    EXPECT_TRUE(false);

    vt_load_font("./data/arial.ttf");
}
END_TEST
