#include <stdio.h>

int main(){
    int a, b, c;
    int soma = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    soma = a + b;
    if (soma < c){
        printf("O valor da soma entre A e B (%d + %d = %d) é menor do que o valor de C (%d)", a, b, soma, c);
    }
    else {
        printf("O valor da soma entre A e B (%d + %d = %d) é maior ou igual ao valor de C (%d)", a, b, soma, c);
    }
    printf("\nFIM DO PROGRAMA.");
    return 0;
}
