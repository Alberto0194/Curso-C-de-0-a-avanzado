#include<stdio.h>
#include<conio.h>

#define TAMANO 5

void cargar(int *pe)
{
    for(int f=0;f<TAMANO;f++)
    {
        printf("Ingrese elemento:");
        scanf("%i", &*pe);
        pe++;
    }
}

void imprimir(int *pe)
{
    printf("Asenente\n");
    for(int f=0;f<TAMANO;f++)
    {
    printf("%i ",*pe);
    pe++;
    }
}

int main()
{
    int vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    getch();
    return 0;
}
