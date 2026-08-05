#include <stdio.h>

int main (){

    int a = 10;
    float b = 3.5;
    float resultado = a + b; //'a' é convertido implicitamente para float
    printf("Resultado: %.2f\n", resultado);

    int x = 10;
    int y = 3;
    float quociente = (float) x / y; // o resultado de x/y é convertido explicitamente para float
    printf("Quociente: %.2f", quociente); 
}