#include <stdio.h>
#include <stdlib.h>

int main() {
    float cm, pol;
    
    printf("Digite o valor em centimetros: ");
    scanf("%f", &cm);
    
    pol = cm / 2.54;
    
    printf("Comprimento em polegadas: %.2f\n", pol);
    return 0;
}