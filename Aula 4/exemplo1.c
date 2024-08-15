#include <stdio.h>

int main() {
    // Declara as variáveis
    int a, b;

    // Armazena os valores digitados pelo usuário nas variáveis
    printf("Digite um valor para a: \n");
    scanf("%d", &a);
    
    printf("Digite outro valor para b: \n");
    scanf("%d", &b);
    // Igual a (==)
    printf("a é igual a b: %d\n", a == b);
    
    // Diferente de (!=)
    printf("a é diferente de b: %d\n", a != b);
    
    // Maior que (>)
    printf("a é maior que b: %d\n", a > b);
    
    // Menor que (<)
    printf("a é menor que b: %d\n", a < b);
    
    // Maior ou igual a (>=)
    printf("a é maior ou igual a b: %d\n", a >= b);
    
    // Menor ou igual a (<=)
    printf("a é menor ou igual a b: %d\n", a <= b);

    return 0;
}