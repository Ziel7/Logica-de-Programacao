#include <stdio.h>

int main(void) {
    float angulo1, angulo2, angulo3;

    printf("Digite o primeiro ângulo: ");
    scanf("%f", &angulo1);

    printf("Digite o segundo ângulo: ");
    scanf("%f", &angulo2);

    angulo3 = 180 - (angulo1 + angulo2);

    printf("O terceiro ângulo do triângulo é: %g graus\n", angulo3);

    return 0;
}
