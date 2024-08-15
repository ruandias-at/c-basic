#include <stdio.h>

int main() {
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota > 10 || nota < 0){
        printf("\033[31mDIGITE UMA NOTA DE 0 À 10!!\033[m");
    }
    else if (nota >= 9){
        printf("SS \nSua nota é %.1f", nota);
    }
    else if (nota >= 7){
        printf("MS \nSua nota é %.1f", nota);
    }
    else if (nota >= 5){
        printf("MM \nSua nota é %.1f", nota);
    }
    else if (nota >= 3){
        printf("MI \nSua nota é %.1f", nota);
    }
    else if (nota > 0){
        printf("II \nSua nota é %.1f", nota);
    }
    else {
        printf("SR \nSua nota é %f.1", nota);
    }
    return 0;
}