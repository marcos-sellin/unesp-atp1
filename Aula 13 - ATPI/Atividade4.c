// Faça um programa para ler N números e armazena-los em um vetor. O valor
// de N é fornecido pelo usuário. Em seguida, imprima o vetor na ordem inversa.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int randomico;
    srand(time(NULL));

    printf("aleatorio \t\t 0--9\n");

    for(int i = 0; i < 20; i++){
        randomico = rand();
        printf("%d \t\t\t %d\n", randomico, randomico%10);
    }

return 0;
}