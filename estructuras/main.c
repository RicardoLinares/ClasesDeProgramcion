#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "structAlumno.h"

#define CANTIDAD 4

int main()
{
    sStudent newStudent[CANTIDAD];
    cargarListaDeAlumnos(newStudent, CANTIDAD);
    ordernarAlumnos(newStudent, CANTIDAD);
    mostrarListaDeAlumnos(newStudent, CANTIDAD);
    printf("Hello world!\n");
    return 0;
}
