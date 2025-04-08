#include<stdio.h>
#include<conio.h>

#define TAMANO 5

void cargar(int vec[TAMANO])
{
    for(int f=0;f<TAMANO;f++)
    {
        printf("Ingrese elemento:");
        scanf("%i", &vec[f]);
    }
}

void imprimir(int vec[TAMANO])
{
    for(int f=0;f<TAMANO;f++)
    {
        printf("%i ",vec[f]);
    }
    printf("\n");
}

void ordenar(int vec[TAMANO], int cant)
{
    if(cant>1)
    {
        for(int f=0;f<cant-1;f++)
        {
            if(vec[f]>vec[f+1])
            {
                int aux=vec[f];
                vec[f]=vec[f+1];
                vec[f+1]=aux;
            }
        }
        ordenar(vec, cant-1);
    }
}

int main()
{
    int vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    ordenar(vec,TAMANO);
    imprimir(vec);
    getch();
    return 0;
}
