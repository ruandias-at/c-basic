#include <stdio.h>

int main () {
    int n, i;
    printf("Digite o número de elementos: ");
    scanf("%d", &n);
    int arrayNumber[n];
    printf("DIgite os números.");
    for (i = 0; i < n; i++) {
        printf("Digite o valor da posição [%d = ", i);
        scanf("%d", &arrayNumber[i]);
    }
    int maior = arrayNumber[0];
    int menor = arrayNumber[0];
    for (i = 1; i < n; i++) {
        if (arrayNumber[i] > maior) {
            maior = arrayNumber[i];
        }
        if (arrayNumber[i] < menor) {
            menor = arrayNumber[i];
        }
    }
    printf("O menor valor digitado foi %d\n", menor);
    printf("O maior valor digitado foi %d\n", maior);
    printf("Fim do programa")
    return 0;
}