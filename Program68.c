#include<stdio.h>
#include<conio.h>

int main()
{
    int valor,sumar=0;
    char continuar;
   do{printf("Ingrese valor:");
    scanf("%i", &valor);
    sumar=sumar+valor;
    printf("Desea ingesar algun otro dato (s/n):");
    scanf(" %c", &continuar);
   } while (continuar=='s' || continuar=='S');
   printf("La suma total es: %i ",sumar);
   getch();
   return 0;
}
