#include <stdio.h>

int main() {
    double altura, peso;

    printf("Digite sua altura:\n");
    scanf("%lf", &altura);

    printf("Digite seu peso:\n");
    scanf("%lf", &peso);

    double imc = peso / (altura * altura);

    if (imc < 22) {
        printf("o seu imc é de %f, voce esta com o peso abaixo do normal", imc);
    } else if (imc > 22 && imc < 27) {
        printf("o seu imc é de %f, seu peso esta normal", imc);
    } else if (imc > 27 && imc < 29.9) {
        printf("o seu imc é de %f, voce esta com seobrepeso", imc);
    } else {
        printf("o seu imc é de %f, voce está obeso!", imc);
    }

    return 0;
}