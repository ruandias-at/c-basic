#include <stdio.h>
#include <ctype.h>

int main() {
    int idade;
    char categoria;
    
    // Solicita a idade ao usuário
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    // Verifica se a idade é maior que 18
    if (idade > 18) {
        // Solicitar a categoria da CNH ao usuário
        printf("Qual a categoria da sua CNH (A, B, C, D, E)? ");
        scanf(" %c", &categoria);
        
        // Transforma a categoria em maiúscula caso seja digitada em minúsculo
        categoria = toupper(categoria);
        
        // Informa o que a categoria permite dirigir
        if (categoria == 'A') {
            printf("Você pode dirigir motocicletas.\n");
        } else if (categoria == 'B') {
            printf("Você pode dirigir carros e pick-ups.\n");
        } else if (categoria == 'C') {
            printf("Você pode dirigir caminhões e caminhonetes.\n");
        } else if (categoria == 'D') {
            printf("Você pode dirigir ônibus e vans de alto porte.\n");
        } else if (categoria == 'E') {
            printf("Você pode dirigir carretas duplas e caminhões sanfonados.\n");
        } else {
            printf("Categoria inválida.\n");
        }
    } else {
        printf("Você não precisa informar a categoria da CNH.\n");
    }
    
    return 0;
}