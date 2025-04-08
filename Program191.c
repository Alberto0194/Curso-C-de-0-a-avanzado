#include<stdio.h>
#include<conio.h>

struct persona{
    char nombre[50];
    int edad;
};

int main()
{
    const int valor1=10;
    const short valor2=1;
    const long valor3=10000000;
    const struct persona per1={"Juan",34};
    const struct persona per2={"Juan",34};
    const char letra='A';
    const char titulo[7]="Inicio";
    printf("La constante entera tiene el valor:%i\n",valor1);
    printf("La constante short tiene el valor:%i\n",valor2);
    printf("La constante long tiene el valor:%i\n",valor3);
    printf("El nombre es:%s\n",per1.nombre);
    printf("Tiene de edad %i\n",per1.edad);
    getch();
    return 0;
}
