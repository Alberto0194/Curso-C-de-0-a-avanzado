#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char nombres[5][41],int notas[5])
{
for(int f=0;f<5;f++)
{
    printf("Nombre del estudiate:");
    gets(nombres[f]);
    printf("Calificacion:");
    scanf("%i", &notas[f]);
    fflush(stdin);
}
}

void ordenar (char nombres[5][41],int notas[5])
{
    char auxnombres[41];
    int auxnotas;
    for(int k=0;k<4;k++)
    {
        for(int f=0;f<4-k;f++)
        {
            if(notas[f]<notas[f+1])
            {
                auxnotas=notas[f];
                notas[f]=notas[f+1];
                notas[f+1]=auxnotas;
                strcpy(auxnombres,nombres[f]);
                strcpy(nombres[f],nombres[f+1]);
                strcpy(nombres[f+1],auxnombres);
            }
        }
    }
}

void imprimir (char nombres[5][41],int notas[5])
{
    printf("Calificacion en orden adcendentes\n");//de mayor a menor
    for(int f=0;f<5;f++)
    {
        printf("%s - %i\n",nombres[f],notas[f]);
    }
}


int main()
{
    char nombres[5][41];
    int notas[5];
    cargar(nombres,notas);
    ordenar(nombres,notas);
    imprimir(nombres,notas);
    getch();
    return 0;
}
