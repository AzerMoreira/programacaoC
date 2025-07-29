#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ponteiro;
    ponteiro = (int*) calloc(5, sizeof(int)); // Aloca memória para um inteiro

    if (ponteiro != NULL) { //Verifica se a alocacao foi bem-sucedida
        int i;
            for (i = 0; i < 5; i++) {
            printf("%d ", ponteiro[i]); // Imprime os valores
        }

        free(ponteiro); // Libera a memória alocada
    } else {
        printf("Erro ao alocar memória.\n");
    }
    return 0;
}