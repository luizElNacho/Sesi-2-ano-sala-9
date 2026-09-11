#include <stdio.h>
#include <stdlib.h>

int main() {
    float total, a_vista, parcela, comissao_avista, comissao_parcelada;
    
    printf("Digite o valor total da venda: ");
    scanf("%f", &total);
    
    a_vista = total * 0.90;
    parcela = total / 3.0;
    comissao_avista = a_vista * 0.05;
    comissao_parcelada = total * 0.05;
    
    printf("Total a pagar com desconto (10%%): R$ %.2f\n", a_vista);
    printf("Valor da parcela (3x sem juros): R$ %.2f\n", parcela);
    printf("Comissao do vendedor (venda a vista): R$ %.2f\n", comissao_avista);
    printf("Comissao do vendedor (venda parcelada): R$ %.2f\n", comissao_parcelada);
    return 0;
}