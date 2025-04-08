#include<stdio.h>
#include<conio.h>

void imprimir(int v1, int v2)
{
    if(v1>v2)
    {
        printf("El mayor es %i",v1);
    }
    else
    {
        printf("El mayor es %i",v2);
    }
}

int main()
{
    int valor1, valor2;
    printf("Ingrese primer valor:");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor:");
    scanf("%i", &valor2);
    imprimir(valor1,valor2);
    getch();
    return 0;
}
