// A concatenação de strings é uma operação muito comum e que une o conteúdo
// de duas strings. Por exemplo: a string “bom” concatenada com a string “dia”
// resulta na string “bomdia”. Faça um programa que leia duas strings e efetue a
// concatenação da segunda string na primeira. Por exemplo: string1 tem o conteúdo
// “bom” e a string2 tem o conteúdo “dia”; após a concatenação a string1 terá o
// conteúdo “bomdia”.

#include <stdio.h>

int main() {

    int j = 0, tamanho1 = 0, tamanho2 = 0;
    char string1[100], string2[50];

    printf("Digite uma palavra: ");
    fgets(string1, 100, stdin);

    printf("Digite outra palavra: ");
    fgets(string2, 50, stdin);

    for (int i = 0; string1[i] != '\0'; i++) {
        if (string1[i] == '\n') {
            string1[i] = '\0';
            break;
        }
        tamanho1++;
    }

    for(int i = 0; string2[i] != '\0'; i++){
        tamanho2++;
    }

    for(int i = tamanho1; i < tamanho1 + tamanho2; i++){
        string1[i] = string2[j];
        j++;
    }

    string1[tamanho1 + tamanho2 - 1] = '\0';
    printf("Palavras concatenadas: %s", string1);

return 0;
}