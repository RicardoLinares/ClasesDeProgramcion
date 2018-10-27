#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char caracter;
    int entero;
}eEjemplo;
int main()
{
    FILE* pArchivo;
    eEjemplo estructura = { 'x', 2 };
    int control;

    // size= fwrite(dato, tamaño, cantidad,archivo)
/*
    pArchivo = fopen("archivo.bin","wb");
    control = fwrite(&estructura, sizeof(eEjemplo), 1,pArchivo);
    fclose(pArchivo);
    printf("%d", control);
   */
   // size= fread(dato, tamaño, cantidad,archivo)
    pArchivo = fopen("archivo.bin","rb");
    control = fread(&estructura, sizeof(eEjemplo),1, pArchivo);
    printf("%c %d", estructura.caracter, estructura.entero);
    return 0;
}
