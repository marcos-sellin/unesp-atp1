// Faça um programa para ler um vetor de números inteiros e transferir os valores
// para um novo vetor. Em seguida, exiba os dois vetores. Exemplo:
// Tamanho do vetor: 4
// Vetor original (vetor1): [5, 8, 12, 3]
// Vetor copiado (vetor2): [5, 8, 12, 3]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int randomico, n;
    srand(time(NULL));

    printf("Digite a quantidade de vezes que o dado sera lancado: ");
    scanf("%d", &n);

    int numeros[6];

    for(int i = 0; i < 6; i++){
        numeros[i] = 0;
    }

    for(int i = 0; i < n; i++){
        randomico = (rand() % 6) + 1;
        printf("\nLancamento %d: \t %d", i + 1, randomico);
        switch(randomico){
        case 1:
            numeros[0]++;
            break;
        case 2:
            numeros[1]++;
            break;
        case 3:
            numeros[2]++;
            break;
        case 4:
            numeros[3]++;
            break;
        case 5:
            numeros[4]++;
            break;
        case 6:
            numeros[5]++;
            break;
        }
    }

    printf("\n\nQuantidade de vezes que cada face ocorre: \n");

    for(int i = 0; i < 6; i++){
        printf("\nFace %d: %d", i + 1, numeros[i]);
    }

return 0;
}