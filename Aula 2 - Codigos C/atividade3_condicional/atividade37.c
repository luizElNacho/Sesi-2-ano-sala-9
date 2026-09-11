#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    printf("Chegada (hora min): ");
    scanf("%d %d", &h1, &m1);
    printf("Partida (hora min): ");
    scanf("%d %d", &h2, &m2);

    int inicio = h1 * 60 + m1;
    int fim = h2 * 60 + m2;

    if (fim < inicio) fim += 24 * 60;

    int minTotais = fim - inicio;
    int horas = minTotais / 60;
    if (minTotais % 60 > 0) horas++;

    float valor = 0;
    if (horas <= 2) valor = horas * 1.00;
    else if (horas <= 4) valor = 2 * 1.00 + (horas - 2) * 1.40;
    else valor = 2 * 1.00 + 2 * 1.40 + (horas - 4) * 2.00;

    printf("Preço cobrado (%d h): R$ %.2f\n", horas, valor);
    return 0;
}