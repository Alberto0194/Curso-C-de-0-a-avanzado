#include<stdio.h>
#include<conio.h>

int main()
{
int num1, num2, suma, producto;

printf("Ingrese primer valor:");
scanf("%i", &num1);
printf("Ingrese segundo valor:");
scanf("%i", &num2);
suma=num1+num2;
producto=num1*num2;
printf("la suma de los dos valores:");
printf("%i", suma);
printf("\n");
printf("El prodcto de los valores es:");
printf("%i", producto);
getch();
return 0;
}




