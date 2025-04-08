#include<stdio.h>
#include<conio.h>

int main()
{
    float sueldo;
    int tiempo;
    printf("Ingrese su sueldo:");
    scanf("%f",&sueldo);
    printf("Ingrese tiempo en la empresa:");
    scanf("%i",&tiempo);

    if (sueldo<500 && tiempo>=10)
    {
        float aumento = (sueldo*20)/100;
        float nuevopago = sueldo+aumento;
        printf("Su sueldo sera de:");
        printf("%f",nuevopago);
    }
    else
    {
        if (sueldo<500 && tiempo<10)
        {
            float aumento = (sueldo*5)/100;
            float nuevopago = aumento+sueldo;
            printf("Su sueldo sera de:");
            printf("%f", nuevopago);
        }
        else
        {
            if (sueldo>=500)
            {
                printf("Tendra:");
                printf("%f", sueldo);
            }
        }
    }


    getch();
    return 0;
}
