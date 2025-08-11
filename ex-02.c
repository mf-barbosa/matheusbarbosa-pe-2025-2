#include <stdio.h>

int main() {
    int idade = 21;
    double peso, altura;
    peso = 90.1;
    altura = 1.92;

    double imc = peso / (altura * altura);

    printf("idade = %d\n", idade);
    printf("peso = %f - altura = %f\n", peso, altura);
    printf("imc = %f\n", imc);
    return 0;
}