#include<stdio.h>
#include<conio.h>

int main()
{
    float sueldo;
    printf("Introduzca su sueldo:");
    scanf("%f", &sueldo);
    if (sueldo>=3000)
    {
        printf("Debe de pagar impuesto");
    }
    getch();
    return 0;
}
