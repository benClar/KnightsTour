//
//  Board.h
//  KnightsTour
//
//  Created by Benjamin Clarke on 18/10/2016.
//  Copyright (c) 2016 Benjamin Clarke. All rights reserved.
//

#ifndef KnightsTour_Board_h
#define KnightsTour_Board_h

enum Visted { TRUE, FALSE} ;

typedef enum Visted Visted;

typedef struct Board* Board;
typedef struct Square* Square;

Board createBoard();

#endif
