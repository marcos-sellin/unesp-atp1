#include <stdio.h>

int main(){

    int idade;
    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 100){
        if(idade <= 7){
            printf("Categoria Infantil A (5 a 7 anos)");
        }else{
            if(idade <= 10){
                printf("Catgoria Infantil B (8 a 10 anos)");
            }else{
                if(idade <= 13){
                    printf("Categoria Juvenil A (11 a 13 anos)");
                }else{
                    if(idade <= 17){
                        printf("Categoria Juvenil B (14 a 17 anos)");
                    }else{
                        printf("Categoria Adulto (maior de 18 anos)");
                    }
                }
            }
        }
    }else{
        printf("Idade invalida");
    }

return 0;
}
