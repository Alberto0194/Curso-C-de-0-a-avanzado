#include<stdio.h>
#include<conio.h>
#include<string.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

void imprimir(struct producto p)
{
    printf("Codigo del producto:%i\n",p.codigo);
    printf("Descripcion:%s\n",p.descripcion);
    printf("Precio:%0.2f",p.precio);
}

int main()
{
    struct producto pro;//ingresar los datos mas rapido seria colocarlos en orden en como lo tenemos en imprimir seria struct producto pro=(1,"naranjas",12.50); y se ingresarian los datos
    pro.codigo=1;  //de esta forma ingresamos los datos a los campos mediante pro, recordando que int o flat lo podemos hacer mediante = y tipos char mediante strcpy
    strcpy(pro.descripcion,"naranjas");
    pro.precio=1.50;
    imprimir(pro);
    getch();
    return 0;
}
