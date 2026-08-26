// Faça um programa para ler a média de trabalhos e a média de provas de um
// aluno. Em seguida, o programa deverá calcular a média final do aluno com base
// nas seguintes regras:
// - Se o aluno apresentar médias de trabalho e de provas acima de cinco, a
// média final será a média aritmética entre as médias de trabalhos e de provas;
// - Caso contrário, a média final será a menor das médias obtidas entre
// trabalhos e provas.

#include <stdio.h>

int main() {

    float mediaProvas, mediaTrabalhos, mediaFinal;

    printf("Informe a media de provas do aluno: ");
    scanf("%f", &mediaProvas);
    printf("Informe a media de trabalhos do aluno: ");
    scanf("%f", &mediaTrabalhos);

    if(mediaProvas > 5 && mediaTrabalhos > 5){
        mediaFinal = (mediaProvas + mediaTrabalhos) / 2;
    }else{
        if(mediaProvas < mediaTrabalhos){
            mediaFinal = mediaProvas;
        }else{
            mediaFinal = mediaTrabalhos;
        }
    }

    printf("Media final do aluno: %.1f", mediaFinal);

return 0;
}