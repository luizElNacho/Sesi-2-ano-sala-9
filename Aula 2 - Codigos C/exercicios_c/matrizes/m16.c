#include <stdio.h>

int main() {
    char gab[10], resp[3][10];
    int mat[3], nota[3] = {0}, aprod = 0;
    for (int j = 0; j < 10; j++) scanf(" %c", &gab[j]);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &mat[i]);
        for (int j = 0; j < 10; j++) {
            scanf(" %c", &resp[i][j]);
            if (resp[i][j] == gab[j]) nota[i]++;
        }
        if (nota[i] >= 7) aprod++;
    }
    for (int i = 0; i < 3; i++) {
        printf("%d %d\n", mat[i], nota[i]);
    }
    printf("%f%%\n", (aprod / 3.0) * 100);
    return 0;
}