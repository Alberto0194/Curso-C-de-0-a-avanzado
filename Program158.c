#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct nodo{
    int info;
    struct nodo *sig;
};

struct nodo *raiz=NULL;

void insertar(int x)
{
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->info=x;
    if(raiz==NULL)
    {
        raiz=nuevo;
        nuevo->sig=NULL;
    }
            else
            {
                nuevo->sig=raiz;
                raiz=nuevo;
            }
}

int extaer()
{
    if(raiz!=NULL)
    {
        int informacion =raiz->info;
        struct nodo *bor = raiz;
        raiz = raiz->sig;
        free(bor);
        return informacion;
    }
            else
            {
                return -1;
            }
}

void imprimir()
{
    struct nodo *reco=raiz;
    printf("Lista completa.\n");
    while(reco!=NULL)
    {
        printf("%i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}

void liberar()
{
    struct nodo *reco =raiz;
    struct nodo *bor;
    while(reco !=NULL)
    {
        bor=reco;
        reco=reco->sig;
        free(bor);
    }
}

int retornar()
{
    if(raiz!=NULL)
    {
        return raiz->info;
    }
    else
    {
        return -1;
    }
}

int main()
{
    insertar(10);
    insertar(40);
    insertar(3);
    imprimir();
    printf("Extraemos de la pila:%i\n",retornar());
    imprimir();
    printf("Extraemos el primero de la lista:%i\n",extaer());
    liberar();
    getch();
    return 0;
}

