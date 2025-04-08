#include<stdio.h>
#include<conio.h>

void presentacion()
{
    printf("Programa para la suma de dos valores.\n");
    printf("Dos valores por teclado.\n");
    printf("Muestre el resultado.\n");
    printf("______________________________________________\n");
}
void cargarsuma()
{
    int valor1,valor2,suma;
    printf("Ingrese primer valor:");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor:");
    scanf("%i", &valor2);
    suma=valor1+valor2;
    printf("La suma de ambos valores es = %i\n",suma);
}
void fin()
{
    printf("__________________________________________\n");
    printf("Gracias por jugar.");
}
int main()
{
    presentacion();
    cargarsuma();
    fin();
    getch();
    return 0;
}
