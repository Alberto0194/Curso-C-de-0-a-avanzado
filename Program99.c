#include<stdio.h>
#include<conio.h>

int retornarsuperficie(int lado1, int lado2)
{
    int superficie=lado1*lado2;
    return superficie;
}

int main()
{
    int valor1,valor2,valor3,valor4,v;
    printf("Ingrese primer triangulo:\n");
    printf("Ingrese primer lado:");
    scanf("%i", &valor1);
    printf("Ingrese segundo lado:");
    scanf("%i", &valor2);
    printf("Ingrese segundo triangulo:\n");
    printf("Ingrese primer lado:");
    scanf("%i", &valor3);
    printf("Ingrese segundo lado:");
    scanf("%i", &valor4);
   /* v=retornarsuperficie(valor1,valor2);
     printf("%i\n",v);
     v=retornarsuperficie(valor3,valor4);
     printf("%i",v);*/
    //printf("Primer triangulo %i\n",retornarsuperficie(valor1,valor2));
    //printf("Segundo triangulo %i",retornarsuperficie(valor3,valor4));
    if (retornarsuperficie(valor1,valor2)==retornarsuperficie(valor3,valor4))
    {
        printf("Ambos rectangulos tienen la misma superficie.");
    }
    else
    {
        if (retornarsuperficie(valor1,valor2)>retornarsuperficie(valor3,valor4))
        {
            printf("Primer rectangulo tiene mayor superficie");
        }
        else
        {
            printf("El segundo rectangulo tiene mayor superficie");
        }
    }
    getch();
    return 0;
}
