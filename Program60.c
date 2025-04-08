#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    float vec1[4];
    float vec2[4];
    float vec3[4];
    printf("Ingrese elementos del primer vector:\n");
    for (f=0; f<4; f++)
    {
        printf("Ingresar elemento:");
        scanf("%f",&vec1[f]);
    }
    printf("Ingrese elementos del segundo vector:\n");
    for (f=0; f<4; f++)
    {
        printf("Ingrese elemento:");
        scanf("%f",&vec2[f]);
    }
    for (f=0; f<4; f++)
    {
       vec3[f]=vec1[f]+vec2[f];
    }
    /*
    printf("Primera suma %0.2f \n",vec3[0]);
    printf("Segunda suma %0.2f \n",vec3[1]);
    printf("Tercera suma %0.2f \n",vec3[2]);
    printf("Cuarta suma %0.2f \n",vec3[3]);
    */
    for (f=0; f<4; f++)
    {
        printf("%0.2f ",vec3[f]);
    }
    getch();
    return 0;
}
