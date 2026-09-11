#include <stdio.h>
#include <stdlib.h>

int main() {
    float pol, cm;
    
    printf("Digite o valor em polegadas: ");
    scanf("%f", &pol);
    
    cm = pol * 2.54;
    
    printf("Comprimento em centimetros: %.2f\n", cm);
    return 0;
}