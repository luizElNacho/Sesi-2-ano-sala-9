#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura, raio, volume;
    float pi = 3.141592;
    
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    
    volume = pi * (raio * raio) * altura;
    
    printf("Volume do cilindro: %.2f\n", volume);
    return 0;
}