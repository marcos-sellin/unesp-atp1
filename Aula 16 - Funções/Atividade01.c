// Faça uma função para receber duas notas de um aluno e 
// retornar a média simples

#include <stdio.h>

float mediaSimples(float n1, float n2){

    float media = (n1 + n2) / 2;

return media;
}

int main() {

    float n1, n2, media;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);

    media = MediaSimples(n1, n2);

    printf("Media simples: %.1f", media);

return 0;
}