// Ler cinco valores fornecidos pelo usuário e calcular a média dos valores.

#include <stdio.h>

int main(){

    float nota, media;

    for (int i = 1; i < 6; i++){
        printf("Informe a nota de um aluno (%d/5): ", i);
        scanf("%f", &nota);
        media += nota;
    }

    media /= 5;
    printf("\nA media dos alunos e: %.1f \n", media);

return 0;
}