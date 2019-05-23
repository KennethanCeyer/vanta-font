/*
 * Copyright (c) 2019 PIGNOSE. All rights reserved.
 *
 * This source is govered under the MIT license.
 * Read README and LICENSE file of this project for more information.
 *
 */

#include <stdio.h>
#include "opentype/opentype.h"
#include "font.h"

VtFont vt_load_font(char* font_path) {
    VtFont vtFont = { font_path };

    FILE* fp = fopen(font_path, 'r');
    vt_read_font(fp, &vtFont);

    fclose(fp);

    return vtFont;
}