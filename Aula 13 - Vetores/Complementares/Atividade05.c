// Faça um programa que receba um vetor de números inteiros e o imprima de
// trás para frente. Basta exibir ao contrário, sem inverter os valores no vetor
// Exemplo:
// Tamanho do vetor: 4
// Vetor: [1, 2, 3, 4]
// Exibição invertida: [4, 3, 2, 1]

#include <stdio.h>

int main(){

    int n, checagem, contador = 0;

    printf("Informe a quantidade de valores: ");
    scanf("%d", &n);

    int numeros[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nInforme um numero para checagem: ");
    scanf("%d", &checagem);

    for(int i = 0; i < n; i++){
        if(numeros[i] == checagem){
            contador++;
        }
    }

    if(contador > 0){
        printf("O numero %d esta no vetor", checagem);
    }else{
        printf("O numero %d nao esta no vetor", checagem);
    }

return 0;
}