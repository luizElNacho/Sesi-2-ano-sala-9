#include <stdio.h>

int main() {
    float notas[15], soma = 0;
    for (int i = 0; i < 15; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    printf("%f\n", soma / 15.0);
    return 0;
}