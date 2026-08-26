// Faça um programa para ler duas strings e verificar se elas são iguais, ou seja,
// verificar se o conteúdo é o mesmo nas duas frases informadas.

#include <stdio.h>

int main() {

    char string1[100], string2[100];
    int tamanho1 = 0, tamanho2 = 0, diferente = 0;

    printf("Digite uma palavra: ");
    fgets(string1, 100, stdin);

    printf("Digite outra palavra: ");
    fgets(string2, 100, stdin);

    for(int i = 0; string1[i] != '\0'; i++){
        tamanho1++;
    }

    for(int i = 0; string2[i] != '\0'; i++){
        tamanho2++;
    }

    if(tamanho1 == tamanho2){
        for(int i = 0; string1[i] != '\0'; i++){
            if(string1[i] != string2[i]){
                diferente++;
            }
        }
    }else{
        diferente++;
    }

    if(diferente > 0){
        printf("As palavras sao diferentes");
    }else{
        printf("As palavras sao iguais");
    }

return 0;
}