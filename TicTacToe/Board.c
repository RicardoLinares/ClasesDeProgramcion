#include "Board.h"


eBoard* Board_newBoard(void)
{
    eBoard* newBoard = NULL;
    int i;
    newBoard = (eBoard*) malloc(sizeof(eBoard));
    if(newBoard != NULL)
    {
        for(i=0; i<MAX_POSITION; i++)
        {
            newBoard->positions[i] = -1;
        }
        for(i=0; i<2; i++)
        {
            newBoard->player[i] = '\0';
        }
        newBoard->turn = -1;
    }
    return newBoard;
}


int board_setPlayer(eBoard* this, int id, char value)
{
    int returnAux = -1;
    if(this != NULL && id >= 0 && id < 2)
    {
        this->player[id] = value;
        returnAux = 0;
    }

    return returnAux;
}

int board_setPosition(eBoard* this, int id, int value)
{
    int returnAux = -1;
    if(this != NULL && id >= 0 && id < MAX_POSITION)
    {
        if(value > -1 && value < 2)
        {
            this->positions[id] = value;
            returnAux = 0;
        }
    }

    return returnAux;
}

int board_setTurn(eBoard* this, int turn)
{
    int returnAux = -1;
    if(this != NULL)
    {
        if(turn > -1 && turn < 2)
        {
            this->turn = turn;
            returnAux = 0;
        }
    }
    return returnAux;
}


char board_getPlayer(eBoard* this, int id)
{
    char player = '\0';
    if(this != NULL && id >= 0 && id < 2)
    {
        player = this->player[id];
    }
    return player;
}


int board_getPosition(eBoard* this, int id)
{
    int status;
    if(this != NULL && id >= 0 && id < MAX_POSITION)
    {
        status = this->positions[id];
    }
    return status;
}

int board_getTurn(eBoard* this)
{
    int turn;
    if(this != NULL)
    {
        turn = this->turn;
    }
    return turn;
}

eBoard* Board_newGame(char playerOne, char playerTwo)
{
    eBoard* newBoard = NULL;

    newBoard = Board_newBoard();
    if(newBoard != NULL)
    {
        board_setPlayer(newBoard, 0, playerOne);
        board_setPlayer(newBoard, 1, playerTwo);
        board_setTurn(newBoard, 0);
    }
    return newBoard;
}

int Board_playerAction(eBoard* this,int position)
{
    int returnAux = -1;
    int turn;
    if(this != NULL && position >= 0 && position < MAX_POSITION)
    {
        turn = board_getTurn(this);
        if(board_getPosition(this, position) == -1)
        {
            returnAux = board_setPosition(this, position, turn);
        }
    }

    return returnAux;
}
int Board_printGame(eBoard* this)
{
    int returnAux;

    if(this != NULL)
    {
        printf("%c", board_getPlayer(this, board_getPosition(this, 0)));
        printf(" | %c", board_getPlayer(this, board_getPosition(this, 1)));
        printf(" | %c\n", board_getPlayer(this, board_getPosition(this, 2)));
        printf("---------\n");
        printf("%c", board_getPlayer(this, board_getPosition(this, 3)));
        printf(" | %c", board_getPlayer(this, board_getPosition(this, 4)));
        printf(" | %c\n", board_getPlayer(this, board_getPosition(this, 5)));
        printf("---------\n");
        printf("%c", board_getPlayer(this, board_getPosition(this, 6)));
        printf(" | %c", board_getPlayer(this, board_getPosition(this, 7)));
        printf(" | %c\n", board_getPlayer(this, board_getPosition(this, 8)));
        returnAux = 0;
    }

    return returnAux;
}
