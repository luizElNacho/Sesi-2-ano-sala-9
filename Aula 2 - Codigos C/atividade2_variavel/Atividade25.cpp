#include <stdio.h>
#include <stdlib.h>

int main() {
    float acres, m2;
    
    printf("Digite a area em acres: ");
    scanf("%f", &acres);
    
    m2 = acres * 4048.58;
    
    printf("Area em m2: %.2f\n", m2);
    return 0;
}