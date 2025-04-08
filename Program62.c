#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    int orden;
    int vec[10];
    printf("Ingrese los valores de menor a mayor.\n");
    for (f=0;f<10;f++)
    {
        printf("Ingrese valor:");
        scanf("%i",&vec[f]);
    }
    orden =1;
    for (f=0;f<9;f++)
   {
       if (vec[f+1]<vec[f])
           {
            orden=0;
           }
   }
if (orden==1)
{
    printf("Elementos ordenados.\n");
}
else
{
    printf("No estan ordenados");
}


     getch();
     return 0;

}
 /*
     otra forma para decir que estan ordenados y no hacer la condicon if extensa
     utilizo una variable
     declaro calquiera en este ejemplo sera "orden"
     int orden;
     orden=1;
     despues de pedirle al usario que ingrese los elementos
     luego for(f=0;f<9;f++) y es <9 por que se haran 9 comparaciones entre los 10 elementos que se leeran
     luego if (vec[f+1]<vec[f]) aqui dice que el primer vec[f se le sumara una posicion +1 que sera el segundo elemeento que el ususrio ingresara por teclado
     si esta decicion se cumple dira que no esta ordenado y le decimos que orden==0
     otra condicion de if que si orden ==1 esto dira que nunca se ingresaron de forma desorganizada

     */
