#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char nombres[5][41])
{
    for(int f=0;f<5;f++)
    {
        printf("Ingrese los nombres:");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][41])
{
    for(int f=0;f<5;f++)
    {
        printf("%s\n",nombres[f]);
    }
}

void consulta(char nombres[5][41])
{
    char nom[41];
    int cont=0;
    printf("Ingrese nombre que busca:");
    gets(nom);
    for(int f=0;f<5;f++)
    {
        if(strcmp(nom,nombres[f])==0)
        {
            cont=1;
        }
    }
    if(cont==1)
    {
        printf("El nombre ingresado se encuentra en la base de datos.");
    }
    else
    {
        printf("El nombre ingresado no se encuentra en la base de datos.");
    }
}



int main()
{
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    consulta(nombres);
    getch();
    return 0;
}
