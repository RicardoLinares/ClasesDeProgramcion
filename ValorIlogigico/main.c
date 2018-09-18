#include <stdio.h>
#include <stdio_ext.h>
#include <unistd.h>
#include <termios.h>
#include <stdlib.h>
#define TAM 3
int intInizalization(int);
int buscarLibre(int[], int, int);
int main()
{
    int vector[TAM];
    char respuesta;
    int auxiliar;
    int opcion;
    int i;
    for(i=0; i < TAM; i++)
    {
        vector[i] = intInizalization(-1);
    }
    do
    {
        opcion = buscarLibre(vector, TAM, -1);
        if(opcion==-1)
        {
            printf("No queda mas espacio");
            break;
        }
        printf("Ingrese un valor:", TAM);
        __fpurge(stdin);
        scanf("%d", &auxiliar);

        vector[opcion] = auxiliar;

        printf("Quiere Guardar Otro?", TAM);
        __fpurge(stdin);
        respuesta = getchar();
    }while(respuesta == 'y');

    for(i=0; i < TAM; i++)
    {
        if(vector[i] != -1)
        {
            printf("%d\n", vector[i]);
        }
    }
return 0;
}


int intInizalization(int valorInicial)
{
    int returner = -1;

    returner = valorInicial;

    return returner;
}

int buscarLibre(int numeros[], int size, int ilogico)
{
    int index=-1;
    int i;

    for(i=0; i<size; i++)
    {
        if(numeros[i] == ilogico)
        {
            index=i;
        }

    }

    return index;

}
