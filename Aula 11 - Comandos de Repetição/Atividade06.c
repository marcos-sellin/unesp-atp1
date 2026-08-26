// Em Matemática, o número harmônico designado por H(n) define-se como
// sendo a soma da série harmônica: H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
// Faça um programa que leia um valor n inteiro e positivo e apresente o valor de
// H(n).

#include <stdio.h>

int main(){

    int numero;
    float harmonico = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        harmonico += 1.0 / i;
    }

    printf("O numero harmonico e: %f \n", harmonico);

return 0;
}