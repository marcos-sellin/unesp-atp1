// Faça um programa para ler um valor inteiro e positivo N. Em seguida, deve-se
// exibir todos os números de 3 a N que são múltiplos de 3 ou 5.

#include <stdio.h>

int main(){

    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("\nLISTA DOS MULTIPLOS DE 3 OU 5 NO INTERVALO [3, %d]: \n", n);

    for(int i = 3; i <= n; i++){

        if(i % 3 == 0){
            printf("\nNumero 1: %d (Multiplo de 3)", i);
        }else if(i % 5 == 0){
            printf("\nNumero 1: %d (Multiplo de 5)", i);
        }
    }

return 0;
}