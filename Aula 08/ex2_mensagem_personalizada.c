#include <stdio.h>
void exibirMensagem(char nome[], int idade) {
    printf("Olá, %s, você tem %d anos. Seja bem-vindo(a)!\n", nome, idade);
}
int main() {
    char nome[50];
    int idade;
    printf("Nome: ");
    scanf(" %49[^\n]", nome);
    printf("Idade: ");
    scanf("%d", &idade);
    exibirMensagem(nome, idade);
    return 0;
}
