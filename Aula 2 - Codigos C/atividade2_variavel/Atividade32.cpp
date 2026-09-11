#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, soma;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    soma = ((3 * num) + 1) + ((2 * num) - 1);
    
    printf("Resultado: %d\n", soma);
    return 0;
}