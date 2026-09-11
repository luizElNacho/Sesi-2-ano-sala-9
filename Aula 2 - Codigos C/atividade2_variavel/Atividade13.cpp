#include <stdio.h>
#include <stdlib.h>

int main() {
    float km, milhas;
    
    printf("Digite a distancia em km: ");
    scanf("%f", &km);
    
    milhas = km / 1.61;
    
    printf("Distancia em milhas: %.2f\n", milhas);
    return 0;
}