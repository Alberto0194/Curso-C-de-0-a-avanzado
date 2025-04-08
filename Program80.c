#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char usuario[31];
    char clave[31];
    printf("Ingrese su usuario:");
    gets(usuario);
    printf("Ingrese su clave:");
    gets(clave);
    if (strcmp(clave,"abc123")==0){
       printf("Correcto");
   }else{
       printf("Clave incorrecta");
   }
    getch();
    return 0;
}
