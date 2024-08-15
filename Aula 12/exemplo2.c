#include <stdio.h>

int main() {
    int contador;

    for (contador=0; contador<10; contador = contador + 1) {
        if (contador % 2 == 0) {
            printf("Valor do contador é %d\n", contador);
        }
    }
printf("Após o fim do laço o  valor do contador é %d\n", contador);

    return 0;
}