// Faça uma função denominada maiusculo para receber uma string e converter
// seus caracteres para maiúsculo. Exemplo:
// Digite frase: Papagaio
// Frase alterada: PAPAGAIO

#include <stdio.h>
#include <string.h>

void maiusculo(char string[]) {

    for(int i = 0; i < strlen(string); i++){
        if(string[i] >= 97 && string[i] <= 122){
            string[i] -= 32;
        }
    }

}

int main() {

    char string[100];

    printf("Digite uma palavra: ");
    fgets(string, 100, stdin);
    string[strlen(string) - 1] = '\0';

    maiusculo(string);

    printf("Palavra modificada: %s", string);

return 0;
}