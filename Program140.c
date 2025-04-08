#include<stdio.h>
#include<conio.h>

int main()
{
    int valor1=10;
    int valor2=20;
    int *pe;
    pe=&valor1;
    printf("Lo apuntado por pe es:%i\n",*pe);//10
    printf("La direccion que almacena pe es:%p\n",pe);
    pe=&valor2;
    printf("Lo apuntado por pe es:%i\n",*pe);//20
    printf("La direccion que almacena pe es:%p\n",pe);
    getch();
    return 0;
}
