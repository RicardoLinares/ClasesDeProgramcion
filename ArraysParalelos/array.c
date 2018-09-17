int newStudent(char name[], int age, int file, float height, char email[])
{

}


void orderName(char nombre[], int edad[], int legajo[], float altura[], int)
{
    char auxiliarString[1024];
    float auxiliarFloat;
    int auxiliarInt;

    int i;
    int j;

    for(i=0; i<tam - 1;i++)
    {
        for(j=i+; j<tam; j++)
        {
            if(strcmp(nombre[i], nombre[j]))
            {
                strcpy(auxiliarString, nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], auxiliarString);

                auxiliarInt = edad[i];
                edad[i] = edad[j];
                edad[j] = auxiliarInt;

                auxiliarInt = legajo[i];
                legajo[i] = legajo[j];
                legajo[j] = auxiliarInt;


                auxiliarFLoat = altura[i];
                altura[i] = altura[j];
                altura[j] = auxiliarFloat;
            }
        }
    }
}
