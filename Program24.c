#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2;
    printf("Ingrese primer valor:");
    scanf("%i", &num1);
    printf("Ingrese segundo valor:");
    scanf("%i", &num2);

    if (num1==0 && num2==0)
    {
        printf("Favor de ingresar valores mayores a 0");
    }
    else
    {
        if (num1==0 && num2>0)
        {
            printf("Pertenece al segundo cuadro");
        }
        else
        {
            if(num1==0 && num2<0)
            {
                printf("Pertenece al tercer cuadro");
            }
            else
            {
                if (num1>0 && num2==0)
                {
                    printf("Pertenece al primer cuadro");
                }
                else
                {
                    if (num1<0 && num2==0)
                    {
                        printf("Pertenece al segundo cuadro");
                    }
    else
    {
        if (num1>0 && num2>0)
        {
            printf("Pertenecen al primer cuadro");
        }
        else
        {
            if (num1<0 && num2>0)
            {
                printf("Pertenecen al segundo cuadro");
            }
            else
            {
                if (num1<0 && num2<0)
                {
                    printf("Pertenecen al tercer cuadro");
                }
                else
                {
                    if(num1>0 && num2<0)
                    {
                        printf("Pertenecen al cuarto cuadro");
                    }
                }
            }
        }
    }
    }
    }
    }
    }
    getch();
    return 0;
}
