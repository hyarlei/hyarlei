#include <stdio.h>

void iniciaVetor(int vetor[], int tamanho)
{
     for(int i = 0; i < tamanho; i++){
        printf("insira o valor do vetor na posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}


void somaVetor(int vetor[], int tamanho)
{
    int m = 0;

    
}


void imprimeVetor(int vetor[], int tamanho)
{
     printf("[");

    for(int j = 0; j < tamanho; j++)
    {
        printf(" %d ", vetor[j]);
    }

    printf("]\n");
}


int main(void)
{
    int tamanho;
    printf("tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor [tamanho];

    iniciaVetor(vetor, tamanho);
    imprimeVetor(vetor, tamanho);

    return 0;
}