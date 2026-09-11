#include <stdio.h>
#include <stdlib.h>

int main() {
    float kg, libras;
    
    printf("Digite a massa em kg: ");
    scanf("%f", &kg);
    
    libras = kg / 0.45;
    
    printf("Massa em libras: %.2f\n", libras);
    return 0;
}