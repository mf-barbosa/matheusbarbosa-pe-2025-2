#include <stdio.h>
#define TAM 3

int main() {
    int soma;
    double media;
    int numeros[TAM];
    for(int i = 0; i < TAM; i += 1) {
        printf("digite o %dº número inteiro", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    media = (double)soma / (double)TAM;
    printf("a média das notas foi %.2f", media);
    for(int i = 0; i < TAM; i += 1){
        if(numeros[i] > media){
            printf("numeros[%d] = %d\n", i + 1, numeros[i]);
        }
    }
    return 0;
}
