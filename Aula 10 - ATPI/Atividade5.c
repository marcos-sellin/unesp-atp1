// Ler um número e apresentar o seu fatorial. Lembrando que:
// n! = 1 x 2 x 3 x 4 x ... x n-1 x n
// 0! = 1
// Exemplo: 5! = 1 x 2 x 3 x 4 x 5 =120

#include <stdio.h>

int main(){

    int num, fatorial = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);

    for(int i = num - 1; i > 0; i--){
        num *= i;
    }

    if(num == 0){
        printf("\nO fatorial do numero e: 1 \n");
    }else{
        printf("\nO fatorial do numero e: %d \n", num);
    }

return 0;
}