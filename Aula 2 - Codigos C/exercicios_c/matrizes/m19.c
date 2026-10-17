#include <stdio.h>

int main() {
    int m[5][4], mai_mat, mai_nota = -1, soma_final = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d %d %d", &m[i][0], &m[i][1], &m[i][2]);
        m[i][3] = m[i][1] + m[i][2];
        soma_final += m[i][3];
        if (m[i][3] > mai_nota) {
            mai_nota = m[i][3];
            mai_mat = m[i][0];
        }
    }
    printf("%d\n%f\n", mai_mat, soma_final / 5.0);
    return 0;
}