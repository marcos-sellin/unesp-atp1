// Considerando que são fornecidos os valores dos lados
// (A, B e C) de um triângulo, faça a classificação com base
// nos seguintes conceitos:
// – Equilátero: triângulo que tem três lados iguais
// – Isósceles: triângulo que tem o comprimento de dois lados iguais
// – Escaleno: triângulo que tem os três lados diferentes

#include <stdio.h>

int main(){

    float lado1, lado2, lado3;
    printf("Informe a medida do lado do triangulo (1/3): ");
    scanf("%f", &lado1);
    printf("Informe a medida do lado do triangulo (2/3): ");
    scanf("%f", &lado2);
    printf("Informe a medida do lado do triangulo (3/3): ");
    scanf("%f", &lado3);

    if(lado1 == lado2 && lado2 == lado3){
        printf("O triangulo e equilatero");
    }else{
        if(lado1 != lado2 && lado2 != lado3){
            printf("O triangulo e escaleno");
        }else{
            printf("O triangulo e isosceles");
        }
    }

return 0;
}