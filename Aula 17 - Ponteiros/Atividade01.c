// Faça uma função para receber o numerador e o denominador de uma divisão. 
// A função deve devolver pelos parâmetros o quociente e o resto.
// Use a seguinte assinatura:
// void quociente_resto(int n, int d, int *q, int *r);
// - n é o numerador; d é o denominador; q é o quociente; e r é o resto.

#include <stdio.h>

void quociente_resto(int n, int d, int *q, int *r){

    *q = n / d;
    *r = n % d;

}

int main() {

    int n, d, q, r;

    printf("Informe o numerador: ");
    scanf("%d", &n);

    printf("Informe o denominador: ");
    scanf("%d", &d);

    quociente_resto(n, d, &q, &r);

    printf("Quociente: %d \n", q);
    printf("Resto: %d", r);

return 0;
}