#include<stdio.h>
#include<conio.h>

int main()
{
    int cant,cant2,cant3,cant4,suma;
    float x;
    cant=0;
    cant2=0;
    cant3=0;

    do{
        printf("Ingrese valor del peso de las piezas (0 termina el programa): ");
        scanf("%f", &x);
        if(x>10.2)
        {
            cant++;
        }
        else
        {
            if (x>9.8)
            {
            cant2++;

            }
            else
            {
                if (x>0)
                {
                    cant3++;
                }

                }
            }


    } while (x!=0);

       suma=cant+cant2+cant3;

    printf("La cantidad de piezas son: ");
    printf("%i", suma);
    printf("\n");
    printf("Piezas entre 9.8 y 10.2: ");
    printf("%i", cant);
    printf("\n");
    printf("Piezas mayor a 10.2: ");
    printf("%i", cant2);
    printf("\n");
    printf("Piezas menor a 9.8: ");
    printf("%i", cant3);
    getch();
    return 0;
}
