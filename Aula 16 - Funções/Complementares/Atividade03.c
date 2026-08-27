// Faça uma função para calcular o fatorial de um número e retornar o valor do
// fatorial.

#include <stdio.h>

int calcularFatorial(int numero) {

    int fatorial;

    if(numero <= 1){
        fatorial = 1;
    }else{
        for(int i = numero - 1; i > 1; i--){
            numero *= i;
        }
        fatorial = numero;
    }

return fatorial;
}

int main() {

    int numero, fatorial;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    fatorial = calcularFatorial(numero);

    printf("Fatorial do numero: %d", fatorial);

return 0;
}
