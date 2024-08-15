#include <stdio.h>

int main () {
    int i, idade;
    int total = 0;
    float media = 0;
    for (i = 0; i < 10; i = i + 1) {
        printf("Digite a idade do %dº usuário: ", i + 1);
        scanf("%d", &idade);
        total = total + idade;
    }
    media = total / 10;
    printf("A média de idade do grupo é %.1f anos.", media);
    return 0;
}