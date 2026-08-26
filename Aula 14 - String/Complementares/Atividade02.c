// Faça um programa que leia uma string e imprima o seu conteúdo.

#include <stdio.h>

int main(){

    char nome[100], endereco[50], telefone[20];
    int idade;

    printf("Digite o nome (completo): ");
    fgets(nome, 100, stdin);
    
    for(int i = 0; ; i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
            break;
        }
    }

    printf("Digite a idade (em anos): ");
    scanf("%d", &idade);
    getchar();

    printf("Digite o endereco (rua - numero): ");
    fgets(endereco, 50, stdin);

    for(int i = 0; ; i++){
        if(endereco[i] == '\n'){
            endereco[i] = '\0';
            break;
        }
    }

    printf("Digite o telefone ( (XX) XXXXX-XXXX ) : ");
    fgets(telefone, 20, stdin);

    for(int i = 0; ; i++){
        if(telefone[i] == '\n'){
            telefone[i] = '\0';
            break;
        }
    }

    printf("\nInformacoes: %s, %d, %s, %s", nome, idade, endereco, telefone);

return 0;
}