#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z, op;
    printf("Digite três números inteiros positivos: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Escolha a média:\n1- Geométrica\n2- Ponderada\n3- Harmônica\n4- Aritmética\n");
    scanf("%d", &op);

    switch (op) {
        case 1: printf("Média Geométrica: %.2f\n", cbrt((double)x * y * z)); break;
        case 2: printf("Média Ponderada: %.2f\n", (x + 2.0 * y + 3.0 * z) / 6.0); break;
        case 3: printf("Média Harmônica: %.2f\n", 1.0 / ((1.0/x) + (1.0/y) + (1.0/z))); break;
        case 4: printf("Média Aritmética: %.2f\n", (x + y + z) / 3.0); break;
        default: printf("Opção inválida.\n"); break;
    }
    return 0;
}