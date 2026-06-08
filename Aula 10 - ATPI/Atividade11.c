// Ler um número e apresentar o seu fatorial. Lembrando que:
// n! = 1 x 2 x 3 x 4 x ... x n-1 x n
// 0! = 1
// Exemplo: 5! = 1 x 2 x 3 x 4 x 5 =120

#include <stdio.h>

int main(){

    int numero = 0, multiplicador = 0, resultado;
    char escolha;
    printf("Deseja ver a tabuada dos numeros de 1 a 10? (Y/N)");
    scanf("%c", &escolha);

    if(escolha == 'N' || escolha == 'n'){
        printf("\nTabom flw");
        return 0;
    }else if(escolha == 'Y' || escolha == 'y'){
        for(int i = 0; i < 10; i++){
            numero++;
            multiplicador = 1;
            printf("\n\n///// TABUADA DO NUMERO %d /////\n", numero);
            for(int j = 0; j < 10; j++){
                resultado = numero * multiplicador;
                printf("\n%d X %d = %d", numero, multiplicador, resultado);
                multiplicador++;
            }
        }
    }

return 0;
}