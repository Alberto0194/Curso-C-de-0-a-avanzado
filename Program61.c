#include<stdio.h>
#include<conio.h>

int main()
{
    int cursoa[5];
    int cursob[5];
    int f, suma1, suma2, promedio1, promedio2;
    printf("Nota curso A.\n");
    for (f=0; f<5; f++)
    {
        printf("Nota del A:");
        scanf("%i", &cursoa[f]);
    }
     printf("Nota curso B:\n");
    for (f=0; f<5; f++)
    {
        printf("Nota del B:");
        scanf("%i", &cursob[f]);
    }
    suma1=0;
    suma2=0;
     promedio1=0;
    promedio2=0;
    for (f=0; f<5; f++)
    {
        suma1=suma1+cursoa[f];
        suma2=suma2+cursob[f];

    }
     promedio1=suma1/5;
        promedio2=suma2/5;

        printf("Promedio del curso A: %i \n",promedio1);
        printf("Promedio del curso B: %i \n",promedio2);
        if(promedio1>promedio2)
        {
            printf("El promedio Mayor es el A: %i \n",promedio1);
        }
        else
        {
            printf("El promdeio Mayor es el B: %i \n",promedio2);
        }

    getch();
    return 0;
}
