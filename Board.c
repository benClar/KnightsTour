//
//  Board.c
//  KnightsTour
//
//  Created by Benjamin Clarke on 18/10/2016.
//  Copyright (c) 2016 Benjamin Clarke. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#include "Board.h"

struct board {
    uint32_t width;
    uint32_t height;
    BoardPosition current;
    Board parent;
};

struct boardPosition {
    uint32_t posX;
    uint32_t posY;
};

uint32_t getBoardPositionX(BoardPosition bp){
    return bp->posX;
}

uint32_t getBoardPositionY(BoardPosition bp){
    return bp->posY;
}

BoardPosition createBoardPosition(int x, int y){
    BoardPosition bp = (BoardPosition) malloc(sizeof(*bp));
    bp->posX = x;
    bp->posY = y;
    return bp;
}

Board getParent(Board b){
    return b->parent;
}

int getBoardSize(Board b){
    return b->width * b->height;
}

Board createBoard(uint32_t size, Board parent, BoardPosition bp) {
    Board b    = (Board) checkMalloc(malloc(sizeof(*b)));
    b->height  = size;
    b->width   = size;
    b->parent  = parent;
    b->current = bp;
    return b;
}


bool alreadyDone(BoardPosition *doneMoves, BoardPosition possibleMove){
    return true;
}

BoardPosition getMove(BoardPosition *doneMoves, Board b){
    int x = b->current->posX;
    int y = b->current->posY;
    int possibleMoves[TOTAL_POSSIBLE_MOVES][2] = {{3, 1}, {-3, 1}, {3, -1}, {-3, -1}, {1, 3}, {1, -3}, {-1, 3}, {-1, -3}};
    
    createBoardPosition(x, y);
    return createBoardPosition(x, y);
    }
