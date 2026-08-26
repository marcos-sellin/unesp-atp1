// Faça um programa para gerar N números aleatórios entre 1 e 6, os quais
// representam os lançamentos de um dado não viciado. Em seguida, o seu programa
// deverá apresentar um relatório sobre a quantidade de ocorrências de cada face do
// dado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int N, aleatorio, minimo = 1, maximo = 6;
    srand(time(NULL));

    printf("Digite quantas vezes o dado sera lancado: ");
    scanf("%d", &N);

    int lancamentos[6], comparador[6];

    for(int i = 0; i < 6; i++){
        comparador[i] = i + 1;
        lancamentos[i] = 0;
    }

    for(int i = 0; i < N; i++){
        aleatorio = rand() % (maximo - minimo + 1) + minimo;

        for(int j = 0; j < 6; j++){
            if(aleatorio == comparador[j]){
                lancamentos[j]++;
            }
        }
    }

    printf("\nQuantidade de ocorrencias de cada face do dado: \n");

    for(int i = 0; i < 6; i++){
        printf("Face %d: %d \n", i + 1, lancamentos[i]);
    }

return 0;
}