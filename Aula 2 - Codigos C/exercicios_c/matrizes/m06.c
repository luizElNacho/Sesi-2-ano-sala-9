#include <stdio.h>

int main() {
    int a[4][4], b[4][4], c[4][4];
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) scanf("%d", &b[i][j]);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            c[i][j] = (a[i][j] > b[i][j]) ? a[i][j] : b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}