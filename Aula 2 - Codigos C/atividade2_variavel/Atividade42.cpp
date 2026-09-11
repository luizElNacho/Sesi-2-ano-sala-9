#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario_base, salario_final;
    
    printf("Digite o salario-base: ");
    scanf("%f", &salario_base);
    
    salario_final = salario_base + (salario_base * 0.05) - (salario_base * 0.07);
    
    printf("Salario a receber: R$ %.2f\n", salario_final);
    return 0;
}