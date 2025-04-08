#include<stdio.h>
#include<conio.h>
#include<string.h>

struct pais{
    char nombres[41];
    int habitantes;
};

void imprimir(struct pais p)
{
    printf("Pais %s y su cantidad de habitantes que son %i\n",p.nombres,p.habitantes);
}

int main()
{
    struct pais pais1={"Brazil",80};
    struct pais pais2={"Japon",170};
    struct pais pais3={"Usa",100};
    /*strcpy(pais1.nombres,"Brazil");
    pais1.habitantes=80;
    strcpy(pais2.nombres,"Japon");
    pais2.habitantes=170;
    strcpy(pais3.nombres,"Usa");
    pais3.habitantes=100;*/
    imprimir(pais1);
    imprimir(pais2);
    imprimir(pais3);
    getch();
    return 0;
}
