#include <stdio.h>

int main() {
    double salario, salarioContribuicao;

    printf("Digite o seu salário\n");
    scanf("%lf", &salario);

    if (salario <= 8.157) {
        salarioContribuicao = salario;
    } else {
         salarioContribuicao = 8.157;
    }
    
    printf("salario = %f\n", salario);
    printf("salario-contribuicao = %f\n", salarioContribuicao)

    if (salario <= 1.518) {
        printf("O desconto do seu salário é de 7,5%% - desconto = %f\n", salarioContribuicao);
    } else if (salario <= 2.793) {
        printf("O desconto do seu salário é de 9,0%% - desconto = %f\n", salarioContribuicao);
    } else if (salario <= 4.190) {
        printf("O desconto do seu salário é de 12,0%% - desconto = %f\n", salarioContribuicao);
    } else if (salario <= 8.157) {
        printf("O desconto do seu salário é de 14,0%% - desconto = %f\n", salarioContribuicao);
    }

    return 0;
}