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
    Square **board;
    Board parentBoard;
};

struct boardPosition {
    uint32_t posX;
    uint32_t posY;
};

struct boardPositionNode {
    BoardPosition p;
    BoardPosition next;
};

struct boardPositionSeries {
    BoardPositionNode head;
};

struct square {
    Visted visted;
};

Board createBoard(uint32_t size){
    Board b = (Board) checkMalloc(malloc(sizeof(*b)));
    b->board = (Square**) checkMalloc(malloc(size * sizeof(*b->board)));
    uint32_t r, c = 0;
    for(;r<size; r++){
        b->board[r] = (Square*) checkMalloc(malloc(size * sizeof(*b->board[r])));
        for (c=0; c < size; c++){
            Square s = createSquare();
            b->board[r][c] = s;
        }
    }
    return b;
}

Square getSquareByArrayIndex(Board b, int row, int col){
    return b->board[row][col];
}

Square createSquare(){
    Square s = (Square) checkMalloc(malloc(sizeof(*s)));
    s->visted = FALSE;
    return s;
}

bool isVisited(Square s){
    if(s->visted == TRUE){
        return true;
    }
    return false;
}