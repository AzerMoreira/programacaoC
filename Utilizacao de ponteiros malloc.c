#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ponteiro;
    ponteiro = (int *)malloc(5 * sizeof(int)); // Aloca memória para um inteiro
    if (ponteiro != NULL) {
        int i;
        for (i = 0; i < 5; i++) {
            ponteiro[i] = i + 1; // Atribui valores aos elementos do vetor
        }
        for (i = 0; i < 5; i++) {
            printf("%d ", ponteiro[i]); // Imprime os valores
        }

        free(ponteiro); // Libera a memória alocada
    } else {
        printf("Erro ao alocar memória.\n");
    }
    return 0;
}