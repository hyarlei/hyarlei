#include <stdio.h>
#include <stdlib.h>
//funcao para preencher os valores
void inicializaVet(int tam, int vet[tam]){

    printf("Digite os valores do vetor:\n");
    for(int i=0; i<tam; i++){
        printf("%d - ", i+1);
        scanf("%d", &vet[i]);
    }

}

//funcao para verificar maior elemento do vetor;
void maiorElemen(int tam, int vet[tam]){
    int maior=0;
    //verificar maior vetor;
    maior = vet[0];
    for(int i=1; i<tam; i++){
        //verificar maior elemento do vetor;
        if(vet[i]>maior) maior=vet[i];
    }

    printf("Maior elemento do vetor e =\t%d\n", maior);
}

//funcao para verificar menor elemento do vetor;
void menorElemen(int tam, int vet[tam]){
    int menor = 0;
    //verificar menor vetor;
    menor = vet[0];
    for(int i=1; i<tam; i++){
        //verificar menor vetor;
        if(vet[i]<menor) menor=vet[i];
    }

    printf("Menor elemento do vetor e =\t%d\n", menor);
}


int main()
{//maior e menor elemento do vetor

    int tam=0;
    printf("Digite o tamanho do vetor:\t");
    scanf("%d", &tam);

    int vet[tam];

    //funcao inicializa vetor;
    inicializaVet(tam, vet);
    //funcao maior elemento;
    maiorElemen(tam, vet);
    //funcao menor elemento;
    menorElemen(tam, vet);



    return 0;
}
