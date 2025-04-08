#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre1[31];
    char nombre2[31];
    printf("Ingrese primer nombre:");
    gets(nombre1);
    printf("Ingrese segundo nombre:");
    gets(nombre2);
    if (strlen(nombre1) > strlen(nombre2))
    {
        printf("'%s' tiene mas caracteres que '%s'",nombre1,nombre2);
    }
    else
    {
        if (strlen(nombre2) > strlen(nombre1))
        {
           printf("'%s' tiene mas caracteres que '%s'",nombre2,nombre1);
        }
        else
        {
            printf("'%s' tiene la misma cantidad de caracteres '%s'",nombre2,nombre1);
        }
    }

    getch();
    return 0;
}
