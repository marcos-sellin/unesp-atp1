// Faça um programa para ler uma string e transferir o conteúdo para uma outra
// varíavel string (char []).

#include <stdio.h>
#include <string.h>

int main() {
	
	char original[100], copia[100];
	
	printf("Digite uma palavra: ");
	fgets(original, 100, stdin);
	original[strlen(original) - 1] = '\0';
	
	strcpy(copia, original);
	
	printf("Palavra copiada: %s", copia);
	
return 0;
}