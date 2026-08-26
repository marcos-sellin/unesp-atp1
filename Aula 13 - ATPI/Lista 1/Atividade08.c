// Leia N números inteiros e armazene-os em um vetor. O valor de N é fornecido
// pelo usuário. Em seguida, imprima os elementos que são primos e suas respectivas
// posições no vetor.

#include <stdio.h>

int main() {

    int N;

    printf("Informe quantos numeros serao digitados: ");
    scanf("%d", &N);

    int nao_primo = 0, numeros[N], primos[N];

    for(int i = 0; i < N; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);

        for(int j = 2; j < numeros[i]; j++){
            if(numeros[i] % j == 0){
                nao_primo = 1;
                break;
            }
        }
        
        if(nao_primo == 1){
            primos[i] = 0;
            nao_primo = 0;
        }else{
            primos[i] = 1;
        }
    }

    printf("\nElementos primos e suas posicoes: \n");

    for(int i = 0; i < N; i++){
        if(primos[i] == 1){
            printf("%d, index [%d] \n", numeros[i], i);
        }
    }

return 0;
}