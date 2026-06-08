// Faça um programa para apresentar a sequência de Fibonacci até o termo ‘n’
// fornecido pelo usuário. Para tanto, temos que a sequência é definida pela seguinte
// relação de recorrência: Fn = Fn-1 + Fn-2 ; com valores iniciais: F1 = 1 e F2 = 1.

#include <stdio.h>

int main(){

    int i, j, termo = 3, fibo = 0, f1 = 1, f2 = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &i);

    if(i == 1){
        printf("\nSequencia de Fibonacci: %d\n", f1);
        return 0;
    }else if(i == 2){
        printf("\nSequencia de Fibonacci: %d %d\n", f1, f2);
        return 0;
    }

    printf("\nSequencia de Fibonacci: %d %d ", f1, f2);
    i -= 2;

    for(i; i > 0; i--){
        fibo = 0;
        fibo += f1 + f2;
        f2 = f1;
        f1 = fibo;
        printf("%d ", fibo);
    }

printf("\n");
return 0;
}