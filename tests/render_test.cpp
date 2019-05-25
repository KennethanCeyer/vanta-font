;/*
 * Copyright (c) 2019 PIGNOSE. All rights reserved.
 *
 * This source is govered under the MIT license.
 * Read README and LICENSE file of this project for more information.
 *
 */

#include <iostream>
#include <gtest/gtest.h>
#include "../src/font.c"

TEST(font, render) {
    std::cout << "test";
    EXPECT_TRUE(false);

    vt_load_font("./data/arial.ttf");
}

int main(int argc, char **argv) {
    std::cout << "test";
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}