//
//  Board.h
//  KnightsTour
//
//  Created by Benjamin Clarke on 18/10/2016.
//  Copyright (c) 2016 Benjamin Clarke. All rights reserved.
//

#ifndef KnightsTour_Board_h
#define KnightsTour_Board_h

#include "utils.h"


#define TOTAL_POSSIBLE_MOVES 8

typedef struct board *Board;
typedef struct boardPosition *BoardPosition;
typedef struct boardPositionSeries *BoardPositionSeries;

Board createBoard(uint32_t size, Board parent, BoardPosition bp);
BoardPosition createBoardPosition(int x, int y);
BoardPositionSeries createBoardPositionSeries();
uint32_t getBoardPositionX(BoardPosition bp);
uint32_t getBoardPositionY(BoardPosition bp);
Board getParent(Board b);
int getBoardSize(Board b);

#endif
