// Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de
// um cilindro circular e calculado por meio da seguinte equação: V = π ∗ raio2 ∗ altura, onde π =
// 3.141592.

#include <stdio.h>

int main() {

    float volumeCilindro, altura, raio, pi = 3.141592;

    printf("Informe a altura de um cilindo: ");
    scanf("%f", &altura);
    printf("Informe o raio de um cilindo: ");
    scanf("%f", &raio);

    volumeCilindro = pi * raio * raio * altura;

    printf("O volume do cilindro e: %.1f", volumeCilindro);

return 0;
}