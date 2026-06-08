// Ler dois números e verificar se são iguais ou diferentes

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
        printf("Os numeros sao diferentes");
    }

return 0;
}