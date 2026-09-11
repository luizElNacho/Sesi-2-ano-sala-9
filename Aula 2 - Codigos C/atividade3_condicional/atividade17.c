#include <stdio.h>

int main() {
    float baseM, basem, altura, area;
    printf("Digite a base maior, base menor e altura: ");
    scanf("%f %f %f", &baseM, &basem, &altura);

    if (baseM <= 0 || basem <= 0) {
        printf("As bases devem ser maiores que zero.\n");
    } else {
        area = ((baseM + basem) * altura) / 2.0;
        printf("Área do trapézio: %.2f\n", area);
    }
    return 0;
}