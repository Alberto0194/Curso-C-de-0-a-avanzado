#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, sumar, resta, multiplicar;
    float dividir;
    printf("Ingrese primer valor:");
    scanf("%i", &num1);
    printf("Ingrese segundo valor:");
    scanf("%i", &num2);
    sumar=num1+num2;
    resta=num1-num2;
    multiplicar=num1*num2;
    dividir=num1/num2;
    if (num1>num2)
    {

        printf("La suma de los dos valores es:");
        printf("%i", sumar);
        printf("\n");
        printf("La resta de los dos valores es:");
        printf("%i", resta);

    }
    else
    {

        printf("La multiplicacion de los dos valores es:");
        printf("%i", multiplicar);
        printf("\n");
        printf("La division de los dos valores es:");
        printf("%f", dividir);
    }
    getch();
    return 0;
}
