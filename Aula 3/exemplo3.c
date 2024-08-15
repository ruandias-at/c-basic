#include <stdio.h>// Importa a biblioteca stdio.h
int main() {
    // Declaração de variáveis
    char caractere;
    int n1;
    
    // Exemplo para char
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    printf("Você digitou o caractere: %c\n", caractere);

    // Exemplo para inteiro
    printf("-----AGORA VOU CAPTURAR UM INTEIRO-----");
    printf("Digite um número inteiro: ");
    scanf("%d", &n1);
    printf("Você digitou o número: %d\n", n1);

    
    return 0;
}// Fim do main
