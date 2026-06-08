// Ler o nome, idade e endereço de uma pessoa. Em seguida, exibir na tela.

#include <stdio.h>

int main(){

    char nome[40], endereco[40];
    int idade;

    printf("Informe o seu nome: ");
    fgets(nome, 40, stdin);

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("Informe seu endereco: ");
    fgets(endereco, 40, stdin);

    printf("\nNome: %s", nome);
    printf("Idade: %d", idade);
    printf("\nEndereco: %s", endereco);

return 0;
}