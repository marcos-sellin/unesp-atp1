// Faça um programa que leia nome, idade, endereço e telefone de uma pessoa e,
// seguida, imprima essas informações em uma única linha. Utilize int para
// armazenar a idade. Nesse exercício, utilizar o getchar ao invés do fflush.

#include <stdio.h>
#include <string.h>

int main() {
	
	int idade;
	char nome[100], endereco[50], telefone [25];
	char dados[175];
	
	printf("Digite o nome: ");
	fgets(nome, 100, stdin);
	nome[strlen(nome) - 1] = '\0';
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	getchar();
	
	printf("Digite o endereco: ");
	fgets(endereco, 50, stdin);
	endereco[strlen(endereco) - 1] = '\0';
	
	printf("Digite o telefone: ");
	fgets(telefone, 25, stdin);
	telefone[strlen(telefone) - 1] = '\0';
	
	sprintf(dados, "%s, %d, %s, %s", nome, idade, endereco, telefone);
	
	printf("Dados do usuario: %s", dados);

return 0;
}