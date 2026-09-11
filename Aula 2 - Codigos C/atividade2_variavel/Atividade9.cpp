#include <stdio.h>
#include <stdlib.h>

int main() {
    float celcius, kelvin;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celcius);
    
    kelvin = celcius + 273.15;
    
    printf("Temperatura em Kelvin: %.2f\n", kelvin);
    return 0;
}