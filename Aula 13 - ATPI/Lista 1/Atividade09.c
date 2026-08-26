// Crie um programa que leia 10 números inteiros diferentes digitados pelo
// usuário e os armazene em um vetor, mantendo a ordem em que forem informados.
// A cada número digitado, o programa deve verificar se ele já existe no vetor; caso
// isso aconteça, deve informar que o valor é repetido e solicitar que o usuário digite
// outro número diferente. Esse processo deve continuar até que 10 valores distintos
// sejam armazenados. Ao final, o programa deve exibir na tela o vetor completo
// contendo apenas números sem repetição.

#include <stdio.h>

int main() {

    int numeros[10];

    printf("Voce devera digitar 10 numeros \n");

    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);

        if(i > 0){
            for(int j = 0; j < i; j++){
                if(numeros[i] == numeros[j]){
                    printf("O numero informado ja existe no vetor \n");
                    i--;
                }
            }
        }
    }

    printf("Sequencia de numeros sem repeticao: ");

    for(int i = 0; i < 10; i++){
        printf("%d ", numeros[i]);
    }

return 0;
}