#include <stdio.h>

int main (){
    int x;
    int y;


    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("Digite um numero: ");
    scanf(" %d", &y);

    if (x % 2 == 0){
        printf("%d é par", x);
    }else if (y % 2 == 0){
        printf("%d é par", y);
    }else if (x % 2 != 0){
        printf("%d é impar", x);
    }else if (y % 2 != 0){
        printf("%d é impar", y);
    }else {
        printf("Algum erro aconteceu");
    }
}