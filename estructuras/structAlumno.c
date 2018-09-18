#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "structAlumno.h"

void newLegajo(sStudent* student, char mensaje[])
{

    printf("%s", mensaje);
    __fpurge(stdin);
    scanf("%d", &student->legajo);
}


void newName(sStudent* student, char mensaje[])
{
    char buffer[1024];

    printf("%s", mensaje);
    __fpurge(stdin);
    fgets(buffer, 1024, stdin);

    while(strlen(student->nombre) > TAM_NOMBRE-1)
    {
        printf("Error El nombre tiene demaciado carateres");
        printf("%s", mensaje);
        __fpurge(stdin);
        fgets(buffer, 1024, stdin);
    }

    strcpy(student->nombre, buffer);

}


void newNote(sStudent* student, char mensaje[])
{
    printf("%s", mensaje);
    __fpurge(stdin);
    scanf("%d", &student->nota);
}


void newAltura(sStudent* student, char mensaje[])
{
    printf("%s", mensaje);
    __fpurge(stdin);
    scanf("%f", &student->altura);
}

void cargarAlumno(sStudent* student)
{
    newAltura(student, "Ingrese la Altura:");
    newNote(student, "Ingrese la nota: ");
    newName(student, "Ingrese el nombre: ");
    newLegajo(student, "Ingrese el legajo: ");
}

void mostrarAlumno(sStudent alumno)
{
    printf("%d--%s--%f--%d\n", alumno.legajo, alumno.nombre, alumno.altura, alumno.nota);
}

void cargarListaDeAlumnos(sStudent studentList[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        cargarAlumno(&studentList[i]);
    }
}

// tambien crear un menu;

// hacer una funcion que busque un alumno por legajo
// mostrar un grilla de alumnos
// buscar el alumno
// mostrar el alumno
// pedir nueva nota
// preguntar si esta seguro de realizar los cambios
//if si la asigno
//else aviso que cancelo la modificacion
// si no se encuetra tonses mandar un error


void mostrarListaDeAlumnos(sStudent studentList[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        mostrarAlumno(studentList[i]);
    }
}

void ordernarAlumnos(sStudent students[], int size)
{
    sStudent auxiliar;
    int i;
    int j;
    if(size > 1)
    {
        for(i=1; i<size; i++)
        {
            auxiliar = students[i];
            for(j=i-1; strcmp(auxiliar.nombre, students[j].nombre) < 0 && j >= 0; j--)
            {
                students[j+1] = students[j];
            }
            students[j+1] = auxiliar;
        }
    }
}
