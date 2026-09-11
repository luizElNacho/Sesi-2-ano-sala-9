#include <stdio.h>
#include <stdlib.h>

int main() {
    int dias;
    float bruto, liquido;
    
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias);
    
    bruto = dias * 30.0;
    liquido = bruto * 0.92;
    
    printf("Quantia liquida a pagar: R$ %.2f\n", liquido);
    return 0;
}