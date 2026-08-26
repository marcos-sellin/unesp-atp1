// Faça um programa para ler uma quantidade de palavras informadas pelo
// usuário e indicar qual seria a primeira e a última considerando a ordem alfabética.
// Exemplo:
// Informe quantas palavras irá digitar: 5
// Camelo
// Abacate
// Rato
// Computador
// Laranja
// Primeira: Abacate
// Última: Rato

#include <stdio.h>
#include <string.h>

int main() {
	
	int quantidade;
	char string[100], primeiro[100], ultimo[100];
	
	printf("Informe quantas palavras serao digitadas: ");
	scanf("%d", &quantidade);
	getchar();
	
	printf("Digite uma palavra: ");
	fgets(string, 100, stdin);
	string[strlen(string) - 1] = '\0';
	
	strcpy(primeiro, string);
	strcpy(ultimo, string);
	
	for(int i = 1; i < 5; i++){
		printf("Digite uma palavra: ");
		fgets(string, 100, stdin);
		string[strlen(string) - 1] = '\0';
	
		if(strcmp(string, primeiro) < 0){
			strcpy(primeiro, string);
		}else if(strcmp(string, ultimo) > 0){
			strcpy(ultimo, string);
		}
	}
	
	printf("Primeira: %s \n", primeiro);
	printf("Ultima: %s", ultimo);
	
return 0;
}