#include <stdio.h>
#include <stdlib.h>

int main() {
    float kelvin, celcius;
    
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &kelvin);
    
    celcius = kelvin - 273.15;
    
    printf("Temperatura em Celsius: %.2f\n", celcius);
    return 0;
}