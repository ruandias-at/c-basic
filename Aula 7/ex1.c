#include <stdio.h>

int main(){
    double saldo = 10000;
    float saque;
    
    printf("Digite o valor desejado do saque: ");
    scanf("%f", &saque);

    if (saque > saldo){
        printf("Saldo insuficiente!\nSeu saldo atual é de apenas: R$%.2f", saldo);
    }
    else {
        printf("Saque realizado no valor de R$%.2f!\nSaldo restante: R$%.2f\nVolte Sempre!", saque, saldo-saque);
    }
    
    return 0;
}
