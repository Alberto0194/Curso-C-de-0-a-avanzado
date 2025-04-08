#include<stdio.h>
#include<conio.h>

void cargar(int valor[3][4])
{
    for(int f=0;f<3;f++)
    {
        for(int c=0;c<4;c++)
        {
            printf("Ingrese valores:");
            scanf("%i", &valor[f][c]);
        }
        printf("\n");
    }
}

void imprimir(int valor[3][4])
{
    int aux=valor[0][0];
    for(int f=0;f<3;f++)
    {
        for(int c=0;c<4;c++)
        {
            if (valor[f][c]>aux)
            {
               aux=valor[f][c];
            }
        }
    }
    printf("Elementos mayor: %i",aux);
}

int main()
{
    int valor[3][4];
    cargar(valor);
    imprimir(valor);
    getch();
    return 0;
}
