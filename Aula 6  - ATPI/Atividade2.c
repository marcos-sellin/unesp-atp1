// Verificar se um número é positivo ou negativo

#include <stdio.h>

int main(){

    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if(numero > 0){
        printf("O numero e positivo");
    }else{
        if(numero != 0){
            printf("O numero e negativo");
        }else{
            printf("O numero e zero");
        }}

return 0;
}