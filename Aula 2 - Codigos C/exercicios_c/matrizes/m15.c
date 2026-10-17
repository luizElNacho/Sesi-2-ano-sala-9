#include <stdio.h>

int main() {
    char resp[5][10], gab[10];
    int res[5] = {0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) scanf(" %c", &resp[i][j]);
    }
    for (int j = 0; j < 10; j++) scanf(" %c", &gab[j]);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            if (resp[i][j] == gab[j]) res[i]++;
        }
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}