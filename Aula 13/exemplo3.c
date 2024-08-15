#include <stdio.h>

void bubbleSort(int vetor[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for ( j = 0; j < n; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main () {
    int n, i;
    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os números.\n");
    for (i = 0; i < n; i++) {
        printf("Digite o valor [%d] : ", i);
        scanf("%d", &vetor[i]);
    }
    bubbleSort(vetor, n);
    printf("Vetor ordenado: \n");
    for (i = 0; i < n; i++) {
        printf("%d", vetor[i]);
    }
    printf("\n");
    return 0;
}