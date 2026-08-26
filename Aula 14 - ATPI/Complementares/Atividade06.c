// Faça um programa que receba uma string e substitua as vogais pelo caractere
// ‘_’. Em seguida, exibe-se o conteúdo da string.

#include <stdio.h>

int main() {

    char palavra[50];

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);

    printf("Nova palavra: ");
    
    for(int i = 0; palavra[i] != '\0'; i++){
        switch(palavra[i]){
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                palavra[i] = '_';
                break;
        }
        printf("%c", palavra[i]);
    }

return 0;
}