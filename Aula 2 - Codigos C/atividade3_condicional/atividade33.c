#include <stdio.h>

int main() {
    float preco, novoPreco;
    printf("Digite o preço antigo: ");
    scanf("%f", &preco);

    if (preco <= 50.0) novoPreco = preco * 1.05;
    else if (preco <= 100.0) novoPreco = preco * 1.10;
    else novoPreco = preco * 1.15;

    printf("Preço novo: R$ %.2f - ", novoPreco);

    if (novoPreco <= 80.0) printf("Barato\n");
    else if (novoPreco <= 120.0) printf("Normal\n");
    else if (novoPreco <= 200.0) printf("Caro\n");
    else printf("Muito caro\n");

    return 0;
}