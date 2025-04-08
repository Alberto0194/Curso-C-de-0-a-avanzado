#include<stdio.h>
#include<conio.h>

int main()
{
float precio, factura;
int cantidad;
printf("Cuantos productos llevara?:");
scanf("%i", &cantidad);
precio = 50.30;
factura = precio * cantidad;
printf("\n");
printf("El valor a pagar es:");
printf("%f", factura);
getch();
return 0;
}
