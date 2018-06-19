//
//  output.h
//  AnsiLove/C
//
//  Copyright (c) 2011-2018 Stefan Vogt, Brian Cassidy, and Frederic Cambus.
//  All rights reserved.
//
//  This source code is licensed under the BSD 2-Clause License.
//  See the LICENSE file for details.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <gd.h>

#ifndef output_h
#define output_h

// prototypes
void output(gdImagePtr im_Source, char *output, char *retinaout, int retinaScaleFactor);

#endif
