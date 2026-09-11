#include <stdio.h>
#include <stdlib.h>

int main() {
    float m3, litros;
    
    printf("Digite o volume em m3: ");
    scanf("%f", &m3);
    
    litros = 1000.0 * m3;
    
    printf("Volume em litros: %.2f\n", litros);
    return 0;
}