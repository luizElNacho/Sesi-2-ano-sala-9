#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_seg, h, m, s;
    
    printf("Digite o valor em segundos: ");
    scanf("%d", &total_seg);
    
    h = total_seg / 3600;
    m = (total_seg % 3600) / 60;
    s = total_seg % 60;
    
    printf("%dh %dmin %ds\n", h, m, s);
    return 0;
}