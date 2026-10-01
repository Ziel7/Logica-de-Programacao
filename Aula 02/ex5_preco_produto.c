#include <stdio.h>

int main(void) {
    float valor, valorAVista, parcela, comissaoAVista, comissaoParcelado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    valorAVista       = valor - (valor * 0.1);   /* 10% de desconto */
    parcela           = valor / 3;               /* 3x sem juros */
    comissaoAVista    = valorAVista * 0.05;      /* 5% sobre o valor com desconto */
    comissaoParcelado = valor * 0.05;            /* 5% sobre o valor original */

    printf("Valor com 10%% de desconto: R$ %.2f\n", valorAVista);
    printf("Valor de cada parcela (3x sem juros): R$ %.2f\n", parcela);
    printf("Comissão do vendedor (à vista): R$ %.2f\n", comissaoAVista);
    printf("Comissão do vendedor (parcelado): R$ %.2f\n", comissaoParcelado);

    return 0;
}
