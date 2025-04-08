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

    int mayor = num1>num2 && num1>num3;
    int mayor2 = num2>num3 && num2>num1;
    int mayor3 = num3>num1 && num3>num2;

    int menor = num1<num2 && num1<num3;
    int menor2 = num2<num3 && num2<num1;
    int menor3 = num3<num1 && num3<num2;

    if (mayor && menor2)
    {
        printf("El numero mayor es:");
        printf("%i", num1);
        printf("\n");
        printf("El numero menor es:");
        printf("%i", num2);
    }
    else
    {
        if (mayor && menor3)
        {
            printf("El numero mayor es:");
            printf("%i",num1);
            printf("\n");
            printf("El numero menor es:");
            printf("%i", num3);
        }
        else
        {
            if (mayor2 && menor)
            {
            printf("El numero mayor es:");
            printf("%i",num2);
            printf("\n");
            printf("El numero menor es:");
            printf("%i", num1);
            }
            else
            {
                if (mayor2 && menor3)
                {
            printf("El numero mayor es:");
            printf("%i",num2);
            printf("\n");
            printf("El numero menor es:");
            printf("%i", num3);
                }
                else
                {
                    if (mayor3 && menor)
                    {
            printf("El numero mayor es:");
            printf("%i",num3);
            printf("\n");
            printf("El numero menor es:");
            printf("%i", num1);
                    }
                    else
                    {
            printf("El numero mayor es:");
            printf("%i",num3);
            printf("\n");
            printf("El numero menor es:");
            printf("%i", num2);
                    }
                }
            }
        }

    }

    getch();
    return 0;
}
