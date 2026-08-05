#include <stdio.h>

int main() {
    /*
    soma (+)
    subtração (-)
    multiplicação (*)
    divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("\nEntre com o primeiro numero:");
    scanf("%d", &numero1);

    printf("\nEntre com o segundo numero:");
    scanf("%d", &numero2);


    // operacao soma
    soma = numero1 + numero2;
    printf("\nSoma entre %d + %d = %d", numero1, numero2, soma);
    // operacao subtracao
    subtracao = numero1 - numero2;
    printf("\nSubtracao entre %d - %d = %d", numero1, numero2, subtracao);
    // operacao multiplicacao
    printf("\nMultiplicacao entre %d * %d = %d", numero1, numero2, multiplicacao);
    // operacao divisao
    divisao = numero1 / numero2;
    printf("\nDivisao entre %d / %d = %d", numero1, numero2, divisao);

}