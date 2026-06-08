// Faça um programa para ler um dígito de 1 a 5. Em seguida, o programa deve apresentar o
// nome do dígito por extenso. Exemplo:
// - Informe um dígito de 1 a 5: 4
// - Nome por extenso: quatro

#include <stdio.h>

int main(){

    int numero;
    printf("Digite um numero de 1 a 5: ");
    scanf("%d", &numero);

    if(numero < 1){
        printf("O numero e menor que 1");
    }else{
    if(numero == 1){
        printf("Nome por extenso: um");
    }else{
        if(numero == 2){
            printf("Nome por extenso: dois");
        }else{
            if(numero == 3){
                printf("Nome por extenso: tres");
            }else{
                if(numero == 4){
                    printf("Nome por extenso: quatro");
                }else{
                    if(numero == 5){
                        printf("Nome por extenso: cinco");
                    }else{
                        printf("O numero e maior que 5");
                    }
                }
            }
        }
    }}

return 0;
}