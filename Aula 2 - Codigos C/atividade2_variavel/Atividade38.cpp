#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, novo_salario;
    
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    
    novo_salario = salario * 1.25;
    
    printf("Novo salario: R$ %.2f\n", novo_salario);
    return 0;
}