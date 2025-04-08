#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo{
    int info;
    struct nodo *izq, *der;
};

struct nodo *raiz=NULL;

int existe(int x)
{
struct nodo *reco=raiz;
while (reco!=NULL)
{
    if(x==reco->info)
        return 1;
    else
        if(x>reco->info)
        reco=reco->der;
        else
            reco=reco->izq;
    }
}

void insertar (int x)
{
    if (!existe(x))
    {
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->info=x;
    nuevo->izq=NULL;
    nuevo->der=NULL;
    if(raiz==NULL)
        raiz=nuevo;
    else
    {
        struct nodo *anterior, *reco;
        reco=raiz;
        while(reco!=NULL)
        {
            anterior=reco;
            if(x<reco->info)
                reco=reco->izq;
            else
                reco=reco->der;
        }
        if(x<anterior->info)
            anterior->izq=nuevo;
        else
            anterior->der=nuevo;
    }
}

}

void imprimirEntre(struct nodo *reco)
{
    if(reco!=NULL)
    {
        imprimirEntre(reco->izq);
        printf("%i ",reco->info);
        imprimirEntre(reco->der);
    }
}

void borrar(struct nodo *reco)
{
    if(reco!=NULL)
    {
        borrar(reco->izq);
        borrar(reco->der);
        free(reco);
    }
}

void cantidad(struct nodo *reco, int *cant)
{
    if(reco!=NULL)
    {
        (*cant)++;
        cantidad(reco->izq,cant);
        cantidad(reco->der,cant);
    }
}

void cantidadHojas(struct nodo *reco, int *cant)
{
    if(reco!=NULL)
    {
        if(reco->izq==NULL && reco->der==NULL)
        (*cant)++;
        cantidadHojas(reco->izq,cant);
        cantidadHojas(reco->der,cant);
    }
}

void imprimirEntreConNivel(struct nodo *reco, int nivel)
{
    if(reco!=NULL)
    {
        imprimirEntreConNivel(reco->izq,nivel+1);
        printf("%i(%i) ",reco->info,nivel);
        imprimirEntreConNivel(reco->der,nivel+1);
    }
}

int main()
{
    int canti=0;
    int cantHojas=0;
    insertar(50);
    insertar(25);
    insertar(70);
    insertar(8);
    insertar(30);
    printf("Impresion entreordn:");
    imprimirEntre(raiz);
    printf("\n");
    cantidad(raiz,&canti);
    printf("Cantidad de nodos del arbol es:%i\n",canti);
    cantidadHojas(raiz,&cantHojas);
    printf("Cantidad de hojas del arbol:%i\n",cantHojas);
    printf("Impresion entre orden junto con el nivel\n");
    imprimirEntreConNivel(raiz,1);
    printf("\n");
    borrar(raiz);
    getch();
    return 0;
}
