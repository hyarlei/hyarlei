#include <stdio.h>
int main(){

    float vetor[] = {100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.10, 0.05};
    int size = sizeof(vetor) / sizeof(int);
    float tam = 0;
    printf("digite o valor do pagamento: ");
    scanf("%f", &tam);
    for(int i = 0; i < tam; i++){
        if(tam >= vetor[i]){
            int qtd = (int) (tam / vetor[i]);
            if(qtd != 0){
                printf("%d de %.2f\n", qtd, vetor[i]);
                tam -= qtd * vetor[i];
            }
        }
    }
    if(tam > 0.009){
    printf("falta %.2f\n", tam);
    }

    return 0;
}