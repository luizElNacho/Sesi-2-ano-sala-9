#include <stdio.h>
#include <stdlib.h>

int main() {
    int h, m, s, duracao;
    int total_seg, h_fim, m_fim, s_fim;
    
    printf("Digite a hora, minuto e segundo de inicio (ex: 14 30 0): ");
    scanf("%d %d %d", &h, &m, &s);
    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);
    
    total_seg = (h * 3600) + (m * 60) + s + duracao;
    
    h_fim = (total_seg / 3600) % 24;
    m_fim = (total_seg % 3600) / 60;
    s_fim = total_seg % 60;
    
    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);
    return 0;
}