#include<stdio.h>
#include<conio.h>
#include<string.h>

#define TAMANO 4

struct libro{
    int codigo;
    char titulo[40];
    char autor[40];
};

void cargar(struct libro mangas[TAMANO])
{
    for(int f=0;f<TAMANO;f++)
    {
        printf("Ingrese codigo de libro:");
        scanf("%i", &mangas[f].codigo);
        fflush(stdin);
        printf("Ingrese titulo del libro:");
        gets(mangas[f].titulo);
        printf("Ingrese autor del libro:");
        gets(mangas[f].autor);
    }
}

void imprimir(struct libro mangas[TAMANO])
{
    printf("Listado Completo.\n");
    for(int f=0;f<TAMANO;f++)
    {
        // o tambien de la siguiente forma
        printf("Libro%i Codigo:%i Titulo:%s Autor:%s\n",f,mangas[f].codigo,mangas[f].titulo,mangas[f].autor);
        //libro y luego f para enlistar la cantidad
   /* printf("Codigo: %i\n",mangas[f].codigo);
    printf("Titulo: %s\n",mangas[f].titulo);
    printf("Autor: %s\n",mangas[f].autor);*/
    }
}

void datos(struct libro mangas[TAMANO],char autor[40])
{
    //se pudo omitir el char autor y declararlo aqui debajo
    int con=0;
    for(int f=0;f<TAMANO;f++)
    {
        if(strcmp(mangas[f].autor, autor)==0)
        {
            printf("%s\n", mangas[f].titulo);
            con=1;
        }
    }
    if(!con)
    {
        printf("No se encontraron resultados.");
    }
}

int main()
{
    struct libro mangas[TAMANO];
    char autor[40];
    cargar(mangas);
    imprimir(mangas);
    printf("Ingrese nombre de autor:");//tambien se podia dejar en la funcion datos en conjunoa la declaracion char autro[40]
    gets(autor);
    datos(mangas,autor);
    getch();
    return 0;
}
