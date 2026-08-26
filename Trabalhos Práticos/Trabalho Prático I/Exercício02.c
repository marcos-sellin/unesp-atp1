// Faça um programa para ler uma string e exibir a frequência de cada caractere presente nela. Não é
// necessário utilizar funções. 
//
// Exemplo de entrada e saída:
//
// Digite uma palavra: papagaio
// p : 2 ocorrência(s)
// a : 3 ocorrência(s)
// g : 1 ocorrência(s)
// i : 1 ocorrência(s)
// o : 1 ocorrência(s)

#include <stdio.h>
#include <string.h>

int main (void) {

    char palavra[101];
    
    printf("Digite uma palavra: ");
    fgets(palavra, 101, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    int tam = strlen(palavra);
    int ja_contado[101] = {0}; 

    for (int i = 0; i < tam; i++) {
        if (ja_contado[i] == 1) {
            continue;
        }

        int freq = 1;

        for (int j = i + 1; j < tam; j++) {
            if (palavra[i] == palavra[j]) {
                freq++;
                ja_contado[j] = 1;
            }
        }

        printf("%c : %d ocorrencia(s)\n", palavra[i], freq);
    }

    return 0;
}