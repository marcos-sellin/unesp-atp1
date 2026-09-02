// Fazer uma função recursiva para calcular a soma de 1 a n

#include <stdio.h>

int somaIntervalo(int n) {

    int m;

    if(n == 1){
        return 1;
    }else{
        m = n + somaIntervalo(n - 1);
    }

}

int main() {

    int n, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    soma = somaIntervalo(n);

    printf("Soma dos numeros de 1 a %d: %d", n, soma);

return 0;
}