// Faça um programa para ler uma frase e ajustá-la de modo que a primeira letra
// de cada palavra esteja em maiúsculo e as demais em minúsculo. Exemplo:
// Digite uma frase: Hoje eu vou Programar muito
// Frase alterada: Hoje Eu Vou Programar Muito

#include <stdio.h>
#include <string.h>

int main() {
	
	char string[100];
	
	printf("Digite uma frase: ");
	fgets(string, 100, stdin);
	string[strlen(string) - 1] = '\0';
	
	if(string[0] >= 97 && string[0] <= 122){
		string[0] -= 32;
	}
	
	for(int i = 1; string[i] != '\0'; i++){
		if(string[i] == ' '){
			string[i + 1] -= 32;
		}
	}
	
	printf("Frase alterada: %s", string);
	
return 0;
}