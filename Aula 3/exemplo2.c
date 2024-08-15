#include <stdio.h>// Importa a biblioteca stdio.h

int main() {// Ínicio do main
    //Operadores aritméticos:
    int soma = 5 + 3;
    int subtracao = 7 - 4;
    int multiplicacao = 2 * 6;
    float divisao = 8.0 / 2.0;
    int modulo = 7 % 3;

    //Exibindo os resultados:
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);//.2f para imprimir o a variável float com 2 casa decimais
    printf("Módulo: %d\n", modulo);

    return 0;
}// Fim do main