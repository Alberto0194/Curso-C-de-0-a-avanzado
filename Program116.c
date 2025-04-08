#include<stdio.h>
#include<conio.h>

void cargar (int valor[2][5])
{
    for(int c=0;c<5;c++)
    {
        for(int f=0;f<2;f++)
        {
            printf("Ingrese valor de la fila %i y columna %i :",f,c);
            scanf("%i", &valor[f][c]);
        }
    }
}


void imprimir(int valor[2][5])
{
    for(int f=0;f<2;f++)
    {
        for (int c=0;c<5;c++)
        {
            printf("%i ",valor[f][c]);
        }
        printf("\n");
    }
}


int main()
{
    int valor[2][5];
    cargar(valor);
    imprimir(valor);
    getch();
    return 0;
}
