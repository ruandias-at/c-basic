#include <stdio.h>

int main () {
    int n, i;
    float soma = 0.0, media;
    printf("Digite o número de elementos: ");
    scanf("%d", &n);
    float vetor[n];
    printf("Digite os números.\n");
    for (i = 0; i < n; i++) {
        printf("Digite o valor da posição [%d] = ", i);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / n;
    printf("A média é %.2f\n", media);    
    return 0;
}