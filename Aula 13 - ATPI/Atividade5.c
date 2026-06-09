// Armazenar as notas de uma prova de vários alunos, calcula a média da turma, e mostra quais
// alunos ficaram acima da média. Para tanto, o usuário indicará a quantidade de alunos. Quando
// exibir o aluno acima da média, utilize a posição dele no vetor. Exemplo de exibição após a leitura
// das notas:

// Média da Turma: 5.90
// Alunos acima da média
// - Aluno 0: nota 7.55
// - Aluno 3: nota 6.60

#include <stdio.h>

int main() {

    int n;

    printf("Informe a quatidade de alunos: ");
    scanf("%d", &n);

    float nota[n], media = 0;

    for(int i = 0; i < n; i++){
        printf("Informe a note de um aluno: ");
        scanf("%f", &nota[i]);
        media += nota[i];
    }

    media /= n;

    printf("\nMedia da turma: %.1f", media);
    printf("\nAlunos acima da media: \n");

    for(int i = 0; i < n; i++){
        if(nota[i] > media){
            printf("Aluno %d: %.1f", i, nota[i]);
        }
    }

return 0;
}