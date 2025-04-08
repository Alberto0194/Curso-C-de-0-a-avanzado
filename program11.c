#include<stdio.h>
#include<conio.h>

int main()
{
 int nota1, nota2, nota3, promedio;
 printf("Ingrese primera nota:");
 scanf("%i", &nota1);
 printf("Ingrese segunda nota:");
 scanf("%i", &nota2);
 printf("Ingrese tercera nota:");
 scanf("%i", &nota3);
 promedio=(nota1+nota2+nota3)/3;

 if (promedio>=70)
 {
     printf("Felicidades, has aprobado con:");
     printf("%i", promedio);
 }
 else
 {
     printf("Lo lamento, repetiras el ano:");
     printf("%i", promedio);
 }


 getch();
 return 0;
}
