// Ler um número e apresentar o seu fatorial. Lembrando que:
// n! = 1 x 2 x 3 x 4 x ... x n-1 x n
// 0! = 1
// Exemplo: 5! = 1 x 2 x 3 x 4 x 5 =120

#include <stdio.h>

int main(){

    long long int num , i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%lld", &num);
    i = num - 1;

    while(i >= 1){
    num *= i;
    i--;
    }

    if(num == 0){
        num++;
    }

    printf("\nO fatorial do numero e: %lld", num);

return 0;
}