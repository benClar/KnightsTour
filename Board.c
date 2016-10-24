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
    BoardPosition next;
};


struct boardPositionSeries {
    BoardPosition head;
};

struct square {
    Visted visted;
};

BoardPositionSeries createBoardPositionSeries(){
    BoardPositionSeries bps = (BoardPositionSeries) malloc(sizeof(*bps));
    bps->head = NULL;
    return bps;
}

void addBoardPositionToSeries(BoardPositionSeries bps, BoardPosition bp){
    BoardPosition curr = NULL;
    curr = bps->head;
    
    if(curr == NULL){
        bps->head = bp;
        return;
    }
    
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = bp;
}


uint32_t getBoardPositionX(BoardPosition bp){
    return bp->posX;
}

uint32_t getBoardPositionY(BoardPosition bp){
    return bp->posY;
}
BoardPosition getBoardPositionFromSeries(BoardPositionSeries bps, int i){
    int x;
    BoardPosition bp = bps->head;
    for(x=0; x < i; x++){
        if (bp == NULL) {
            printf("Out of range error.");
            return NULL;
        }
        bp = bp->next;
    }
    return bp;
}

BoardPosition createBoardPosition(int x, int y){
    BoardPosition bp = (BoardPosition) malloc(sizeof(*bp));
    bp->next = NULL;
    bp->posX = x;
    bp->posY = y;
    return bp;
}

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