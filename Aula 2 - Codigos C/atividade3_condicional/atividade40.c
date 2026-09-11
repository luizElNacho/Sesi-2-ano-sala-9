#include <stdio.h>

int main() {
    float custoFabrica, dist = 0, imp = 0, custoFinal;
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    if (custoFabrica <= 12000.0) {
        dist = 0.05;
        imp = 0.0;
    } else if (custoFabrica <= 25000.0) {
        dist = 0.10;
        imp = 0.15;
    } else {
        dist = 0.15;
        imp = 0.20;
    }

    custoFinal = custoFabrica + (custoFabrica * dist) + (custoFabrica * imp);
    printf("Custo ao consumidor: R$ %.2f\n", custoFinal);
    return 0;
}