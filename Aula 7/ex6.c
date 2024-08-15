#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("CALCULADOR DE IMC\n");
    printf("Digite o seu peso em Kg: ");
    scanf("%f", &peso);
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    if (imc <= 18.5) {
        printf("Você está abaixo do peso!");
    }
    else if (18.5 < imc && imc <= 25) {
        printf("Você está com o peso normal.");
    }
    else if (25 < imc && imc <= 30) {
        printf("Você está acima do peso.");
    }
    else {
        printf("Você está obeso!");
    }

    return 0;
}