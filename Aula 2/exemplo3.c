#include <stdio.h>

int main(){
    //Variáveis
    float quebrado = 2.99f;
    double preciso = 0.1;
    long double longopreciso = 0.1L;
    
    //Imprime os conteúdos
    printf("Float: %f\n", quebrado);
    printf("Double: %lf\n", preciso);
    printf("Long Double: %Lf\n", longopreciso);

    return 0; //finaliza o ciclo de execução
}//fim do corpo do main
