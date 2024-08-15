#include <stdio.h>

int main() {
    char nome[30];
    float nota1, nota2, media;
    int res;
    do {
        printf("Digite o nome: ");
        scanf("%s", nome);
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite 1 para adicionar outro aluno ou 0 para parar: ");
        scanf("%d", &res);
        media = (nota1 + nota2) / 2;
        printf("A média do aluno %s foi %.2f.\n", nome, media);
    } while (res == 1);

    printf("FIM DO PROGRAMA");

    return 0;
}