#include <stdio.h>
#include <stdlib.h>

int main() {
    float fah, celcius;
    
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fah);
    
    celcius = 5.0 * (fah - 32.0) / 9.0;
    
    printf("Temperatura em Celsius: %.2f\n", celcius);
    return 0;
}