// Faça um programa para ler o valor de um produto e classifica-lo. Para tanto, utilize a tabela abaixo.
//           Preço                    Classificação
//       Até R$ 100,00                    Barato
// Entre R$ 100,00 e R$ 500,00            Normal
//     Acima de R$ 500,00                  Caro

#include <stdio.h>

int main(){

    float produto;
    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    if(produto <= 100){
        printf("O produto tem preco barato");
    }else{
        if(produto <= 500){
            printf("O produto tem preco normal");
        }else{
            printf("O produto tem preco caro");
        }
    }

return 0;
}