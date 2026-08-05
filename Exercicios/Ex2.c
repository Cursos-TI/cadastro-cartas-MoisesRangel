#include <stdio.h>

int main(){

    /*
    atribuição simples (=)
    atribuição com Soma (+=)
    atribuição com Subtração (-=)
    atribuição com multiplicação (*=)
    atribuição com divisão (/=)
    */

    int numero;
    int resultado;

    printf("\nDigite um numero:");
    scanf("%d", &numero);

    resultado = numero;
    printf("Numero digitado: %d\n", numero);

    resultado += numero;
    printf("Soma: %d\n", resultado);

    resultado -= numero;
    printf("Subtracao: %d\n", resultado);

    resultado *= numero;
    printf("Multiplicacao: %d\n", resultado);

    resultado /= numero;
    printf("Divisao: %d\n", resultado);


}