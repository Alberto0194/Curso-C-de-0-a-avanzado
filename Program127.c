#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char pais[5][31],int habitantes[5])
{
    for(int f=0;f<5;f++)
    {
        printf("Ingrese los paises:");
        gets(pais[f]);
        printf("Ingrese cantidad de habitantes:");
        scanf("%i", &habitantes[f]);
        fflush(stdin);
    }
}

void ordenarpaises(char pais[5][31],int habitantes[5])
{
    char aux[31];
    int cont;
    for(int k=0;k<4;k++)
    {
        for(int f=0;f<4-k;f++)
        {
            if(strcmp(pais[f],pais[f+1])>0)
            {
                strcpy(aux,pais[f]);
                strcpy(pais[f],pais[f+1]);
                strcpy(pais[f+1],aux);
                cont=habitantes[f];
                habitantes[f]=habitantes[f+1];
                habitantes[f+1]=cont;
            }
        }
    }
}

void ordenarhabitantes(char pais[5][31],int habitantes[5])
{
    char aux[31];
    int cont;
    for(int k=0;k<4;k++)
    {
        for(int f=0;f<4-k;f++)
        {
            if(habitantes[f]<habitantes[f+1])
            {
                cont=habitantes[f];
                habitantes[f]=habitantes[f+1];
                habitantes[f+1]=cont;
                strcpy(aux,pais[f]);
                strcpy(pais[f],pais[f+1]);
                strcpy(pais[f+1],aux);
            }
        }
    }
}

void imprimir(char pais[5][31],int habitantes[5])
{
    for(int f=0;f<5;f++)
    {
    printf("%s - %i\n",pais[f],habitantes[f]);
    }
}



int main()
{
    char pais[5][31];
    int habitantes[5];
    cargar(pais,habitantes);
    ordenarpaises(pais,habitantes);
    printf("Paises ordenados alfabeticamente.\n");
    imprimir(pais,habitantes);
    ordenarhabitantes(pais,habitantes);
    printf("Cantidad de habitantes de mayor a menor.\n");
    imprimir(pais,habitantes);
    getch();
    return 0;
}
