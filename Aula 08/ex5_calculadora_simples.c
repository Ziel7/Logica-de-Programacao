#include <stdio.h>
int somar(int a, int b) { return a + b; }
int subtrair(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }
float dividir(int a, int b) {
    if (b != 0) return (float) a / b;
    return 0;
}
int main() {
    int a, b, opcao;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("\nEscolha a operação:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\nOpção: ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1: printf("Resultado da soma: %d\n", somar(a, b)); break;
        case 2: printf("Resultado da subtração: %d\n", subtrair(a, b)); break;
        case 3: printf("Resultado da multiplicação: %d\n", multiplicar(a, b)); break;
        case 4:
            if (b != 0) printf("Resultado da divisão: %g\n", dividir(a, b));
            else printf("Erro: divisão por zero não é permitida.\n");
            break;
        default: printf("Opção inválida!\n");
    }
    return 0;
}
