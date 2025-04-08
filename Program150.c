#include<stdio.h>
#include<conio.h>

#define LARGO 40 // puede ser largo o tamano seria lo mismo
 void cargar(char *p)
 {
     printf("Ingese elemento:");
     gets(p);
 }

 void imprimir(char *p)
 {
     printf("La palabra ingresada fue:%s",p);
 }

int main()
{
    char vector[LARGO];
    cargar(vector);
    imprimir(vector);
    getch();
    return 0;
}
