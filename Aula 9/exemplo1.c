#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de idade \n%d anos", idade);
    }
    else if (idade > 14) {
        printf("Adolescente \n%d anos", idade);
    }
    else if (idade > 11) {
        printf("Transição para adolescente \n%d anos", idade);
    }
    else {
        if (idade <= 3) {
            printf("Bebê \n%d anos", idade);
        }
        else{
            printf("Criança \n%d anos", idade);
        }
    }
    return 0;
}