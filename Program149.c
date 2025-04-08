#include<stdio.h>
#include<conio.h>

#define TAMANO 5
void cargar(float *p)
{
    for(int f=0;f<TAMANO;f++)
    {
       printf("Ingrese elemento:");
       scanf("%f",&p[f]);
    }
}

void imprimir(float *p)
{
   for(int f=0;f<TAMANO;f++)
    {
       printf("%0.2f-",p[f]);
    }
}

int main()
{
    float vector[TAMANO];
    cargar(vector);
    imprimir(vector);
    getch();
    return 0;
}
