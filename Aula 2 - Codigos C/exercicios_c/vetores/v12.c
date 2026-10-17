#include <stdio.h>

int main() {
    float v[5], maior, menor, soma = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }
    maior = v[0];
    menor = v[0];
    for (int i = 1; i < 5; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    for (int i = 0; i < 5; i++) {
        printf("%f ", v[i]);
    }
    printf("\n%f %f %f\n", maior, menor, soma / 5.0);
    return 0;
}