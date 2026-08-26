// Faça um programa para ler uma sequência de caracteres digitados em uma
// palavra, sem espaços, e coloca-los em ordem alfabética. Exemplo:
// Digite uma palavra (sem espaços): github
// Caracteres em ordem alfabética: bghitu

#include <stdio.h>
#include <string.h>

int main() {

    char temp, string[100];

    printf("Digite uma palavra (sem espacos): ");
    fgets(string, 100, stdin);
    string[strlen(string) - 1] = '\0';

    int tamanho = strlen(string);

    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho - 1; j++){
            if(string[j] > string[j + 1]){
                temp = string[j];
                string[j] = string[j + 1];
                string[j + 1] = temp;   
            }
        }
    }

    printf("Caracteres em ordem alfabetica: %s", string);

return 0;
}