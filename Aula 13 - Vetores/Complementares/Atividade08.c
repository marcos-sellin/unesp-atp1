// Faça um programa que leia um vetor de números inteiros. Depois, calcule a
// média dos valores armazenados. Em seguida, substitua o valor original de cada
// elemento subtraindo a média. Por fim, exiba a média calculada e os novos valores
// resultantes. Exemplo:
// Tamanho do vetor: 5
// Vetor original: 8 6 7 5 9
// Média: 7.00
// Novo vetor: 1 -1 0 -2 2

#include <stdio.h>

int main(){

    int n, contador;

    printf("Informe a quantidade de valores que serao digitados: ");
    scanf("%d", &n);

    int numeros[n], primos[n];

    for(int i = 0; i < n; i++){
        contador = 0;
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numeros[i]);

        if(numeros[i] <= 1){
            primos[i] = 0;
            continue;
        }

        for(int j = 1; j <= numeros[i]; j++){
            if(numeros[i] % j == 0){
                contador++;
            }
        }

        if(contador == 2){
            primos[i] = 1;
        }else{
            primos[i] = 0;
        }
    }

    printf("\nNumeros primos: \t Posicao no vetor: \n");

    for(int i = 0; i < n; i++){
        if(primos[i] == 1){
            printf("       %d \t                 %d \n", numeros[i], i);
        }
    }

return 0;
}