#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite um número inteiro para A: ");
    scanf("%d", &a);
    printf("Digite um número inteiro para B: ");
    scanf("%d", &b);
    printf("Digite um número inteiro para C: ");
    scanf("%d", &c);

    int maior, menor;

    maior = a;
    menor = a;
    
    if (b > maior){
        maior = b;
    }
    if (b < menor){
        menor = b;
    }

    if (c > maior){
        maior = c;
    }
    if (c < menor){
        menor = c;
    }

    printf("O menor número apresentado foi %d\n", menor);
    printf("O maior número apresentado foi %d\n", maior);
    printf("FIM DO PROGRAMA!");

    return 0;
}