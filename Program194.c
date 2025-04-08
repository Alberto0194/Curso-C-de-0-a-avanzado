#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

enum operacion {SUMAR,RESTAR,MULTIPLICAR,DIVIDIR};

int operar(int v1,int v2,enum operacion op)
{
    switch(op)
    {
        case SUMAR:return v1+v2;
        case RESTAR:return v1-v2;
        case MULTIPLICAR:return v1*v2;
        case DIVIDIR:return v1/v2;
        default:printf("El programa se detuvo por una operacion no valida");
            exit(1);
    }
}

int main()
{
    int valor1=10;
    int valor2=5;
    printf("La suma de %i y %i es %i\n",valor1,valor2,operar(valor1,valor2,SUMAR));
    printf("La resta de %i y %i es %i\n",valor1,valor2,operar(valor1,valor2,RESTAR));
    printf("La multiplicacion de %i y %i es %i\n",valor1,valor2,operar(valor1,valor2,MULTIPLICAR));
    printf("La division de %i y %i es %i\n",valor1,valor2,operar(valor1,valor2,DIVIDIR));
    getch();
    return 0;
}
