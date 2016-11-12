//
//  main.c
//  KnightsTour
//
//  Created by Benjamin Clarke on 18/10/2016.
//  Copyright (c) 2016 Benjamin Clarke. All rights reserved.
//

#include <stdio.h>

#include "main.h"
#include "Tests.h"

int main(int argc, const char * argv[])
{
    // insert code here...
    if(strcmp(argv[1], "TEST") == 0){
        runTests();
    } else {
        
    }
    return 0;
}

void start(){
    Board initial = createBoard(5, NULL, createBoardPosition(0, 0));
    BoardSeries bs =  createSeries(initial);
    while(isComplete(bs) != true) {
        BoardPosition *allMoves = getAllValidMoves(getTail(bs));
    }
    
}

void run(){
    printf("Running Knight's Tour");
}

