#include<stdio.h>
#include<conio.h>

struct pais{
    char nombre[41];
    int habitantes;
};

void cargar(struct pais *p)
{
    printf("Ingrese pais:");
    gets(p->nombre);
    printf("Cantidad de habitantes:");
    scanf("%i",&p->habitantes);
    fflush(stdin);
}

void imprimir(struct pais p)
{
    printf("%s - %i\n",p.nombre,p.habitantes);
}

int main()
{
    struct pais pais1;
    struct pais pais2;
    struct pais pais3;
    cargar(&pais1);
    cargar(&pais2);
    cargar(&pais3);
    imprimir(pais1);
    imprimir(pais2);
    imprimir(pais3);
    getch();
    return 0;
}

