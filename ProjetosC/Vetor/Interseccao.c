#include <stdio.h>
#include <stdlib.h>
void preencheVetor(int tam1, int tam2, int vet[tam1], int vet2[tam2]){
    printf("Digite o valor do primeiro vetor:\n");
    for(int i=0; i<tam1; i++){
        printf("%d - ",i+1);
        scanf("%d", &vet[i]);
    }
    printf("Digite o valor do segundo vetor:\n");
    for(int i=0; i<tam2; i++){
        printf("%d - ", i+1);
        scanf("%d", &vet2[i]);
    }
}

void verificarInter(int tam1, int tam2, int vet[tam1], int vet2[tam2], int vet3[tam1]){

    //variavel pra verificar se nao numeros repetidos entre os
    //numeros interseccoes;
    int verif=0;
    //variavel para armazenar os valores do vet3;
    int z=0;

    for(int i=0; i<tam1; i++){
        for(int j=0; j<tam2; j++){
            if(vet[i]==vet2[j]){
                verif=0;
                //verificar se ha numeros iguais;
                for(int k=0; k<tam1; k++){
                    if(vet[i]==vet3[k]){
                        verif=1;
                    }
                }
                 //preencher vet3, tem que ficar dentro do primeiro if;
                if(verif==0){
                    vet3[z]=vet[i];
                    z++;
                }
            }
        }
    }

    //printar valores do vet3;
    printf("[ ");
    for(int i=0; i<z; i++){
        printf(" %d ", vet3[i]);
    }
    printf(" ]");

    //ordenar o vetor
    int aux=0;

    for(int i=0; i<z; i++){
        for(int j=i+1; j<z; j++){
            if(vet3[i]>vet3[j]){
                aux = vet3[i];
                vet3[i]=vet3[j];
                vet3[j]=aux;
            }
        }
    }

    //printar vetor ordenado
    printf("[ ");
    for(int i=0; i<z; i++){
        printf(" %d ", vet3[i]);
    }
    printf(" ]");
}

int main()
{
    int tam1, tam2;
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tam1);
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tam2);

    int vet[tam1], vet2[tam2], vet3[tam1];
    //funcao para preencher vetores;
    preencheVetor(tam1, tam2, vet, vet2);
    //verificar se ha alguma interseccao entre os vetores
    verificarInter(tam1, tam2, vet, vet2, vet3);

    return 0;
}
