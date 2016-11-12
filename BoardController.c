//
//  BoardController.c
//  KnightsTour
//
//  Created by Benjamin Clarke on 22/10/2016.
//  Copyright (c) 2016 Benjamin Clarke. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#include "BoardController.h"

// Holds info about a board series
struct boardContainer {
    Board board;
    BoardContainer next;

};

//series of board states derived from some
//initial state
struct boardSeries {
    BoardContainer head;
    BoardContainer tail;
};

BoardSeries createSeries(Board initialBoard){
    BoardSeries bs = (BoardSeries) malloc(sizeof(*bs));
    bs->head = createContainer(initialBoard);
    bs->tail = bs->head;
    return bs;
}

void addBoard(BoardSeries bs, Board b){
    bs->tail->next = createContainer(b);
    bs->tail = bs->tail->next;
}

BoardContainer createContainer(Board board){
    BoardContainer bc = (BoardContainer) malloc(sizeof(*bc));
    bc->board = board;
    bc->next = NULL;
    return bc;
}

int boardChainLength(BoardContainer bc){
    Board curr = bc->board;
    int length = 0;
    while(curr != NULL){
        curr = getParent(curr);
        length++;
    }
    return length;
}

bool isComplete(BoardSeries bs){
    if(boardChainLength(bs->tail) == getBoardSize(bs->tail->board)) {
        return true;
    }
    return false;
}

BoardContainer getTail(BoardSeries bs){
    return bs->tail;
}


BoardPosition* getAllValidMoves(BoardContainer bc){
    return NULL;
}




