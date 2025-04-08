#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3,suma,operacion;
    printf("Ingrese primer valor:");
    scanf("%i", &num1);
    printf("Ingrese segundo valor:");
    scanf("%i", &num2);
    printf("Ingrese tercer valor:");
    scanf("%i", &num3);

    if (num1==num2 && num1==num3)
    {
       suma= num1+num2;
       operacion = suma*num3;
       printf("El resultado de la suma es:");
       printf("%i", suma);
       printf("\n");
       printf("El resultado de la operacion es:");
       printf("%i", operacion);

    }
    else
    {
        printf("%i", num1);
        printf("\n");
        printf("%i", num2);
        printf("\n");
        printf("%i", num3);
    }
    getch();
    return 0;
}
