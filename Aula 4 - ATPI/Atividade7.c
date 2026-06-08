// Faça um programa para ler um número inteiro e imprimir a sua tabuada.

#include <stdio.h>

int main(){

    int inteiro, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);
    t1 = inteiro * 1;
    t2 = inteiro * 2;
    t3 = inteiro * 3;
    t4 = inteiro * 4;
    t5 = inteiro * 5;
    t6 = inteiro * 6;
    t7 = inteiro * 7;
    t8 = inteiro * 8;
    t9 = inteiro * 9;
    t10 = inteiro * 10;
    printf("A tabuada do numero de 1 a 10 e:\n ");
    printf("%d x 1 = %d \n", inteiro, t1);
    printf("%d x 2 = %d \n", inteiro, t2);
    printf("%d x 3 = %d \n", inteiro, t3);
    printf("%d x 4 = %d \n", inteiro, t4);
    printf("%d x 5 = %d \n", inteiro, t5);
    printf("%d x 6 = %d \n", inteiro, t6);
    printf("%d x 7 = %d \n", inteiro, t7);
    printf("%d x 8 = %d \n", inteiro, t8);
    printf("%d x 9 = %d \n", inteiro, t9);
    printf("%d x 10 = %d \n", inteiro, t10);

return 0;
}