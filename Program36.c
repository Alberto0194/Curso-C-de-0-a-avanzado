#include<stdio.h>
#include<conio.h>

int main()
{
    int list1,list2,x,x2;
    float sumar,sumar2;
    x=1;
    x2=1;
    sumar=0;
    sumar2=0;
    while (x<=15)
    {
        printf("Ingrese valor de la primera lista:");
        scanf("%i",&list1);
        sumar=sumar+list1;
        x=x+1;


    }
    {
        printf("\n");
    }
    while (x2<=15)
    {
       printf("Ingrese valor de la segunda lista:");
       scanf("%i",&list2);
       sumar2=sumar2+list2;
       x2=x2+1;

    }
    if (sumar>sumar2)
    {
        printf("Lista #1 es mayor");
    }
    else
    {
        if (sumar<sumar2)
        {
            printf("Lista #2 es mayor");
        }
        else
        {
            printf("Ambas listas son iguales");
        }
    }
    getch();
    return 0;
}
