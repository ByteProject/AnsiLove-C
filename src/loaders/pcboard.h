//
//  pcboard.h
//  AnsiLove/C
//
//  Copyright (C) 2011-2018 Stefan Vogt, Brian Cassidy, and Frederic Cambus.
//  All rights reserved.
//
//  This source code is licensed under the BSD 2-Clause License.
//  See the LICENSE file for details.
//

#include "../ansilove.h"

#ifndef pcboard_h
#define pcboard_h

// Character structure
struct pcbChar {
    int32_t column;
    int32_t row;
    int32_t background;
    int32_t foreground;
    int32_t current_character;
};

void pcboard(unsigned char *inputFileBuffer, int32_t inputFileSize, char *outputFile, char *retinaout, char *font, int32_t bits, int retinaScaleFactor);

#endif
