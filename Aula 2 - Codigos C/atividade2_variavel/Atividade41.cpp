#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor_hora, horas_trabalhadas, total;
    
    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);
    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);
    
    total = (valor_hora * horas_trabalhadas) * 1.10;
    
    printf("Valor a ser pago ao funcionario: R$ %.2f\n", total);
    return 0;
}