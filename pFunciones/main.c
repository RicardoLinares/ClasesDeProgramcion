#include <stdio.h>
#include <stdlib.h>

void mostrar(int);
void OtraFuncionMostrar(int);
int main()
{
    void (*pFunc)(int);
    pFunc = mostrar;

    pFunc(10);

    pFunc = OtraFuncionMostrar;

    pFunc(2);

    return 0;
}
void mostrar(int x)
{
    printf("HOLA MUNDO!");
}

void OtraFuncionMostrar(int r)
{
        printf("chau! %d", r);
}
