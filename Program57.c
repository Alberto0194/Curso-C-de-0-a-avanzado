#include<stdio.h>
#include<conio.h>

int main()
{
    int f,may,men;
    float suma,promedio;
    float altura[5];
    for (f=0; f<5; f++)
    {
        printf("Ingrese la altura:");
        scanf("%f",&altura[f]);
    }
    suma=0;
    for (f=0; f<5; f++)
    {
        suma=suma+altura[f];
    }
    promedio=suma/5;
    printf("Promedio:");
    printf("%0.2f",promedio);
    printf("\n");
    may=0;
    men=0;
    for (f=0; f<5; f++)
    {
        if (altura[f]>promedio)
        {
            may++;
        }
        else
        {
            if (altura[f]<promedio)
            {
                men++;
            }
        }
    }
    printf("Cantidad de personas altas:");
    printf("%i", may);
    printf("\n");
    printf("Cantidad de personas bajas:");
    printf("%i", men);
    getch();
    return 0;
}
