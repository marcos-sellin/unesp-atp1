// Leia o código de um determinado produto e mostre sua classificação. Utilize a
// seguinte tabela como referência:
// Código Classificação
// 1 Alimento não perecível
// 2 a 4 Alimento perecível
// 5 a 6 Vestuário
// 7 Higiene pessoal
// 8 a 15 Limpeza e utensílios domésticos
// Qualquer outro código é inválido

#include <stdio.h>

int main(){

    int codigo;
    printf("Informe o codigo do produto (1 a 15): ");
    scanf("%d", &codigo);

    switch(codigo){
    case 1:
        printf("Alimento nao perecivel");
        break;
    case 2 ... 4:
        printf("Alimento perecivel");
        break;
    case 5 ... 6:
        printf("Vestuario");
        break;
    case 7:
        printf("Higiene pessoal");
        break;
    case 8 ... 15:
        printf("Limpeza e utensilhos domesticos");
        break;
    default:
        printf("Invalido");
        break;
    }

return 0;
}