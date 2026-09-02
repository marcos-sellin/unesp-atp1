// Fazer um programa recursivo para executar a Conjectura de Collatz (problema 3x + 1). 
// Para qualquer número inteiro X maior ou igual a 1 faça:
// - Se X é par: X = X/2
// - Se X é impar: X = 3*X + 1
// O programa deve parar quando o valor de X for igual a 1.
// Exiba os valores gerados pela sequência.

#include <stdio.h>

int collatz(int x) {

    if(x == 1){
        printf("1");
    }else if(x % 2 == 0){
        x /= 2;
        printf("%d ", x);
        collatz(x);
    }else{
        x = (3 * x) + 1;
        printf("%d ", x);
        collatz(x);
    }

}

int main() {

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Sequencia de Collatz: \n%d ", n);
    collatz(n);

return 0;
}