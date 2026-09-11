#include <stdio.h>
#include <stdlib.h>

int main() {
    float a1, a2, a3, premio, total_investido;
    
    printf("Digite a aposta do primeiro amigo: ");
    scanf("%f", &a1);
    printf("Digite a aposta do segundo amigo: ");
    scanf("%f", &a2);
    printf("Digite a aposta do terceiro amigo: ");
    scanf("%f", &a3);
    printf("Digite o valor total do premio: ");
    scanf("%f", &premio);
    
    total_investido = a1 + a2 + a3;
    
    printf("Ganhador 1 recebe: R$ %.2f\n", premio * (a1 / total_investido));
    printf("Ganhador 2 recebe: R$ %.2f\n", premio * (a2 / total_investido));
    printf("Ganhador 3 recebe: R$ %.2f\n", premio * (a3 / total_investido));
    return 0;
}