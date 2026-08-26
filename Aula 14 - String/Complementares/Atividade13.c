// Palíndromo é uma frase ou palavra que pode ser lida, indiferentemente, da
// esquerda para a direita ou vice-versa. Faça um programa para ler uma string e
// verificar se o conteúdo é palíndromo. Exemplos: osso, ovo, reter, radar e salas.

#include <stdio.h>

int main() {

    int tamanho = 0, j = 0, palindromo = 0;
    char string[100];

    printf("Digite uma palavra: ");
    fgets(string, 100, stdin);

    for(int i = 0; string[i] != '\0'; i++){
        tamanho++;
    }

    tamanho--;
    string[tamanho] = '\0';

    for(j = 0; j < tamanho / 2; j++){
        if(string[j] != string[tamanho - 1 - j]){
            palindromo++;
            break;
        }
    }

    if(palindromo > 0){
        printf("A palavra nao e um palindromo");
    }else{
        printf("A palavra e um palindromo");
    }

return 0;
}