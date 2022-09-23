#include <stdio.h>
void inserirvetor(int tam, int vetor[tam]){
    for(int i=0; i<tam; i++){
        printf("digite os elementos do vetor: ");
        scanf("%d",&vetor[i]);
    }
}
void printarvetor(int tam, int vetor[tam]){
    for(int i = 0; i < tam; i++){
        printf("[%d] ",vetor[i]);
    }
}
void somavetor(int tam, int vetor[tam]){
    int cont = 0;
    int fim = tam - 1;
    for(int i = 0; i < tam / 2; i++){//pegar o 1 vetor na posicao 0 e somar com ultimo vetor na ultima posicao e assim sucessivamente;
        cont = cont + vetor[i] + vetor[fim];
        fim--;
    }
    printf("a soma eh: %d ",cont);
}
int main()
{
    int tam;

    printf("digite o tamanho do vetor: ");
    scanf("%d",& tam);

    int vetor[tam];

    inserirvetor(tam, vetor);
    printarvetor(tam, vetor); 
    printf("\n");
    somavetor(tam, vetor);

    return 0;
}