#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[100];
    int idade;
    float altura;
    char genero;
    char entrada[20];
    int estudante;

    printf("Qual é o seu nome ? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';   /* remove o \n do final */

    printf("Qual é sua idade ? ");
    scanf("%d", &idade);

    printf("Qual a sua altura ? ");
    scanf("%f", &altura);

    printf("Qual o seu gênero ? ");
    scanf(" %c", &genero);

    printf("É estudante ? (verdadeiro/falso) ");
    scanf("%19s", entrada);
    estudante = (strcmp(entrada, "verdadeiro") == 0);

    printf("\nBem-vindo(a), %s!\n", nome);
    printf("Seu Perfil\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Gênero: %c\n", genero);
    printf("Estudante: %s\n", estudante ? "verdadeiro" : "falso");

    return 0;
}
