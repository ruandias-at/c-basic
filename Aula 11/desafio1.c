#include <stdio.h>

int main () {

    int total = 0, contador = 0, idade;
    float media;
    char continua = 's';

    while (continua == 's') {
        contador ++;
        printf("--------------------------------\n");
        printf("Digite a idade do %dº usuário: ", contador);
        scanf("%d", &idade);
        printf("Você deseja adicionar mais um usuário? [s/n] ");
        scanf(" %c", &continua);
        total = total + idade;
    }

    media = (float)total / (float)contador;
    printf("\033[7;49;37m--------------------------------");
    printf("\nVocê apresentou %d usuário(s).\nA média de idade foi %.1f anos.\n", contador, media);
    printf("--------------------------------\033[m");
    return 0;
}