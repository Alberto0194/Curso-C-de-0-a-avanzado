#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3,num4,suma,producto;

    printf("ingrese el primer valor:");
    scanf("%i", &num1);
    printf("ingrese el segundo valor:");
    scanf("%i", &num2);
    printf("Ingrese el tercer valor:");
    scanf("%i", &num3);
    printf("Ingrese el cuarto valor:");
    scanf("%i", &num4);
    suma=num1+num2;
    producto = num3*num4;
    printf("La suma de ambos valores es igual a:");
    printf("%i", suma);
    printf("\n");
    printf("El valor del tercer y cuarto valor es:");
    printf("%i", producto);
    getch();
    return 0;
}
