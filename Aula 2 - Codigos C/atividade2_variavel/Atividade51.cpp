#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x, y, distancia;
    
    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    printf("Digite a coordenada y: ");
    scanf("%f", &y);
    
    distancia = sqrt((x * x) + (y * y));
    
    printf("Distancia da origem (0,0): %.2f\n", distancia);
    return 0;
}