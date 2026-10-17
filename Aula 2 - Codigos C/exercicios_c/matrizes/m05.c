#include <stdio.h>

int main() {
    int m[5][5], x, achou = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    scanf("%d", &x);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (m[i][j] == x) {
                printf("%d %d\n", i, j);
                achou = 1;
                break;
            }
        }
        if (achou) break;
    }
    if (!achou) printf("nao encontrado\n");
    return 0;
}