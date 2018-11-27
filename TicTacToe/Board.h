#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// AI #include <time.h>
#define MAX_POSITION 9
#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED




typedef struct
{
    int positions[MAX_POSITION];
    int turn;
    char player[2];
}eBoard;

eBoard* Board_newBoard(void);


eBoard* Board_newGame(char playerOne, char playerTwo);


int Board_printGame(eBoard* this);


int Board_playerAction(eBoard* this, int position);

int board_endTurnCalculations(eBoard* this);

int board_victory(eBoard* this);



int board_setPlayer(eBoard* this, int id, char value);
int board_setPosition(eBoard* this, int id, int value);
int board_setTurn(eBoard* this, int turn);

char board_getPlayer(eBoard* this, int id);
int board_getPosition(eBoard* this, int id);
int board_getTurn(eBoard* this);
#endif // BOARD_H_INCLUDED
