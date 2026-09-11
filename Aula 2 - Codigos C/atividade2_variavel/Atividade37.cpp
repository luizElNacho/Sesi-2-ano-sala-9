#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, valor_desconto;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    
    valor_desconto = valor * 0.88;
    
    printf("Valor com 12%% de desconto: R$ %.2f\n", valor_desconto);
    return 0;
}