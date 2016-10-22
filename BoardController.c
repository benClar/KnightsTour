//
//  BoardController.c
//  KnightsTour
//
//  Created by Benjamin Clarke on 22/10/2016.
//  Copyright (c) 2016 Benjamin Clarke. All rights reserved.
//

#include <stdio.h>

#include "BoardController.h"

// Holds info about a board
struct boardContainer {
    Board b;
    BoardPosition current;
    
};

//series of board states derived from some
//initial state
struct boardSeries {
    Board head;
};


