// Faça um programa que receba a idade e a cor dos olhos das pessoas (A
// – Azul, P – Preto, V – verde, C – castanho, O – outro). A quantidade de
// pessoas deverá ser lida do usuário. Indique ao final a quantidade de
// pessoas para cada cor de olhos.

#include <stdio.h>

int main(){

    int pessoas, idade;
    int  azul = 0, preto = 0, verde = 0, castanho = 0, outro = 0;
    char cor_olho;
    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &pessoas);

    while(pessoas >= 1){

        printf("\nInforme a idade da pessoa: ");
        scanf("%d", &idade);
        printf("A: azul \nP: preto \nV: verde \nC: castanho \nO: outro ");
        printf("\nInforme a cor dos olhos da pessoa: \n");
        scanf(" %c", &cor_olho);

        switch(cor_olho){
        case 'A':
        case 'a':
            azul++;
            break;
        case 'P':
        case 'p':
            preto++;
            break;
        case 'V':
        case 'v':
            verde++;
            break;
        case 'C':
        case 'c':
            castanho++;
            break;
        case 'O':
        case 'o':
            outro++;
            break;
        }
        pessoas--;
    }

    printf("\nPessoas por cor de olho: \n");
    printf("Azul: %d \n", azul);
    printf("Preto: %d \n", preto);
    printf("Verde: %d \n", verde);
    printf("Castanho: %d \n", castanho);
    printf("Outro: %d \n", outro);

return 0;
}