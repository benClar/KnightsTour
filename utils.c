//
//  utils.c
//  KnightsTour
//
//  Created by Benjamin Clarke on 22/10/2016.
//  Copyright (c) 2016 Benjamin Clarke. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void *checkMalloc(void *malP)   {
    
    if (malP == NULL)   {
        fprintf(stderr, "null address generated\n");
        exit(1);
    }
    return malP;
}