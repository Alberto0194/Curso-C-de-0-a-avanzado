#include<stdio.h>
#include<conio.h>

#define CANTIDAD 5

void cargar(int vec[CANTIDAD])
{
    for(int f=0;f<CANTIDAD;f++)
        {
            printf("Ingrese componente:");
            scanf("%i", &vec[f]);
        }
}

void imprimir(const int vec[CANTIDAD])
{
    for(int f=0;f<CANTIDAD;f++)
    {
        printf("%i ",vec[f]);
    }
}

int main()
{
    int vec[CANTIDAD];
    cargar(vec);
    imprimir(vec);
    getch();
    return 0;
}
