#include <stdio.h>
#include <stdlib.h>

int main() {
    float graus, rad;
    float pi = 3.14;
    
    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);
    
    rad = graus * pi / 180.0;
    
    printf("Angulo em radianos: %.2f\n", rad);
    return 0;
}