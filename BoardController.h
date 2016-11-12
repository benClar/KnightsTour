//
//  BoardController.h
//  KnightsTour
//
//  Created by Benjamin Clarke on 22/10/2016.
//  Copyright (c) 2016 Benjamin Clarke. All rights reserved.
//

#ifndef KnightsTour_BoardController_h
#define KnightsTour_BoardController_h

#include "Board.h"

typedef struct boardContainer* BoardContainer;
typedef struct boardSeries* BoardSeries;

BoardContainer createContainer(Board board);
BoardSeries createSeries(Board initialBoard);
int boardChainLength(BoardContainer bc);
bool isComplete(BoardSeries bs);
BoardPosition* getAllValidMoves(BoardContainer bc);
BoardContainer getTail(BoardSeries bs);

#endif
