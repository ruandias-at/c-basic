#include <stdio.h>

int main()
{
    int idade;
    printf("Digite o valor da idade:");
    scanf("%d", &idade);
    
    if(idade == 12){
        printf("Idade = %d, Igual a 12\n", idade);
    }
    if(idade <= 12){
        printf("Idade = %d, Menor ou igual a 12\n", idade);
    }
    if(idade < 12){
        printf("Idade = %d, Menor que 12\n", idade);
    }
    if(idade > 12){
        printf("Idade = %d, Maior que 12\n", idade);
    }
    return 0;
}

