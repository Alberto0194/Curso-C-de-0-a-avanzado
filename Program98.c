#include<stdio.h>
#include<conio.h>

int perimetroc (int lado)
{
    /* return lado*4; */
    int perimetro=lado*4;
    return perimetro;
}

int main()
{
    int lado;
    printf("Ingrese lado 1 del cuadrado:");
    scanf("%i", &lado);
    /* int pro=perimetroc(lado);
    printf("El perimetro del cuadrado es: %i",pro);*/
    printf("El perimetro del cuadrado es: %i",perimetroc(lado));
    getch();
    return 0;
}
