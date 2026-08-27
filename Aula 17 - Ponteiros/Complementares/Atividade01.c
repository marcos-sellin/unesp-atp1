// Faça uma função para calcular o fatorial de um número e retornar por parâmetro
// o valor do fatorial. Por exemplo: void fatorial (int n, int *fat);

#include <stdio.h>

void fatorial(int n, int *fat){

    if(n <= 1){
        *fat = 1;
    }else{
        *fat = n;

        for(int i = n - 1; i > 1; i--){
        *fat *= i;
        }
    }

}

int main() {

    int n, fat;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    fatorial(n, &fat);

    printf("Fatorial: %d", fat);

return 0;
}