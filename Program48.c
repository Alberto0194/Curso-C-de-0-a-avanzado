#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,f,puntos,sumar,sumar2,sumar3,sumar4;
    sumar=0;
    sumar2=0;
    sumar3=0;
    sumar4=0;
    printf("Cuanto puntos trabajara: ");
    scanf("%i", &puntos);
    for (f=1; f<=puntos; f++)
    {
        printf("Ingrese coordenada x: ");
        scanf("%i", &x);
        printf("Ingrese coordenada y: ");
        scanf("%i", &y);

        if (x>0 && y>0){
            printf("Primer cuadrante.\n");
            sumar++;
            printf("\n");

        }else if (x<0 && y>0){
            printf("Segundo cuadrante.\n");
            sumar2++;
            printf("\n");
        }else if (x<0 && y<0){
            printf("Tercer cuadrante.\n");
            sumar3++;
            printf("\n");
        }else if (x>0 && y<0){
            printf("Cuarto cuadrante.\n");
            sumar4++;
            printf("\n");
        }else if (x==0 || y==0){
            printf("Ingrese valor mayor a 0:\n");
        }
    }
    printf("Primer cuadrante, puntos: ");
    printf("%i", sumar);
    printf("\n");
    printf("Segundo cuadrante, puntos: ");
    printf("%i", sumar2);
    printf("\n");
    printf("Tercer cuadrante, puntos: ");
    printf("%i", sumar3);
    printf("\n");
    printf("Cuarto cuadrante, puntos: ");
    printf("%i", sumar4);
    getch();
    return 0;
}
