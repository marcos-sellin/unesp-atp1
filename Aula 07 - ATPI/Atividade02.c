// Faça um programa para verificar se um determinado
// número inteiro é divisível por 3 ou 5, mas não
// simultaneamente pelos dois

#include <stdio.h>

int main(){

    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero % 3 == 0 && numero % 5 == 0){
            printf("O numero e divisivel por 3 e 5");
    }else{
    if(numero % 3 == 0){
        printf("O numero e divisivel por 3");
    }else{
        if(numero % 5 == 0){
            printf("O numero e divisivel por 5");
        }else{
            printf("O numero nao e divisivel por 3 nem por 5");
        }
    }
    }
return 0;
}