// Ler dois números e apresentar em ordem
// crescente. Se forem iguais, indicar que são iguais

#include <stdio.h>

int main(){

    float numero1, numero2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    if(numero1 == numero2){
        printf("Os numeros sao iguais");
    }else{
        if(numero1 > numero2){
            printf("Em ordem crescente: %.1f -> %.1f", numero2, numero1);
        }else{
            printf("Em ordem crescente: %.1f -> %.1f", numero1, numero2);
        }
    }

return 0;
}