#include <stdio.h>

void puntero(int* ptr)
{
    int r = 20;  // Cambiar el valor de r
    printf("La dirección de memoria de r es: %p\n", (void*)&r);  // Imprimir la dirección de memoria de r
    *ptr = r;  // Asignar el valor de r a la dirección de memoria de a (modificar a)
}

int main() {
    int a = 10;

    // Imprimir la dirección de memoria de a antes de la llamada a puntero
    printf("La dirección de memoria de a es: %p\n", (void*)&a);

    puntero(&a);  // Llamar a la función pasando la dirección de a
    printf("El valor nuevo de a es: %d\n", a);  // Imprimir el valor de a

    return 0;
}
