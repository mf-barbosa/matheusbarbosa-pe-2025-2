#include <stdio.h>
#define TAM 3

int main() {
    double nota1[TAM], nota2[TAM], media[TAM];
    double somaTurma = 0, mediaTurma;

    for (int i = 0; i < TAM; i += 1){
        printf("Digite a 1º nota do aluno %d: ", i + 1);
        scanf("%lf", &nota1[i]);
        printf("Digite a 2º nota do aluno %d: ", i + 1);
        scanf("%lf", &nota2[i]);

        media[i] = (nota1[i] * 2 + nota2[i] * 3) / 5.0;
        somaTurma += media[i];
    }
    mediaTurma = somaTurma / TAM;
    printf("A media da turma foi: %.2f\n\n", mediaTurma);
    printf("Alunos acima da média da turma:\n");
    for (int i = 0; i < TAM; i += 1) {
        if (media[i] > mediaTurma) {
            printf("Aluno %d -> Nota1: %.2f | Nota2: %.2f | Média: %.2f\n", i + 1, nota1[i], nota2[i], media[i]);
        }
    }
}