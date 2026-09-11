#include <stdio.h>
#include <stdlib.h>

int main() {
    float milhas, km;
    
    printf("Digite a distancia em milhas: ");
    scanf("%f", &milhas);
    
    km = 1.61 * milhas;
    
    printf("Distancia em km: %.2f\n", km);
    return 0;
}