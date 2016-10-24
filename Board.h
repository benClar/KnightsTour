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

enum Visted { TRUE, FALSE} ;

typedef enum Visted Visted;

typedef struct board *Board;
typedef struct square *Square;
typedef struct boardPosition *BoardPosition;
typedef struct boardPositionSeries *BoardPositionSeries;

Board createBoard(uint32_t size);
Square getSquareByArrayIndex(Board b, int row, int col);
Square createSquare();
bool isVisited(Square s);
void addBoardPositionToSeries(BoardPositionSeries bps, BoardPosition bp);
BoardPosition getBoardPositionFromSeries(BoardPositionSeries bps, int i);
BoardPosition createBoardPosition(int x, int y);
BoardPositionSeries createBoardPositionSeries();
uint32_t getBoardPositionX(BoardPosition bp);
uint32_t getBoardPositionY(BoardPosition bp);

#endif
