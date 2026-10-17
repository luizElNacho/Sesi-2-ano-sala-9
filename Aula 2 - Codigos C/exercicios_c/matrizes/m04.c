#include <stdio.h>

int main() {
    int m[4][4], mai, li = 0, co = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    mai = m[0][0];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
            if (m[i][j] > mai) {
                mai = m[i][j];
                li = i;
                co = j;
            }
        }
        printf("\n");
    }
    printf("%d %d\n", li, co);
    return 0;
}