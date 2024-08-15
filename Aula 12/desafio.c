#include <stdio.h>

int main() {
    int n, numero, maior_numero, i;
    printf("Digite a quantidade de números que serão lidos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numero);
        if (i == 0) {
            maior_numero = numero;
        }
        else if (numero > maior_numero) {
            maior_numero = numero;
        }
    }
    printf("O maior número digitado foi: %d\n", maior_numero);
    return 0;
}