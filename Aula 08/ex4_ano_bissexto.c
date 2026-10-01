#include <stdio.h>
#include <stdbool.h>
bool ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}
int main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if (ehBissexto(ano)) printf("%d é um ano bissexto.\n", ano);
    else printf("%d não é um ano bissexto.\n", ano);
    return 0;
}
