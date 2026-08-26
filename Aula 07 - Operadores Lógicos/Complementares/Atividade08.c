// Escreva um programa para ler três valores inteiros e apresenta-los em ordem
// crescente.

#include <stdio.h>

int main() {

    int a, b, c;

    printf("Informe um numero inteiro (1/3): ");
    scanf("%d", &a);
    printf("Informe um numero inteiro (2/3): ");
    scanf("%d", &b);
    printf("Informe um numero inteiro (3/3): ");
    scanf("%d", &c);

    if(a > b && a > c){
        if(b > c){
            printf("Ordem crescente: %d - %d - %d", a, b, c);
        }else{
            printf("Ordem crescente: %d - %d - %d", a, c, b);
        }
    }else if(b > a && b > c){
        if(a > c){
            printf("Ordem crescente: %d - %d - %d", b, a, c);
        }else{
            printf("Ordem crescente: %d - %d - %d", b, c, a);
        }
    }else{
        if(b > a){
            printf("Ordem crescente: %d - %d - %d", c, b, a);
        }else{
            printf("Ordem crescente: %d - %d - %d", c, a, b);
        }
    }

return 0;
}