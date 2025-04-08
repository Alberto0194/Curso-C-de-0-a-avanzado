#include<stdio.h>
#include<conio.h>

#define cant 5

void cargar(int vector[cant])
{
    for(int f;f<cant;f++)
    {
        printf("ingrese elemento:");
        scanf("%i", &vector[f]);
    }
}

int sumas(int vector[cant])
{
    int suma=0;
    for(int f=0;f<cant;f++)
        suma+=vector[f];
        return suma;
}

int producto(int vector[cant])
{
    int pro=1;
    for(int f=0;f<cant;f++)
        pro*=vector[f];
        return pro;
}

int main()
{
    int vector[cant];
    cargar(vector);
    printf("La suma es:%i\n",sumas(vector));
    printf("Producto es:%i\n",producto(vector));
    getch();
    return 0;
}
