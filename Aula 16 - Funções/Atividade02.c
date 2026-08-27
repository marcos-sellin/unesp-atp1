// Faça uma função para receber uma string e um caractere.
// A função deverá substituir o caractere por ‘_’

#include <stdio.h>
#include <string.h>

void alterarString(char letra, char string[]) {

    for(int i = 0; i < strlen(string); i++){
        if(string[i] == letra){
            string[i] = '_';
        }
    }
    
}

int main() {

    char letra, string[100];

    printf("Digite uma palavra: ");
    fgets(string, 100, stdin);
    string[strlen(string) - 1] = '\0';

    printf("Digite uma letra para ser alterada: ");
    scanf("%c", &letra);

    alterarString(letra, string);

    printf("Palavra alterada: %s", string);

return 0;
}