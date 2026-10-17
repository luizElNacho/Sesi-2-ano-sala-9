#include <stdio.h>

int main() {
    int v[6], i = 0, temp;
    while (i < 6) {
        scanf("%d", &temp);
        if (temp % 2 == 0) {
            v[i] = temp;
            i++;
        }
    }
    for (int j = 5; j >= 0; j--) {
        printf("%d\n", v[j]);
    }
    return 0;
}