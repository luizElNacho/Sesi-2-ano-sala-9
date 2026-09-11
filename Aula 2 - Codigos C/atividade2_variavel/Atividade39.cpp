#include <stdio.h>
#include <stdlib.h>

int main() {
    float total = 780000.0;
    float g1 = total * 0.46;
    float g2 = total * 0.32;
    float g3 = total - (g1 + g2);
    
    printf("Primeiro ganhador (46%%): R$ %.2f\n", g1);
    printf("Segundo ganhador (32%%): R$ %.2f\n", g2);
    printf("Terceiro ganhador (restante): R$ %.2f\n", g3);
    return 0;
}