#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo{
    int info;
    struct nodo *sig;
};

struct nodo *raiz=NULL;

void insertarPrimero(int x)
{
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->info=x;
    nuevo->sig=raiz;
    raiz=nuevo;
}

void liberar()
{
    struct nodo *reco=raiz;
    struct nodo *bor;
    while (reco!=NULL)
    {
        bor=reco;
        reco=reco->sig;
        free(bor);
    }
}

void imprimirizquierdaderecha()
{
    struct nodo *reco=raiz;
    while(reco!=NULL)
    {
        printf("%i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}

void imprimir(struct nodo *reco)
{
    if(reco!=NULL)
    {
        imprimir(reco->sig); //recursividad se llama al void imprimir
        printf("%i ",reco->info);
    }
}

int main()
{
    insertarPrimero(10);
    insertarPrimero(4);
    insertarPrimero(5);
    imprimirizquierdaderecha();
    imprimir(raiz); //raiz esta declarada como la del valor inicial
    liberar();
    getch();
    return 0;
}
