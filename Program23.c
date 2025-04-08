#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3;
    printf("Ingrese primer valor:");
    scanf("%i", &num1);
    printf("Ingrese segundo valor:");
    scanf("%i", &num2);
    printf("Ingrese tercer valor:");
    scanf("%i", &num3);

    if (num1<10 || num2<10 || num3<10)
    {
        printf("Algunos de los numeros es menor a diez");
    }
    else
    {
        printf(" Los numeros es mayor a diez");
    }
    getch();
    return 0;
}
