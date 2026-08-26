// Faça um programa para ler uma string e apresentar quantas letras ‘a’, ‘e’, ‘i’,
// ‘o’ e ‘u’ estão presentes na frase.

#include <stdio.h>

int main() {

    char palavra[50];
    int vogais[5];

    for(int i = 0; i < 5; i++){
        vogais[i] = 0;
    }

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);

    for(int i = 0; palavra[i] != '\0'; i++){
        switch(palavra[i]){
            case 'a': case 'A':
                vogais[0]++;
                break;
            case 'e': case 'E':
                vogais[1]++;
                break;
            case 'i': case 'I':
                vogais[2]++;
                break;
            case 'o': case 'O':
                vogais[3]++;
                break;
            case 'u': case 'U':
                vogais[4]++;
                break;
        }
    }

    printf("Quantidade de vogais (a, e, i, o, u): %d", vogais[0]);

    for(int i = 1; i < 5; i++){
        printf(", %d", vogais[i]);
    }

return 0;
}