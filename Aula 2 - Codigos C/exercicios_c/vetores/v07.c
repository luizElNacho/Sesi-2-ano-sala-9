#include <stdio.h>

int main() {
    int v[10], maior, pos = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    maior = v[0];
    for (int i = 1; i < 10; i++) {
        if (v[i] > maior) {
            maior = v[i];
            pos = i;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n%d %d\n", maior, pos);
    return 0;
}