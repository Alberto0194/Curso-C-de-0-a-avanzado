#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char nombres[5][30])
{
    for(int f=0;f<5;f++)
    {
        printf("Ingrese los nombres:");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][30])
{
    printf("Lista de nombres\n");
    for(int f=0;f<5;f++)
    {
        printf("%s\n",nombres[f]);
    }
}

void menor(char nombres[5][30])
{
    printf("Nombre menor\n");//esto solo me dira la palabra o en este caso el nombre de menor caracter alfabeticamente sin importar el tamano de esta, alberto sera menor que ana ya que l de alberto es menor que n de ana, si seria arberto y ana los dos al empezar con a ya serian considerados menores pero ana seria menor por n debajo de r alfabeticamene
    char aux[30];
    strcpy(aux,nombres[0]);
    for(int f=1;f<5;f++)
    {
       if(strcmp(nombres[f],aux)<0)
       {
           strcpy(aux,nombres[f]);
       }
    }
    printf("%s",aux);
}

int main()
{
    char nombres[5][30];
    cargar(nombres);
    imprimir(nombres);
    menor(nombres);
    getch();
    return 0;
}
