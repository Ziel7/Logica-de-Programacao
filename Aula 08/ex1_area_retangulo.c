#include <stdio.h>
float calcularAreaRetangulo(float base, float altura) { return base * altura; }
int main() {
    float base, altura;
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);
    printf("Área do retângulo: %.1f\n", calcularAreaRetangulo(base, altura));
    return 0;
}
