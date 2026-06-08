// Faça um programa para ler a base e o expoente. Em
// seguida, deverá apresentar o resultado da potenciação.
// Para tanto, use a função pow, conforme segue:
// – double pow (double base, double exponent);

#include <stdio.h>
#include <math.h>

int main(){

    double base, expoente, potencia;

    printf("Digite um numero (base): ");
    scanf("%lf", &base);
    printf("Digite um numero (expoente): ");
    scanf("%lf", &expoente);

    potencia = pow(base, expoente);

    printf("\nO resultado da potencia e: %lf", potencia);

return 0;
}