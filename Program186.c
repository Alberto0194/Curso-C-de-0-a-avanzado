#include<stdio.h>
#include<conio.h>

int main()
{
    int valor;
    int suma=0;
    while(1)
    {
        printf("Ingrese un valor(0 para terminar el programa): ");
        scanf("%i", &valor);
        if(valor==0)//sin el if while seria infinito,
        break;
        suma+=valor;
    }
    printf("La suma de los valores es:%i",suma);
    getch();
    return 0;
}
