#include<stdio.h>
#include<conio.h>

#define TAMANO 5

void cargar(int vector[TAMANO])
{
    for(int f=0;f<TAMANO;f++)
    {
        printf("Ingrese valor:");
        scanf("%i",&vector[f]);
    }
}

void mayormenor(int vector[TAMANO],int *pmayor,int *pmenor)
{
    int may=vector[0];
    for(int f=1;f<TAMANO;f++)
    {
        if(vector[f]>may)
        {
            may=vector[f];
            pmayor=&may;
        }
    }
    int men=vector[0];
    for(int k=1;k<TAMANO;k++)
    {
        if(vector[k]<men)
        {
            men=vector[k];
            pmenor=&men;
        }
    }
    printf("El numero mayor es %i\n",*pmayor);
    printf("El numero menor es %i\n",*pmenor);
}


int main()
{
    int vector[TAMANO];
    int mayor;
    int menor;
    cargar(vector);
    mayormenor(vector,&mayor,&menor);
    getch();
    return 0;
}
