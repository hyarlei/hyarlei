#include <stdio.h>
void inserirvetor(int tam, float vetor[tam]){

    for(int i = 0; i < tam; i++){

        printf("digite os elementos do vetor: ");
        scanf("%f", &vetor[i]);
    }
}
void ordenarvetor(int tam, float vetor[tam]){

    for(int j = 1; j < tam; j++){

        for(int i = 0; i < tam - 1; i++){

            if(vetor[i] > vetor[i + 1]){
            
            float temp;
            temp = vetor[i];
            vetor[i] = vetor[i + 1];
            vetor[i + 1] = temp;
            }
        }
    }
}
void printarvetor(int tam, float vetor[tam]){

    for(int i = 0; i < tam; i++){

        printf("[%.1f] \n", vetor[i]);
    }
}
float medianavetor(int tam, float vetor[tam]){

    float mediana;
    int a = (tam - 1) / 2;
    int b = a + 1;

    if(tam % 2 != 0){

        mediana = vetor[a];
    }
    else{

        mediana = (vetor[a] + vetor[b]) / 2;
        
    }

    return mediana;
}
int main(){

    int tam;

    printf("digite o tamanho do vetor: ");
    scanf("%d",& tam);

    float vetor[tam];

    inserirvetor(tam, vetor);
    ordenarvetor(tam, vetor);
    printarvetor(tam, vetor);
    float mediana = medianavetor(tam, vetor);
    printf("o resultado da mediana e: %.2f \n", mediana);

    return 0;
}

