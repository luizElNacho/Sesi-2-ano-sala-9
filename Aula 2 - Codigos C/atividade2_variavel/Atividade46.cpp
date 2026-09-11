#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, d1, d2, d3, invertido;
    
    printf("Digite um numero de 3 digitos (100 a 999): ");
    scanf("%d", &num);
    
    d1 = num / 100;
    d2 = (num / 10) % 10;
    d3 = num % 10;
    
    invertido = (d3 * 100) + (d2 * 10) + d1;
    
    printf("Numero gerado: %d\n", invertido);
    return 0;
}