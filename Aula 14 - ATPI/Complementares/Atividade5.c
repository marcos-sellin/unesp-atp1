// Faça um programa para ler uma string e apresentar a quantidade de vogais e
// não vogais presentes na frase. Considere que o usuário informará a palavra com
// letras minúsculas.

#include <stdio.h>

int main() {

    char palavra[50];
    int letras[2];

    for(int i = 0; i < 2; i++){
        letras[i] = 0;
    }

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);

    for(int i = 0; palavra[i] != '\0'; i++){
        switch(palavra[i]){
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                letras[0]++;
                break;
            default:
                letras[1]++;
                break;
        }
    }

    letras[1]--;
    printf("Quantidade de letras (vogais, consoantes): %d, %d", letras[0], letras[1]);

return 0;
}