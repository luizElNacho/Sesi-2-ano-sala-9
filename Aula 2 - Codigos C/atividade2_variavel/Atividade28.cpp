#include <stdio.h>
#include <stdlib.h>

int main() {
    float v1, v2, v3, soma;
    
    printf("Digite tres valores: ");
    scanf("%f %f %f", &v1, &v2, &v3);
    
    soma = (v1 * v1) + (v2 * v2) + (v3 * v3);
    
    printf("A soma dos quadrados e: %.2f\n", soma);
    return 0;
}