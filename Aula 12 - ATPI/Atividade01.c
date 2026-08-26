// Faça um programa para ler um ângulo em graus e
// apresentar o seno e cosseno desse ângulo

#include <stdio.h>
#include <math.h>

int main(){

    double angulo, seno, cosseno, pi = 3.14159265;

    printf("Digite um numero: ");
    scanf("%lf", &angulo);

    angulo *= pi / 180;
    seno = sin(angulo);
    cosseno = cos(angulo);

    printf("\nO seno do angulo e: %lf", seno);
    printf("\nO seno do angulo e: %lf\n\n", cosseno);

return 0;
}