#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[4][4], t[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            m[i][j] = (rand() % 20) + 1;
            t[i][j] = (j > i) ? 0 : m[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) printf("%d ", m[i][j]);
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}