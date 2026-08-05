#include <stdio.h>

int main(){

    /*
    Incremento (++)
    Pré-incremento ++a
    Pós-incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decrementeo a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    numero1++;
    printf("Após incremento: %d\n", numero1);
    numero1--;
    printf("Após decremento: %d\n", numero1);
}