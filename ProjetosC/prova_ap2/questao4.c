#include <stdio.h>

void tamanho_Vet(int *tam1, int *tam2){
    printf("Digite o tamanho do primeiro vetor:\t");
    scanf("%d", tam1);
    printf("Digite o tamanho do segundo vetor:\t");
    scanf("%d", tam2);
}

void preencherVet(int tam1, int tam2, int vetA[tam1], int vetB[tam2]){
    printf("Digite o valor do primeiro vetor:\n");
    for(int i = 0; i < tam1; i++){

        printf("%d - ",i+1);
        scanf("%d", &vetA[i]);
    }
    printf("Digite o valor do segundo vetor:\n");
    for(int i = 0; i < tam2; i++){
        printf("%d - ", i+1);
        scanf("%d", &vetB[i]);
    }
}

void printarVet(int tam1, int tam2, int vetA[tam1], int vetB[tam2]){

    //primeiro vetor;
    printf("Valores digitados do primeiro vetor:\n");
    printf("[ ");
    for(int i = 0; i < tam1; i++){
        printf(" %d ", vetA[i]);
    }
    printf(" ]\n");


    //segundo vetor;
    printf("Valores digitados do segundo vetor:\n");
    printf("[ ");
    for(int i = 0; i < tam2; i++){
        printf(" %d ", vetB[i]);
    }
    printf(" ]\n");

}

void interseccaoVetores(int tam1, int tam2, int vetA[tam1], int vetB[tam2]){
    int guarda = 0;
    for(int i = 0; i < tam1; i++){//laço for 1;

        for(int j = 0; j < tam2; j++){//laço for 2;

            if(vetA[i] == vetB[j]){//verifica os numeros diferentes entre os vetores;
                printf("a interseccao dos dois vetores e: %d \n", vetA[i]);
                break;
            }
        }
    }
}

int main(void){

    int tam1, tam2;

    tamanho_Vet(&tam1, &tam2);
    int vetA[tam1], vetB[tam2];
    preencherVet(tam1, tam2, vetA, vetB);
    printarVet(tam1, tam2, vetA, vetB);
    interseccaoVetores(tam1, tam2, vetA, vetB);

    return 0;
}




