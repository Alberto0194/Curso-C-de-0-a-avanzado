#include<stdio.h>
#include<conio.h>

float intermedio (int v1,int v2,int v3)
{
    int suma=v1+v2+v3;
    float promedio=(float)suma/3;
    return promedio;
}

int main()
{
    int valor1,valor2,valor3;
    printf("Ingrese primer valor:");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor:");
    scanf("%i", &valor2);
    printf("Ingrese tercer valor:");
    scanf("%i", &valor3);
    printf("EL promedio de los tres valores es %0.2f",intermedio(valor1,valor2,valor3));
    getch();
    return 0;
}
