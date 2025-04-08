#include<stdio.h>
#include<conio.h>

int main()
{
    int x,n,par,impar;
    x=1;
    par=0;
    impar=0;
    printf("Operaciones");
    printf("\n");
    while (x<=3)
    {
        printf("Valor:");
        scanf("%i", &n);
        x=x+1;
        {
            if ((n%2)==0)

   {

       par=par+1;

   }
   else
   {
       if ((n%2)!=0)
       {

        impar=impar+1;

       }
    }

       printf("\n");
   }
    }
       printf("Numeros pares:");
       printf("%i", par);
       printf("\n");
       printf("Numero impares:");
       printf("%i", impar);

       getch();
       return 0;
   }
