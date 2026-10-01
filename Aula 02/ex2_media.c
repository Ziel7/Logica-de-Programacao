#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[100];
    float nota1, nota2, media;

    printf("Qual o seu nome ? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Qual a primeira nota ? ");
    scanf("%f", &nota1);

    printf("Qual a segunda nota ? ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("O aluno %s obteve média final %.1f.\n", nome, media);

    return 0;
}
