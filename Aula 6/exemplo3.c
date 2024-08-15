#include <stdio.h>

int main() {
    //Declaração de variáveis
    char nome[50];
    int idade;
    //Leitura dos dados
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade:");
    scanf("%d", &idade);
    //Conferência Maioridade
    if (idade < 18){
        printf("Olá %s! Você tem %d anos\nMenor de idade.\n", nome, idade);
    }
    else{
        printf("Olá %s! Você tem %d anos\nMaior de idade.\n", nome, idade);
    }
    return 0;
}