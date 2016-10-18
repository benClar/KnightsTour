//
//  main.c
//  KnightsTour
//
//  Created by Benjamin Clarke on 18/10/2016.
//  Copyright (c) 2016 Benjamin Clarke. All rights reserved.
//

#include <stdio.h>

#include "Tests.h"

int main(int argc, const char * argv[])
{
    // insert code here...
    if(strcmp(argv[0], "TEST") == 0){
        runTests();
    } else {
        
    }
    return 0;
}

void run(){
    printf("Running Knight's Tour");
}

