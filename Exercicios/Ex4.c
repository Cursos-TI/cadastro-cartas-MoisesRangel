#include <stdio.h>

int main (){
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Usando o tipo int a divisao por inteiros fica truncada
    printf("Usando o tipo int:\n\n");
    printf("Soma: %d\n", soma);
    printf("Diferenca: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);

    float x = 10;
    float y = 3;
    float soma2 = x + y;
    float diferenca2 = x - y;
    float produto2 = x * y;
    float quociente2 = x / y; // Usando o tipo float a divisao fica mais próximo do valor real

    printf("\nUsando o tipo float:\n\n");
    printf("Soma: %.2f\n", soma2);
    printf("Diferenca: %.2f\n", diferenca2);
    printf("Produto: %.2f\n", produto2);
    printf("Quociente: %.2f", quociente2);
}