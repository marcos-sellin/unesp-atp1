// Faça uma programa para ler uma palavra a exibi-la com todos os caracteres em
// maiúsculo. Note que alguns caracteres podem estar em maiúsculo, quando
// digitada pelo usuário. Exemplo:
// Digite frase: Papagaio
// Frase alterada: PAPAGAIO

#include <stdio.h>
#include <string.h>

int main() {
	
	char string[100];
	
	printf("Digite uma palavra: ");
	fgets(string, 100, stdin);
	string[strlen(string) - 1] = '\0';
	
	for(int i = 0; string[i] != '\0'; i++){
		if(string[i] >= 97 && string[i] <= 122){
			string[i] -= 32;
		}
	}
	
	printf("Palavra alterada: %s", string);
	
return 0;
}