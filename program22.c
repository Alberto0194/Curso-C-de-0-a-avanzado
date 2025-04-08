#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3;
    printf("Ingrese primer valor:");
    scanf("%i", &num1);
    printf("Ingrese segundo valor:");
    scanf("%i", &num2);
    printf("Ingrese tercer valor:");
    scanf("%i", &num3);

    if (num1<10 && num2<10 && num3<10)
    {
        printf("Todas los numeros son menores a diez");
    }
    else
    {
        printf("No cumple");
    }

    getch ();
    return 0;
}
