#include <stdio.h>

int main(){

    float trabalhos, provas, media_final;
    printf("Informe a media da nota dos trabalhos: ");
    scanf("%f", &trabalhos);
    if(trabalhos > 10 || trabalhos < 0){
        printf("Media invalidas");
        return 0;
    }
    printf("Informe a media da nota das provas: ");
    scanf("%f", &provas);
    if(provas > 10 || provas < 0){
        printf("Media invalidas");
        return 0;
    }

    if(trabalhos >= 5 && provas >= 5){
        media_final = (trabalhos + provas) / 2;
        printf("\nMEDIA ARTIMETICA \n\n");
    }else{
        if(trabalhos > provas){
            media_final = provas;
            printf("\nMENOR NOTA \n\n");
        }else{
            media_final = trabalhos;
            printf("\nMENOR NOTA \n\n");
        }
    }

    printf("A media final e: %.1f", media_final);

return 0;
}
