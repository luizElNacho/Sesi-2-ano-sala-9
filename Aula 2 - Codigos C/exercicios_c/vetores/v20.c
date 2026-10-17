#include <stdio.h>

int main() {
    int v1[10], v2[10], k = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v1[i]);
        if (v1[i] % 2 != 0) {
            v2[k] = v1[i];
            k++;
        }
    }
    for (int i = 0; i < 10; i += 2) {
        printf("%d %d\n", v1[i], v1[i+1]);
    }
    for (int i = 0; i < k; i += 2) {
        if (i + 1 < k) printf("%d %d\n", v2[i], v2[i+1]);
        else printf("%d\n", v2[i]);
    }
    return 0;
}