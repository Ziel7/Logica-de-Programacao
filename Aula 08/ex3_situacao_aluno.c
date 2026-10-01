#include <stdio.h>
void exibirSituacao(float media, int faltas) {
    printf("Situação: ");
    if (media >= 9.5 && faltas <= 10) printf("APROVADO COM LOUVOR\n");
    else if (media >= 7.0 && faltas <= 10) printf("APROVADO\n");
    else printf("REPROVADO\n");
}
int main() {
    float media; int faltas;
    printf("Média: ");
    scanf("%f", &media);
    printf("Faltas: ");
    scanf("%d", &faltas);
    exibirSituacao(media, faltas);
    return 0;
}
