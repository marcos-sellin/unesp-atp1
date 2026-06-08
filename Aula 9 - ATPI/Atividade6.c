// Ler valores inteiros positivos do usuário até que o número 0 seja
// fornecido. Ao final, apresentar a quantidade de números pares e ímpares.

#include <stdio.h>

int main(){

    int par = 0, impar = 0, num, i = 1;

    while(i != 0){

        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);

        if(num % 2 == 0){
            par++;
        }else{
            impar++;
        }

        if(num == 0){
            i = 0;
        }
    }

    printf("\nQuantidade de numeros pares: %d \n", par);
    printf("Quantidade de numero impares: %d", impar);

return 0;
}