#include <stdio.h>
#include <time.h>
#include "insertion.h"

int main() {
        int n, i;
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

        int vetor[n];
        printf("Digite os elementos do vetor:\n");
        for (i = 0; i < n; i++) {
                scanf("%d", &vetor[i]);
        }

        clock_t inicio = clock();

        insertionSort(vetor, n);

        clock_t fim = clock();

        double tempo_execucao = (double)(fim - inicio) / CLOCKS_PER_SEC;

        printf("Vetor ordenado em ordem crescente:\n");
        for (i = 0; i < n; i++) {
                printf("%d ", vetor[i]);

        }

        printf("\nTempo de execução: %.4lf segundos\n", tempo_execucao);

        return 0;
}
