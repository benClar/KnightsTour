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
    sput_finish_testing();
}

void test_createBoard(){
    Board b = createBoard(5, NULL, createBoardPosition(0, 0)) ;
}