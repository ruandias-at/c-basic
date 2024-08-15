#include <stdio.h>

int main() {
    float salario, imposto;
    //Recebe o salário do usuário
    printf("Digite o salário mensal em reais: ");
    scanf("%f", &salario);
    //Calcula o valor do Imposto de acordo com o salário
    if(salario <= 2259.2){
        imposto = 0;
    }
    if (salario > 2259.2 && salario <= 2826.65){
        imposto = salario * 0.075;
    }
    if (salario > 2826.65 && salario <= 3751.05){
        imposto = salario * 0.15;
    }    
    if (salario > 3751.05 && salario <= 4664.68){
        imposto = salario * 0.225;
    }
    if (salario > 4664.68){
        imposto = salario * 0.275;
    }
    //Exibe o imposto à pagar
    printf("Seu salário é R$ %.2f\nVocê terá que pagar R$ %.2f de imposto semestral\nVocê terá que pagar R$ %.2f de imposto anual", salario, imposto, imposto * 12);
    return 0;
}