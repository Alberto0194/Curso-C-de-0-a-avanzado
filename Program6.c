#include<stdio.h>
#include<conio.h>

int main()
{
int num1,num2, num3, num4, suma, promedio;

printf("Colocar primer valor:");
scanf("%i", &num1);
printf("Colocar segundo valor:");
scanf("%i", &num2);
printf("Colocar tercer valor:");
scanf("%i", &num3);
printf("Colocar cuarto valor:");
scanf("%i", &num4);
suma = num1+num2+num3+num4;
promedio = suma / 4;
printf("La suma de los valores es:");
printf("%i", suma);
printf("\n");
printf("El promedio de los valores es:");
printf("%i", promedio);

getch();
return 0;
}

