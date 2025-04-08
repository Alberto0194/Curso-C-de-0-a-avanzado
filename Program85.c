#include<stdio.h>
#include<conio.h>

void cargasuma()
{
    int valor1,valor2,suma;
    printf("Ingrese primer valor:");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor:");
    scanf("%i", &valor2);
    suma=valor1+valor2;
    printf("La suma de %i y %i es %i\n",valor1,valor2,suma);
}
void separacion()
{
    printf("_________________________________________________\n");
}
int main()
{
    cargasuma();
    separacion();
    cargasuma();
    separacion();
    getch();
    return 0;
}
