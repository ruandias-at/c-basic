#include <stdio.h>

int main() {
    
    int repetir, valorUsuario;
    int contador = 1;
    int menorValor = 999999;
    
    printf("Quantos valores você quer digitar? ");
    scanf("%d", &repetir);

    while(contador <= repetir) {
        printf("Digite o  %dº valor: ", contador);
        scanf("%d", &valorUsuario);
        if(valorUsuario < menorValor) {
            menorValor = valorUsuario;
        }
        contador++;
    }
    
    printf("O menor valor digitado foi %d\n", menorValor);
    printf("--------FIM DO PROGRAMA--------");
    
    return 0;
}