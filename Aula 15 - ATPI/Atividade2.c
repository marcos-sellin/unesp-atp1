// Faça um programa para ler uma string e apresentar o seu tamanho (quantidade
// caracteres da frase).

#include <stdio.h>
#include <string.h>

int main() {

	int tamanho;
	char string[100];
	
	printf("Digite uma palavra: ");
	fgets(string, 100, stdin);
	string[strlen(string) - 1] = '\0';

	tamanho = strlen(string);
	
	printf("Tamanho da palavra: %d", tamanho);	
return 0;
}