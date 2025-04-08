#include<stdio.h>
#include<conio.h>

void mayor (int num1, int num2, int num3)
{
    if (num1>num2 && num1>num3)
    {
        printf("%i es mayor",num1);
    }
    else
    {
        if (num2>num3)
        {
            printf("%i es mayor",num2);
        }
        else
        {
            printf("%i es mayor",num3);
        }
    }
}

int main()
{
    int num1,num2,num3;
    printf("Ingrese primer valor:");
    scanf("%i", &num1);
    printf("Ingrese segundo valor:");
    scanf("%i", &num2);
    printf("Ingrese tercer valor:");
    scanf("%i", &num3);
    mayor(num1,num2,num3);
    getch();
    return 0;
}
