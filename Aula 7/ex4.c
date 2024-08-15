#include <stdio.h>

int main() {
    int valor;
    printf("Digite um número: ");
    scanf("%d", &valor);

    if (valor >= 0){
        printf("O dobro de %d é %d", valor, valor * 2);
    }
    else {
        printf("O triplo de %d é %d", valor, valor * 3);
    }
    return 0;
}