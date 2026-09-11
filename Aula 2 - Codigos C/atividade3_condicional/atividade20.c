#include <stdio.h>

int main() {
    float a, b, c;
    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || b == c || a == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Não formam um triângulo.\n");
    }
    return 0;
}