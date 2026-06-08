// Ler valores inteiros positivos do usuário até que o número 0 seja
// fornecido. Ao final, apresentar a quantidade de números pares e ímpares.

#include <stdio.h>

int main(){

    int num, par = 0, impar = 0;

    for(int i = 1; i != 0; i = num){
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);

        if(num % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }

    printf("\nA quantidade de numeros pares e: %d \n", par);
    printf("A quantidade de numeros impares e: %d \n", impar);

return 0;
}