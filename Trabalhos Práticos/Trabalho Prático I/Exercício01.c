// Faça um programa para codificar uma palavra armazenada em uma string. Para isso, o programa
// deve adicionar um inteiro k a cada caractere da palavra, ou seja, ao código ASCII de cada caractere.
// Esse valor k deve ser fornecido pelo usuário e pode assumir valores entre 1 e 10. O programa também
// deve decodificar uma palavra codificada, recebendo como entrada a string codificada e o valor k.
//
// Exemplo de entrada e saída:
//
// Digite uma palavra: abacate
// Valor k: 5
// Palavra codificada: fgfhfyj
//
// Digite uma palavra codificada: fgfhfyj
// Valor k: 5
// Palavra decodificada: abacate

#include <stdio.h>
#include <string.h>

void codificador (char p[], char c[], int n) {
    int i;
    for(i = 0; p[i] != '\0'; i++){
        c[i] = p[i] + n;
    }
    c[i] = '\0';
}

void decodificador (char c[], char p[], int n) {
    int i;
    for(i = 0; c[i] != '\0'; i++){
        p[i] = c[i] - n;
    }
    p[i] = '\0';
}

int main (void) {

    int k, clear;
    char palavra[101], codigo[101];

    // --- CODIFICAR ---
    printf("Digite uma palavra: ");
    fgets(palavra, 101, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    printf("Valor k: ");
    scanf("%d", &k);
    while((clear = getchar()) != '\n' && clear != EOF);

    codificador(palavra, codigo, k);
    printf("Palavra codificada: %s\n\n", codigo);


    // --- DECODIFICAR ---
    printf("Digite uma palavra codificada: ");
    fgets(codigo, 101, stdin);
    codigo[strcspn(codigo, "\n")] = '\0';

    printf("Valor k: ");
    scanf("%d", &k);
    while((clear = getchar()) != '\n' && clear != EOF);

    decodificador(codigo, palavra, k);
    printf("Palavra decodificada: %s\n", palavra);

    return 0;
    
}