#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2;
    printf("Ingrese primer valor:");
    scanf("%i", &num1);
    printf("Ingrese segundo valor:");
    scanf("%i", &num2);

    if (num1>num2)
    {
        printf("El numero mayor es el:");
        printf("%i", num1);
    }
    else
    {
        printf("El numero mayor es el:");
        printf("%i", num2);
    }
    getch();
    return 0;
}
