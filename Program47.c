#include<stdio.h>
#include<conio.h>

int main()
{
    int f,n,n2,n3,suma,suma2,suma3,equilatero,isosceles,escaleno,p;
    equilatero=0;
    isosceles=0;
    escaleno=0;
    suma=0;
    suma2=0;
    suma3=0;
    printf("Triangulos a trabajar:");
    scanf("%i",&p);
    for (f=1; f<=1; f++)
      {   printf("Triangulo1");
        printf("\n");
        printf("Lado1:");
        scanf("%i", &n);
        printf("Lado2:");
        scanf("%i", &n2);
        printf("Lado3:");
        scanf("%i", &n3);
        suma=suma+n+n2+n3;
        printf("Suma:");
        printf("%i",suma);
        printf("\n");
        if (n==n2 && n2==n3){
            printf("Triangulo equilatero.\n");
            equilatero++;

        }else if (n==n2 || n2==n3){
            printf("Triangulo isosceles.\n");
            isosceles++;

        }else{
            printf("Triangulo escaleno.\n");
            escaleno++;
        }
          {   printf("Triangulo1");
        printf("\n");
        printf("Lado1:");
        scanf("%i", &n);
        printf("Lado2:");
        scanf("%i", &n2);
        printf("Lado3:");
        scanf("%i", &n3);
        suma2=suma2+n+n2+n3;
        printf("Suma:");
        printf("%i",suma2);
        printf("\n");
        if (n==n2 && n2==n3){
            printf("Triangulo equilatero.\n");
            equilatero++;

        }else if (n==n2 || n2==n3){
            printf("Triangulo isosceles.\n");
            isosceles++;

        }else{
            printf("Triangulo escaleno.\n");
            escaleno++;
        }
    {   printf("Triangulo1");
        printf("\n");
        printf("Lado1:");
        scanf("%i", &n);
        printf("Lado2:");
        scanf("%i", &n2);
        printf("Lado3:");
        scanf("%i", &n3);
        suma3=suma3+n+n2+n3;
        printf("Suma:");
        printf("%i",suma3);
        printf("\n");
        if (n==n2 && n2==n3){
            printf("Triangulo equilatero.\n");
            equilatero++;

        }else if (n==n2 || n2==n3){
            printf("Triangulo isosceles.\n");
            isosceles++;

        }else{
            printf("Triangulo escaleno.\n");
            escaleno++;
        }
        printf("\n");
        }
        if(suma==suma2 && suma2==suma3){
            printf("Todos los tringulos son iguales.\n");

        }else if (suma<suma2 && suma<suma3){
            printf("Triangulo 1 es menor.\n");

        }else if (suma2<suma3 && suma2<suma){
            printf("Triangulo 2 es menor.\n");

        }else{
             printf("Triangulo 3 es menor.\n");
        }
          }
      }

       printf("Triangulo equilatero: ");
        printf("%i",equilatero);
        printf("\n");
        printf("Triangulo isosceles: ");
        printf("%i",isosceles);
        printf("\n");
        printf("Triangulo escaleno: ");
        printf("%i",escaleno);
    getch();
    return 0;
}
