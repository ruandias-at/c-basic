#include <stdio.h>
int main(){
    int a, b, c;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a == b){
        c = a + b;
        printf("A é igual à B, a soma dos valores é %d", c);
    }
    else {
        c = a * b;
        printf("A é diferente de B, a multiplicação dos valores é %d", c);
    }


    return 0;
}