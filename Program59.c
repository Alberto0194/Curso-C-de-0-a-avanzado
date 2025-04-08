#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    float mayor1,mayor2;
    float suma;
    float v[8];
    for (f=0; f<8; f++)
    {
       printf("Ingrese valor:");
        scanf("%f",&v[f]);
    }
        suma=0;
        mayor1=0;
        mayor2=0;
        for (f=0; f<8; f++)
        {
            suma=suma+v[f];
        }
        for (f=0; f<8; f++)
        {
            if (v[f]>36)
            {
                mayor1=mayor1+v[f];
            }
        }
            for (f=0; f<8; f++)
            {
                if (v[f]>50)
                {
                    mayor2++;
                }
            }

        printf("Suma total de los valores es %f \n",suma);
        printf("Valor mayor a 36: ");
        printf("%0.2f\n",mayor1);
        printf("Valor mayor a 50: ");
        printf("%0.2f\n",mayor2);
        getch();
        return 0;
}
