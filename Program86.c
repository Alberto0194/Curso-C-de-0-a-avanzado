#include<stdio.h>
#include<conio.h>

void funcion1()
{
    int valor1,cuadrado;
    printf("Ingrese valor:");
    scanf("%i", &valor1);
    cuadrado=valor1*valor1;
    printf("El cuadrado de %i es %i\n",valor1,cuadrado);
    printf("\n\n");
}

void funcion2()
{
    int valor1,valor2,producto;
    printf("Ingrese pirmer valor:");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor:");
    scanf("%i", &valor2);
    producto=valor1*valor2;
    printf("El producto de ambos valores es %i\n",producto);
}

int main()
{
    funcion1();
    funcion2();
    getch();
    return 0;
}
