#include <stdio.h>

int main () {

    int contador = 0;
    char continua;

    printf("Você deseja rodar o bloco 'While'? [s/n] ");
    scanf("%c", &continua);
    
    while(continua == 's') {
        contador ++;
        printf("\nVocê deseja continuar? [s/n] ");
        scanf(" %c", &continua);
    }

    if (contador == 0) {
        printf("\nO Usuário não executou o laço nenhuma vez.");
    }
    else {
        printf("\nUsuário executou o laço %d vez(es).", contador);
    }
    
    return 0;
}