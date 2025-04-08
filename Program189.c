#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void ingresarClave()
{
    char clave[50];
    int intentos=0;
    do{
            if(intentos==3)
            {
                exit(1);//se le introdujo un 1 para decir que cuando el return devuelva 1 el programa esta mal 0 es el return final del programa que indica que esta bien
            }
            printf("Ingrese clave:");
            gets(clave);
            intentos++;

    }while(strcmp(clave,"123abc")!=0);
}

int main()
{
    ingresarClave();
    printf("Bienvenido\n");
    getch();
    return 0;
}
