#include <stdio.h>

void inicializarVetor(int vetor[],int tam){
    for(int i = 0; i < tam; i++){

        printf("digite os elementos do vetor: ");
        scanf("%d",&vetor[i]);
    }
}

int verificarOrdenado(int vetor[], int tam){
    for(int i = 0; i < tam - 1; i++){

        if(vetor[i] > vetor[i + 1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int tam;

    printf("digite o tamanho do vetor: ");
    scanf("%d",&tam);
    int vetor[tam];
    inicializarVetor(vetor, tam);
    if(verificarOrdenado(vetor,tam)) printf("O Vetor esta Ordenado!!\n");
    else printf("vetor nao esta ordenado!");

    return 0;
}