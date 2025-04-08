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
    printf("Lista de nombres:\n");
    for(int f=0;f<5;f++)
    {
        printf("%s\n",nombres[f]);
    }
}

void ordenar(char nombres[5][41])
{
    char aux[41];
    for(int o=0;o<4;o++)
    {
        for(int f=0;f<4;f++)
        {
            if(strcmp(nombres[f],nombres[f+1])>0)
            {
                strcpy(aux,nombres[f+1]);
                strcpy(nombres[f+1],nombres[f]);
                strcpy(nombres[f],aux);
            }
        }
    }
}

int main()
{
char nombres[5][41];
cargar(nombres);
imprimir(nombres);
ordenar(nombres);
imprimir(nombres);
getch();
return 0;
}
