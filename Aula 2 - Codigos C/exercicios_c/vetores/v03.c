#include <stdio.h>

int main() {
    float a[10], b[10];
    for (int i = 0; i < 10; i++) {
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < 10; i++) {
        b[i] = a[i] * a[i];
    }
    for (int i = 0; i < 10; i++) {
        printf("%f ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%f ", b[i]);
    }
    printf("\n");
    return 0;
}