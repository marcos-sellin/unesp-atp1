// Faça uma função para receber um número e exibir a tabuada desse número. A
// exibição ocorrerá dentro da própria função.

#include <stdio.h>

void tabuadaDoNumero(float numero) {

    printf("Tabuada do numero %.2f: \n", numero);

    for(int i = 1; i <= 10; i++){
        printf("%.2f x %d = %.2f \n", numero, i, numero * i);
    }

}

int main() {

    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    tabuadaDoNumero(numero);

return 0;
}