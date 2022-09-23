#include <stdio.h>
#include <stdlib.h>

//funcao preencher o vetor
void incializa_vet(int tam, int vet[tam]){

    //inicializa vetor
    printf("Digite os valores dos vetor:\n");
    for(int i=0; i<tam; i++){
        printf("%d - ", i+1);//so para formatacao dos numeros;
        scanf("%d", &vet[i]);
    }

}

//funcao verifica quantas vezes o vetor aparece
void verifica_vet(int tam, int vet[tam]){

    //verificar se o numero aparece na funcao e quantas vezes ele se repete;
    int num=0;
    int cont=0;
    printf("Digite o numero que deseja saber quantas vezes ele aparece no vetor: \t");
    scanf("%d", &num);

    for(int i=0; i<tam; i++){
        if(num==vet[i])
        cont++;
    }

    printf("O numero aparece %d vezes no vetor", cont);

}

int main()
{// Faça uma função que recebe um vetor,
//o tamanho desse vetor e um número inteiro.
//Sua função deve retornar quantas vezes esse número aparece no vetor.

    int tam=0;

    printf("Digite o tamanho do vetor:\t");
    scanf("%d", &tam);

    int vet[tam];

    //funcao para preencher o vetor
    incializa_vet(tam, vet);

    //funcao verifica se o vetor se repete;
    verifica_vet(tam, vet);


    return 0;
}
