#include<stdio.h>
#include<conio.h>

int main()
{
    int x,n,sueldos,mayor,menor,total;
    x=1;
    mayor=0;
    menor=0;
    total=0;
    printf("Cuantos empleados trabajan:");
    scanf("%i",&n);
    while (x<=n)
    {
      printf("Ingrese los sueldos:");
      scanf("%i",&sueldos);
      total=total+sueldos;
      x=x+1;

          if (sueldos>=100 && sueldos<=300)
          {
              menor=menor+1;


          }
          else
          {
              {
                  if (sueldos>300)
                  {
                      mayor=mayor+1;
                  }
              }

              }

    }
    printf("sueldos menores:");
    printf("%i",menor);
    printf("\n");
    printf("Sueldos mayores:");
    printf("%i",mayor);
    printf("\n");
    printf("Gastos de la empresa:");
    printf("%i",total);


    getch();
    return 0;
}
