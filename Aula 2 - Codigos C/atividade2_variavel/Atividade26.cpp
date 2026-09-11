#include <stdio.h>
#include <stdlib.h>

int main() {
    float m2, hectares;
    
    printf("Digite a area em m2: ");
    scanf("%f", &m2);
    
    hectares = m2 * 0.0001;
    
    printf("Area em hectares: %.4f\n", hectares);
    return 0;
}