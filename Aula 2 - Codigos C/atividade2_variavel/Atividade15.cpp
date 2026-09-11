#include <stdio.h>
#include <stdlib.h>

int main() {
    float rad, graus;
    float pi = 3.14;
    
    printf("Digite o angulo em radianos: ");
    scanf("%f", &rad);
    
    graus = rad * 180.0 / pi;
    
    printf("Angulo em graus: %.2f\n", graus);
    return 0;
}