#include<stdio.h>
#include<conio.h>

int main()
{
    int v1,v2;
    float resultado;
    char operacion;
    printf("Ingrese primer valor:");
    scanf("%i",&v1);
    printf("Ingrese segundo valor:");
    scanf("%i",&v2);
    printf("Ingrese la operacin +,-,* o /: ");
    scanf(" %c",&operacion);
    switch (operacion){
    case '+':resultado=v1+v2;
                printf("La suma es %0.2f\n",resultado);
                break;
    case '-':resultado=v1-v2;
                printf("La resta es %0.2f\n",resultado);
                break;
    case '*':resultado=v1*v2;
                printf("La multiplicacion es %0.2f\n",resultado);
                break;
    case '/':resultado=(float)v1/v2;
                printf("La division es %0.2f\n",resultado);
                break;
    default :
                printf("Error");
                break;
    }
    getch();
    return 0;
}
