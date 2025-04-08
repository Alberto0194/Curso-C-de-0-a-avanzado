#include<stdio.h>
#include<conio.h>

#define CANT 5

void cargar (int valor[CANT])
{
    for(int f=0;f<CANT;f++)
    {
    printf("Ingrese valor:");
    scanf("%i",&valor[f]);
    }
}

void imprimir(int valor[CANT])
{
    printf("Valores:\n");
    for(int f=0;f<CANT;f++)
    {
        printf("%i -",valor[f]);
    }
    printf("\n\n");
}

int imprimirMayor(int valor[CANT])
{
    int may=valor[0];
    for(int f=1;f<CANT;f++)
    {
        if(valor[f]>may)
        may=valor[f];

    }
    return may;
}

int imprimirMenor(int valor[CANT])
{
    int men=valor[0];
    for(int f=1;f<CANT;f++)
    {
        if(valor[f]<men)
        men=valor[f];


    }
    return men;
}

 int main()
 {
     int valor[CANT];
     int mayor,menor;
     int opcion;
     printf("1-cargar elementos.\n2-mostrarlo.\n3-imprimirel mayor.\n4-imprimir el menor.\n5-finalizar el programa.\n");
    do{ printf("Elija una opcion:\n");
     scanf("%i",&opcion);
    switch(opcion){
        case 1:cargar(valor);
            break;
        case 2:imprimir(valor);
            break;
        case 3:printf("El valor mayor es:%i\n",imprimirMayor(valor));
            break;
        case 4:printf("El valor menor es:%i\n",imprimirMenor(valor));
            break;
        default:printf("Fin del programa.\n");
            break;
    }
    }while(opcion!=5);

     getch();
     return 0;
 }
