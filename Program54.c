#include<stdio.h>
#include<conio.h>

int main()
{
    int x,suma;
    suma=0;
    do{
        printf("Ingresar valor: ");
        scanf("%i",&x);
        if (x!=9999)
        {
            suma=suma+x;
        }


    } while (x!=9999);
    printf("Valor acumulado:");
    printf("%i",suma);
    printf("\n");

    if (suma>0)
    {

        printf("Valor mayor a 0: ");
        printf("%i", suma);
    }
    else
    {
        if (suma<0)
        {
            printf("Valor menor a 0: ");
            printf("%i", suma);
        }
        else
        {
            if (suma==0)
            {
                printf("El valor es 0.");
            }
        }
    }

    getch();
    return 0;
}
