#include <stdio.h>

int main() {
    float h, p;
    printf("Digite a altura e o peso: ");
    scanf("%f %f", &h, &p);

    if (h < 1.20) {
        if (p <= 60) printf("Classificação: A\n");
        else if (p <= 90) printf("Classificação: D\n");
        else printf("Classificação: G\n");
    } else if (h <= 1.70) {
        if (p <= 60) printf("Classificação: B\n");
        else if (p <= 90) printf("Classificação: E\n");
        else printf("Classificação: H\n");
    } else {
        if (p <= 60) printf("Classificação: C\n");
        else if (p <= 90) printf("Classificação: F\n");
        else printf("Classificação: I\n");
    }
    return 0;
}