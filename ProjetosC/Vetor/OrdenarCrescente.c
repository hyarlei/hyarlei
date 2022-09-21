#include <stdio.h>
void ordenarvetor(int tam, int vetor[tam]){

    for(int j = 1; j < tam; j++){

        for(int i = 0; i < tam - 1; i++){

            if(vetor[i] < vetor[i + 1]){

                int temp;
                temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
            }
        }
    }
}
void inserirvetor(int tam, int vetor[tam]){

    for(int i = 0; i < tam; i++){

        printf("digite os valores do vetor: \n");
        scanf("%d", &vetor[i]);
    }
}
void printarvetor(int tam, int vetor[tam]){

    for(int i = 0; i < tam; i++){

        printf("%d ",vetor[i]);
    }
}
int main()
{
    int tam;

    printf("digite o tamanho do vetor: \n");
    scanf("%d", &tam);

    int vetor[tam];

    inserirvetor(tam, vetor);
    ordenarvetor(tam, vetor);
    printarvetor(tam, vetor);


    return 0;

}