#include <stdio.h>
#include <stdlib.h>

int main() {
    float alt_degrau, alt_objetivo;
    int degraus;
    
    printf("Digite a altura do degrau: ");
    scanf("%f", &alt_degrau);
    printf("Digite a altura que deseja alcancar: ");
    scanf("%f", &alt_objetivo);
    
    degraus = alt_objetivo / alt_degrau;
    
    printf("Degraus necessarios: %d\n", degraus);
    return 0;
}