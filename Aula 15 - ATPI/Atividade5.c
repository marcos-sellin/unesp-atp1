// A concatenação de strings é uma operação muito comum e que une o conteúdo
// de duas strings. Por exemplo: a string “bom” concatenada com a string “dia”
// resulta na string “bomdia”. Faça um programa que leia duas strings e efetue a
// concatenação da segunda string na primeira. Por exemplo: string1 tem o conteúdo
// “bom” e a string2 tem o conteúdo “dia”; após a concatenação a string1 terá o
// conteúdo “bomdia”.

#include <stdio.h>
#include <string.h>

int main() {
	
	char string1[100], string2[50];
	
	printf("Digite uma palavra: ");
	fgets(string1, 100, stdin);
	string1[strlen(string1) - 1] = '\0';
	
	printf("Digite outra palavra: ");
	fgets(string2, 100, stdin);
	string2[strlen(string2) - 1] = '\0';
	
	strcat(string1, string2);
	
	printf("Palavras concatenadas: %s", string1);
	
return 0;
}