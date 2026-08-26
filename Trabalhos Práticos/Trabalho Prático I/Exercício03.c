// Faça um programa para exibir uma substring de uma string. Para isso, o programa deve receber
// uma string de entrada, uma posição inicial e uma posição final. Os caracteres compreendidos entre
// essas posições devem ser copiados da string original para uma nova string. Observe que é necessário
// transferir os caracteres de uma string para outra, onde a substring será armazenada. Ao final, o
// programa deve exibir o conteúdo da substring armazenada.
//
// Exemplo de entrada e saída:
//
// Digite uma palavra: paralelepipedo
// Digite a posição inicial: 4
// Digite a posição final: 9
// Substring: lelepi

#include <stdio.h>

int main (void) {

    char palavra[101];
    char substring[101];
    int pos_inicio, pos_fim;
    int i, j = 0;

    printf("Digite uma palavra: ");
    scanf("%100s", palavra);

    printf("Digite a posicao inicial: ");
    scanf("%d", &pos_inicio);
    printf("Digite a posicao final: ");
    scanf("%d", &pos_fim);

    for (i = pos_inicio; i <= pos_fim; i++) {
        substring[j] = palavra[i];
        j++;
    }

    substring[j] = '\0';

    printf("Substring: %s\n", substring);

    return 0;
}