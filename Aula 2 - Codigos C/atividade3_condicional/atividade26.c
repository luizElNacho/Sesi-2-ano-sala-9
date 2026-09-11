#include <stdio.h>

int main() {
    float dist, litros, consumo;
    printf("Digite a distância (km) e os litros consumidos: ");
    scanf("%f %f", &dist, &litros);

    consumo = dist / litros;
    printf("Consumo: %.2f km/l - ", consumo);

    if (consumo < 8) printf("Venda o carro!\n");
    else if (consumo <= 14) printf("Econômico!\n");
    else printf("Super econômico!\n");

    return 0;
}