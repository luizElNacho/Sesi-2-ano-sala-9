#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, d1, d2, d3, d4;
    
    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &num);
    
    d1 = num / 1000;
    d2 = (num / 100) % 10;
    d3 = (num / 10) % 10;
    d4 = num % 10;
    
    printf("%d\n", d1);
    printf("%d\n", d2);
    printf("%d\n", d3);
    printf("%d\n", d4);
    return 0;
}