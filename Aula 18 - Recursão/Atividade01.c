// Fazer uma função recursiva para calcular o fatorial de n

#include <stdio.h>

int fat(int n) {

    if(n == 0){
        return 1;
    }else{
        n *= fat(n - 1);
        return n;
    }

}

int main() {

    int n, fatorial;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    fatorial = fat(n);

    printf("Fatorial do numero: %d", fatorial);

return 0;
}