#include <stdio.h>

int main() {
    // Declaración del arreglo
    int arreglo[] = {10, 20, 30, 40, 50};
    //implementacionde puntero
    int *ptr;
    ptr= &arreglo[0];

    // Imprimir los elementos del arreglo
    for (int i = 0; i < 5; i++) {

        printf("arreglo[%d]: %d\t", i, arreglo[i]);
        //ptr= &arreglo[i];
        printf(" %d\n", *(ptr+i));
        
    }

    return 0;
}