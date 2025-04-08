#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3;
    printf("Ingrese el primer numero:");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero:");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero:");
    scanf("%i", &num3);

    if(num1>num2)
    {
        printf("El numero mayor es:");
        printf("%i", num1);
    }
    else
    {
        if (num2>num3)
        {
        printf("El numero mayor es:");
        printf("%i", num2);
        }
        else
        {
            printf("El numero mayor es:");
            printf("%i", num3);
        }
    }

    getch();
    return 0;
}
