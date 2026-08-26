// Verificar se um aluno foi aprovado ou reprovado
// – Calcular média simples de duas notas
// – Considerar aprovado se a média for maior ou igual a cinco

#include <stdio.h>

int main(){

    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("\nA media e: %.1f \n", media);

    if(media >= 5){
        printf("\nO aluno foi aprovado");
    }else{
        printf("\nO aluno foi reprovado");
    }

return 0;
}