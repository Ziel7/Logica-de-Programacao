#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[100];
    float peso, altura, imc;

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Peso (kg): ");
    scanf("%f", &peso);

    printf("Altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("%s, seu IMC é %.2f\n", nome, imc);

    return 0;
}
