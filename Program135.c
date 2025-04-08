#include<stdio.h>
#include<conio.h>

struct punto{
    int x;
    int y;
};

struct punto cargar()
{
    struct punto cateto;
    printf("Ingrese valor de X:");
    scanf("%i", &cateto.x);
    printf("Ingrese valor de Y:");
    scanf("%i", &cateto.y);
    return cateto;
};

void imprimir(struct punto cateto)
{
    if(cateto.x>0 && cateto.y>0)
    {
        printf("Pertenece al primer cuadrante.\n");
    }
    else
    {
        if(cateto.x<0 && cateto.y>0)
        {
            printf("Pertenece al segundo cuadrante.\n");
        }
        else
        {
            if(cateto.x<0 && cateto.y<0)
            {
                printf("Pertenece al tercer cuadrante.\n");
            }
            else
            {
                printf("Pertenece al cuarto cuadrante.\n");
            }
        }
    }
}

int main()
{
    struct punto cateto1,cateto2,cateto3;
    cateto1=cargar();
    cateto2=cargar();
    cateto3=cargar();
    imprimir(cateto1);
    imprimir(cateto2);
    imprimir(cateto3);
    getch();
    return 0;
}
