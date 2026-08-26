// Faça um programa para ler os valores dos lados (A, B e C) de um triângulo e
// verificar se podem formar um triângulo. Nessa verificação, considere que o
// comprimento de cada lado de um triângulo é menor do que a soma dos outros dois
// lados.

#include <stdio.h>

int main(){

    float a, b, c;
    int valido = 1;

    printf("Digite um lado do triangulo (A): ");
    scanf("%f", &a);
    printf("Digite um lado do triangulo (B): ");
    scanf("%f", &b);
    printf("Digite um lado do triangulo (C): ");
    scanf("%f", &c);
    
    if(a + b < c){
        valido--;
    }else if(b + c < a){
        valido--;
    }else if(a + c < b){
        valido--;
    }

    if(valido < 1){
        printf("O triangulo nao existe");
    }else{
        printf("O triangulo existe");
    }

return 0;
}