#include<stdio.h>

int main (){

    int a = 20;
    int b = 20;
    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("\na > b: %d", a>b);
    printf("\na < b: %d", a<b);
    printf("\na => b: %d", a>=b);
    printf("\na <= b: %d", a<=b);
    printf("\na == b: %d", a==b);
    printf("\na != b: %d", a!=b);

    printf("x >= c: %d\n", x>=c);
    printf("O valor ASCII de %c é %d: \n", c, c);
}