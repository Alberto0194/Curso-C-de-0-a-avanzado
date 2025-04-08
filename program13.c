#include<stdio.h>
#include<conio.h>

int main()
{
    int not1, not2, not3, promedio;
    printf("Ingrese primera nota:");
    scanf("%i", &not1);
    printf("Ingrese segunda nota:");
    scanf("%i", &not2);
    printf("Ingrese tercera nota:");
    scanf("%i", &not3);

    promedio = (not1+not2+not3)/3;

    if (promedio>=7)
    {
        printf("Aprobado:");
        printf("%i", promedio);
    }
    else
    {
        if (promedio>=4)
        {
            printf("Regular:");
            printf("%i", promedio);
        }
        else
        {
            printf("Reprobado:");
            printf("%i", promedio);
        }
    }

    getch();
    return 0;
}
