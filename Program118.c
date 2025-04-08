#include<stdio.h>
#include<conio.h>

void cargar(int valor[2][5])
{
    for(int f=0;f<2;f++)
    {
        for(int c=0;c<5;c++)
        {
            printf("Ingrese valores:");
            scanf("%i", &valor[f][c]);
        }
        printf("\n");
    }
}

void imprimir(int valor[2][5])
{
    int aux;
    for(int f=0;f<2;f++)
    {
        for(int c=0;c<5;c++)
        {
            printf("%i ", valor[f][c]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void intercambiar(int valor[2][5])
{
    int aux;
    for(int c=0;c<5;c++)
    {
        aux=valor[0][c];
        valor[0][c]=valor[1][c];
        valor[1][c]=aux;
    }
}


int main()
{
    int valor[2][5];
    cargar(valor);
    imprimir(valor);
    intercambiar(valor);
    imprimir(valor);
    getch();
    return 0;
}
