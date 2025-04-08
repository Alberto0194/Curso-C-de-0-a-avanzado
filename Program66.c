#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2;
    char operador;

    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("\n");

    printf("Ingrese cual operador utilizara: +,-,*,/,: ");
    scanf(" %c", &operador);

    if (operador=='+'){
        printf("Resultado %i\n",num1+num2);
    }else if (operador=='-'){
        printf("Resultado %i\n",num1-num2);
    }else if (operador=='*'){
        printf("Resultado %i\n",num1*num2);

    }else if (operador=='/' && num2!=0){
        printf("Resultado %i\n",num1/num2);

    }else{
        printf("Error, no se puede dividir entre 2");
    }


    getch();
    return 0;
}
