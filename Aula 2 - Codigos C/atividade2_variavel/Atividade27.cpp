#include <stdio.h>
#include <stdlib.h>

int main() {
    float hectares, m2;
    
    printf("Digite a area em hectares: ");
    scanf("%f", &hectares);
    
    m2 = hectares * 10000.0;
    
    printf("Area em m2: %.2f\n", m2);
    return 0;
}