#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "Board.h"
int main()
{
    char caracter;
    int opcion = -1;
    int process;
    eBoard* game = Board_newGame('X', 'O');
    do
    {
        Board_printGame(game);
        printf("\n \n \n");
        printf("eliga su posicion 0 al 8 (de izquierda a derecha)");

        caracter = getche();
        opcion = atoi(&caracter);
        printf("\n \n \n");
        switch(opcion)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            opcion--;
            process = Board_playerAction(game, opcion);
            break;
        }
        if( process != -1)
        {

            if(board_getTurn(game) == 0)
            {
                board_setTurn(game, 1);
            }
            else
            {
                board_setTurn(game, 0);
            }

        }
        system("cls");
    }
    while(opcion != -1);
    return 0;
}
