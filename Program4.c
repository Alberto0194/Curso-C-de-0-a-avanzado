#include<stdio.h>
#include<conio.h>

int main()
{
   int lado1;
   int resultado;
   printf("Introduce valor del primer lado:");
   scanf("%i", &lado1);
   resultado = lado1 * 4;
   printf("El valor es:");
   printf("%i", resultado);
   getch();
   return 0;
}
