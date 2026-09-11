#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, hipotenusa;
    
    printf("Digite o valor do cateto a: ");
    scanf("%f", &a);
    printf("Digite o valor do cateto b: ");
    scanf("%f", &b);
    
    hipotenusa = sqrt((a * a) + (b * b));
    
    printf("Hipotenusa: %.2f\n", hipotenusa);
    return 0;
}