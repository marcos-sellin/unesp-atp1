// Faça um programa que leia uma string e imprima o seu conteúdo.

#include <stdio.h>

int main(){

    char nome[100], endereco[50], telefone[20];
    int idade;

    printf("Digite o nome (completo): ");
    gets(nome);

    printf("Digite a idade (em anos): ");
    scanf("%d", &idade);
    getchar();

    printf("Digite o endereco (rua - numero): ");
    gets(endereco);

    printf("Digite o telefone ( (XX) XXXXX-XXXX ) : ");
    gets(telefone);

    printf("\nInformacoes: %s, %d, %s, %s", nome, idade, endereco, telefone);

return 0;
}