#include <stdio.h>

void inicializarVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){

        printf("Digite o valor da posicao do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);

    }
} 


int qtdVetor(int vetor[], int tam, int numero){
    int cont = 0;
    printf("Qual o valor do numero: ");
    scanf("%d", &numero);
    for(int i = 0; i < tam; i++){ 

        if(vetor[i] == numero){

            cont++;
            
        }
    }
    return cont;
    
} 

int verificarOrdenado(int vetor[],int tam){
    for(int i = 0; i < tam-1; i++){

        if(vetor[i] > vetor[i + 1]){

            return 0;
        }
    }
    return 1;
}


int main(){
    int tam;
    int numero;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    inicializarVetor(vetor, tam);
    if(verificarOrdenado(vetor,tam)) printf("O Vetor esta Ordenado!!\n");
    else printf("O vetor nao esta ordenado\n");
    int cont = qtdVetor(vetor, tam, numero);
    printf("o vetor aparece %d vezes.",cont);

    return 0;
}

