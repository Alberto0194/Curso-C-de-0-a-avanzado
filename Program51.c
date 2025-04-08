#include<stdio.h>
#include<conio.h>

int main()
{
    int valor;
    do{
            printf("Ingrese valor:");
    scanf("%i",&valor);
    if(valor>=100)
    {
        printf("Tiene 3 digitos.\n");
    }
    else
    {
        if (valor>=10)
        {
            printf("Tiene 2 digitos.\n");
        }
        else
        {
            printf("tiene 1 digito.\n");
        }
    }

    } while (valor!=0);
    getch();
    return 0;
}
