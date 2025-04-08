#include<stdio.h>
#include<conio.h>

int main()
{
    /*
    char c1='A';
    char c2='B';
    char *pc;
    pc=&c1;
    printf("%c\n",c1);//A
    *pc='a';
    printf("%c\n",c1);//a
    c1='Z';
    printf("%c\n",*pc);//Z
    pc=&c2;
    printf("%c\n",*pc);//B
    getch();
    return 0;*/

    /*
    int f;
    int *pe;
    pe=&f;
    for(*pe=1;*pe<=10;*pe=*pe+1)
    {
        printf("%i -",f);//se imprimira los numeros del 1 al 10
    }
    getch();
    return 0;*/

    float z1,z2;
    float *pf;
    pf=&z1;
    *pf=10.2;
    pf=&z2;
    *pf=20.90;
    printf("%0.2f y  %0.2f",z1,z2);//10.2 y 20.90
    getch();
    return 0;

}
