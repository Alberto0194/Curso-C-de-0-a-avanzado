#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char palabra[50];
    int vocales=0;
    int consonantes=0;
    printf("Ingrese palabra en minuscula:");
    gets(palabra);
    for(int f=0;f<strlen(palabra);f++)
    {
        switch (palabra[f]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': vocales++;
            break;
        default: consonantes++;
            break;
        }
    }
    printf("Cantidad de vocales de la palabra %s es:%i\n",palabra,vocales);
    printf("Cantidad de consonantes de la palabra %s es:%i",palabra,consonantes);
    getch();
    return 0;
}
