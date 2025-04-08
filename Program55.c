#include<stdio.h>
#include<conio.h>
/*
#include<stdio.h>
#include<conio.h>
int main()
{
int cuenta;
float saldo, suma;
suma=0;
do{
    printf("Ingrese # de cuenta");
    scanf("%i",&cuenta);
    if (cuenta>=0)
    {
    printf("Saldo acreedor");
    scanf("%i",&sueldo);
    }
    else
    {
    if (saldo<0)
    {
    printf("Saldo deudor");
    }
    else
    {
    printf("Saldo nulo")
    }
    }
    printf("\n");
    )
    )while (cuenta>=0)
    printf("Total de saldo");
    printf("%f",suma);
    getch();
    return 0:
}
*/
int main()
{
    int x,c,suma;
    suma=0;
    printf("Ingrese numero de cuenta:");
    scanf("%i",&c);
    printf("\n");
    do{
        printf("Ingrese valor de la cuenta: ");
        scanf("%i", &x);
         suma=suma+x;
    }while(x>=0);

    if (suma<0)
    {
        printf("Deudor: ");
        printf("%",x);
        printf("\n");
        printf("Numero de la cuenta: ");
        printf("%i",c);
        printf("\n");
    }
    else
    {
        if (suma>0)
        {
            printf("Acreedor.\n");
            printf("%",x);
            printf("\n");
            printf("Numero de la cuenta: ");
            printf("%i",c);
            printf("\n");
        }
        else
        {
            if (suma==0);
            {
            printf("Nulo.\n");
            printf("%",x);
            printf("\n");
            printf("Numero de la cuenta: ");
            printf("%i",c);
            printf("\n");
            }


        }
    }
    printf("El balance de cuenta es: ");
    printf("%i",suma);
    getch();
    return 0;
}
