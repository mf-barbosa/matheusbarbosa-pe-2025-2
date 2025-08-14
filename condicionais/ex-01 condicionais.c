#include <stdio.h>

int main() {
    int idade;

    printf("digite a sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Parabéns, voce ja pode beber\n");    
    } else {
        printf("Calma ai, voce ainda nao tem idade pra isso!\n");
    }

    if (idade < 16) {
        printf("Voce ainda nao tem idade para votar\n");
    } else if (idade < 18) {
        printf("Voce já tem idade para votar, mas, é facultativo. se tirar o título de eleitor\n"); 
    } else if (idade < 70) {
        printf("Nesta idade, o voto é obrigatório\n");
    } else {
        printf("Nesta idade, mesmo tendo o título de eleitor, o voto é facultativo");
    }

    return 0;
}