#include <stdio.h>

int main() {
    // Declaración del arreglo
    char vocales[] = {'a','e','i','o','u'};
    //implementacion de puntero
    char *ptr;
    ptr= &vocales[0];
    *(ptr+3)='x';

    // Imprimir los elementos del arreglo
    for (int i = 0; i < 5; i++) {

        printf(" %c", vocales[i] );
        printf(" %c\n", *(ptr+i));
        
    }

    return 0;
}