#include <stdio.h>

int main() {
    int v[20];
    for (int i = 0; i < 20; i++) {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 20; i++) {
        int rep = 0;
        for (int j = 0; j < i; j++) {
            if (v[i] == v[j]) {
                rep = 1;
                break;
            }
        }
        if (!rep) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
    return 0;
}