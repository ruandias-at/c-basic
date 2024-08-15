#include <stdio.h>

int main() {

    int repetir, valorUsuario;
    int contador = 0;
    int maiorValor = -999999;
    
    printf("Quantos valores você quer digitar? ");
    scanf("%d", &repetir);

    while(contador < repetir) {
        printf("Digite o valor: ");
        scanf("%d", &valorUsuario);
        if(valorUsuario > maiorValor) {
            maiorValor = valorUsuario;      
        }
        contador++;
    }
    
    printf("O maior valor digitado foi %d\n", maiorValor);
    printf("--------FIM DO PROGRAMA--------");
    
    return 0;
}