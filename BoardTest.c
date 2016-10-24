//
//  BoardTest.c
//  KnightsTour
//
//  Created by Benjamin Clarke on 18/10/2016.
//  Copyright (c) 2016 Benjamin Clarke. All rights reserved.
//

#include <stdio.h>

#include "BoardTest.h"

void runBoardTests(){
    sput_start_testing();
    sput_enter_suite("test_createBoard(): Testing Board");
    sput_run_test(test_createBoard);
    sput_enter_suite("test_createSquare(): Testing Square");
    sput_run_test(test_createSquare);
    sput_enter_suite("test_addBoardPosition(): Testing Board Positions");
    sput_run_test(test_addBoardPosition);
    sput_finish_testing();
}

void test_addBoardPosition(){
    BoardPositionSeries bps = createBoardPositionSeries();
    uint32_t NPOSITION = 10;
    uint32_t x;
    for (x = 0; x < NPOSITION; x++) {
        addBoardPositionToSeries(bps,createBoardPosition(x, x));
        BoardPosition bp = getBoardPositionFromSeries(bps, x);
        sput_fail_unless(getBoardPositionX(bp) == x, "Adding and retrieving board positions");
        sput_fail_unless(getBoardPositionY(bp) == x, "Adding and retrieving board positions");
    }
}

void test_createBoard(){
    Board b = createBoard(10);
    int r, c = 0;
    int BOARD_SIZE = 10;
    Square s = NULL;
    for (;  r < BOARD_SIZE; r++) {
        for(c=0;c < BOARD_SIZE; c++){
            s = getSquareByArrayIndex(b, r, c);
            sput_fail_unless(isVisited(s) == FALSE, "Square.visted should be initialised to FALSE");
        }
    }
}

void test_createSquare(){
    Square s = createSquare();
    sput_fail_unless(isVisited(s) == FALSE, "Square.visted should be initialised to FALSE");
}