#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 10
typedef struct
{
    char caracter;
    int entero;
} eEjemplo;
int removeEnter(char* stringNumber, int length)
{
    int estado = -1;
    int i;
    if(stringNumber != NULL && length > 0)
    {
        for(i=0;i<length;i++)
        {
           if(*(stringNumber+i) == '\n')
           {
               *(stringNumber+i) = '\0';
               estado = 0;
               break;
           }
        }
    }

    return estado;
}

int guardarArrayEnTXT(int array[],int tam,char* nombre)
{
    int estado = -1;
    FILE* pArchivo;
    int i;
    if(array != NULL && tam > 0)
    {

        pArchivo = fopen(nombre, "w");


        for(i = 0; i<tam-1; i++)
        {
            fprintf(pArchivo, "%d\n", array[i]);
        }
        fprintf(pArchivo, "%d", array[i]);
        estado = 0;
        fclose(pArchivo);
    }
    return estado;
}

int guardarArrayEnBin(int array[],int tam,char* nombre)
{
    int estado = -1;
    FILE* pArchivo;
    if(array != NULL && tam > 0)
    {

        pArchivo = fopen(nombre, "wb");
        fwrite(array, sizeof(int),tam,pArchivo);
        estado = 0;
        fclose(pArchivo);
    }
    return estado;
}

int* cargarTXTenARRAY(char* direccion,int tamanio)
{
    int* vector;
    int i = 0;
    FILE* pArchivo;
    char buffer[1024];

    vector = malloc(sizeof(int)* tamanio);
    if(vector != NULL)
    {

        pArchivo = fopen(direccion, "r");

        while(!feof(pArchivo))
        {
            fgets(buffer,1024,pArchivo);
            removeEnter(buffer,1024);
            *(vector+i) = atoi(buffer);
            i++;
        }
        fclose(pArchivo);

    }
    return vector;
}
int* cargarBinEnARRAY(char* direccion,int tamanio)
{
    int* vector;
    FILE* pArchivo;
    int lectura;

    vector = malloc(sizeof(int)* tamanio);
    if(vector != NULL)
    {

        pArchivo = fopen(direccion, "rb");
        lectura=fread(vector, sizeof(int),tamanio, pArchivo);
        if(lectura != tamanio)
            {
                printf("Error al Cargar");
            }
        fclose(pArchivo);

    }
    return vector;
}

int main()
{
    int enteros[TAMANIO] = { 11, 9, 8,7, 6,5,4,3,2,1};
    char nombre[51] = "Nuevo.bin";
    int* otroEnteros;
    int i;
    guardarArrayEnBin(enteros,TAMANIO,nombre);

    otroEnteros = cargarBinEnARRAY(nombre, TAMANIO);

    for(i=0; i<TAMANIO; i++)
    {
        printf("%d\n", *(otroEnteros+i));
    }
    /*
       pArchivo = fopen("enteros.txt", "r");

      while(!feof(pArchivo))
       {
           fgets(auxiliar, 1, pArchivo);
           printf("%s", auxiliar);
           i++;
       }*/

    /*
    eEjemplo estructura = { 'x', 2 };
    int control;
    */
    // size= fwrite(dato, tamaño, cantidad,archivo)
    /*
        pArchivo = fopen("archivo.bin","wb");
        control = fwrite(&estructura, sizeof(eEjemplo), 1,pArchivo);
        fclose(pArchivo);
        printf("%d", control);
       */
    // size= fread(dato, tamaño, cantidad,archivo)
    /* pArchivo = fopen("archivo.bin","rb");
     control = fread(&estructura, sizeof(eEjemplo),1, pArchivo);
     printf("%c %d", estructura.caracter, estructura.entero);*/
    return 0;
}
