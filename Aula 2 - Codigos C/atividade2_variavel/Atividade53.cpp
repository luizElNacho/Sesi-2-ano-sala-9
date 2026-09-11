#include <stdio.h>
#include <stdlib.h>

int main() {
    float c, l, p, perimetro, custo;
    
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &c);
    printf("Digite a largura do terreno: ");
    scanf("%f", &l);
    printf("Digite o preco do metro de tela: ");
    scanf("%f", &p);
    
    perimetro = (2 * c) + (2 * l);
    custo = perimetro * p;
    
    printf("Custo total para cercar o terreno: R$ %.2f\n", custo);
    return 0;
}