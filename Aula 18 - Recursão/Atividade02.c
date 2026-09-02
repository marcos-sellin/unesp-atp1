// Fazer uma função recursiva para calcular o enésimo valor da sequência de Fibonacci

#include <stdio.h>

int fibo(int n) {

    int m;

    if(n <= 2){
        return 1;
    }else{
        m = fibo(n - 1) + fibo(n - 2);
        return m;
    }

}

int main() {

    int n, fibonacci;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    fibonacci = fibo(n);

    printf("Fibonacci(%d): %d", n, fibonacci);

return 0;
}