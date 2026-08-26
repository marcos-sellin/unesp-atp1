// É muito comum o uso de arquivos texto para armazenamento de dados no
// formado CSV (comma-separated values)—em português, valores separados por
// vírgula. Faça um programa para ler uma frase que contenha números separados
// por vírgula. Em seguida, exiba a soma desses números. Considere somente
// números inteiros. Dica: utilizar a função atoi para converter os números para
// inteiro. Exemplo:
// Frase: 10, 15, 1, 5, 4
// Soma: 35

#include <stdio.h>
#include <string.h>

int main() {
	
	int soma = 0, i = 0;
	char numeros[100],  transferir[100];
	
	printf("Digite uma sequencia de numeros (x, y, z, ...): ");
	fgets(numeros, 100, stdin);
	numeros[strlen(numeros) - 1] = '\0';
	
	for(int j = 0; numeros[j] != '\0'; j++){
		if(numeros[j] == ','){
			transferir[i] = '\0';
			soma += atoi(transferir);
			i = 0;
		}else{
			transferir[i] = numeros[j];
			i++;
		}
	}
	
	transferir[i] = '\0';
	soma += atoi(transferir);
	
	printf("Soma dos numeros: %d", soma);
	
return 0;
}