#include<string.h>
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

char extaer()
{
    if(raiz!=NULL)
    {
        char informacion =raiz->info;
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

int vacia()
{
    if(raiz==NULL)
        return 1;
    else
        return 0;
}

void cargar(char *formula)
{
    printf("Ingrese la formula:");
    gets(formula);
}

int verificarbalanceada(char *formula)
{
    for(int f=0;f<strlen(formula);f++)
    {
        if(formula[f]=='{' || formula[f]=='(' || formula[f]=='[')
            {
                insertar(formula[f]);
            }
            else
            {
                if(formula[f]==')')
                {
                    if(extaer()!='(')
                    {
                        return 0;
                    }
                }
                else
                {
                    if(formula[f]==']')
                    {
                        if(extaer()!='[')
                        {
                            return 0;
                        }
                    }
                    else
                    {
                        if(formula[f]=='}')
                        {
                            if(extaer()!='{')
                                {
                                    return 0;
                                }
                        }
                    }
                }
            }
    }
    if(vacia())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char formula[101];
    cargar(formula);
    if(verificarbalanceada(formula))
    {
        printf("La formula esta balanceada.");
    }
    else
    {
        printf("LA formula no esta balanceada");
    }
    getch();
    return 0;
}
