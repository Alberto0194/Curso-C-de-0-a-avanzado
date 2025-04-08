#include<stdio.h>
#include<conio.h>

int main()
{
    char nombre1[21];
    char nombre2[21];
    int edad1;
    int edad2;
    printf("Ingrese el nombre de la primera persona:");
    gets(nombre1);
    printf("Ingrese la edad:");
    scanf("%i",&edad1);
    fflush(stdin);
    printf("Ingrese el nombre de la segunda persona:");
    gets(nombre2);
    printf("Ingrese la edad:");
    scanf("%i",&edad2);
    if (edad1>edad2)
    {
        printf("EL mayor es: %s ", nombre1);
    }
    else
    {
        if (edad2>edad1)
        {
            printf("EL mayor es: %s ", nombre2);
        }
        else
        {
            printf("Tienen la misma edad: %s y %s ", nombre1, nombre2);
        }
    }
    getch();
    return 0;
}
