#include<stdio.h>
#include<conio.h>

int main()
{
    char oracion[201];
    printf("Ingrese una oracion:");
    gets(oracion);
    int x=0;
    int espacios=0;
    while (oracion[x]!='\0')
    {
        if (oracion[x]==' ')
        {
            espacios++;
        }
        x++;
    }
    int palabras=espacios+1;
    printf("La cantidad de palabras de la oracion '%s' es %i" ,oracion,palabras);
    getch();
    return 0;
}
