//Faça um programa para ler duas strings e verificar se elas são iguais, ou seja,
// verificar se o conteúdo é o mesmo nas duas frases informadas.

#include <stdio.h>
#include <string.h>

int main() {
	
	int comparar;
	char string1[100], string2[100];
	
	printf("Digite uma palavra: ");
	fgets(string1, 100, stdin);
	string1[strlen(string1) - 1] = '\0';
	
	printf("Digite outra palavra: ");
	fgets(string2, 100, stdin);
	string2[strlen(string2) - 1] = '\0';
	
	comparar = strcmp(string1, string2);
	
	if(comparar == 0){
		printf("As palavras sao iguais");
	}else{
		printf("As palavras sao diferentes");
	}
	
return 0;
}