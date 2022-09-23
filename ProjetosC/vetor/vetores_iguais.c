#include <stdio.h>
#include <stdlib.h>

void inicializaVet(int tam1, int tam2, int vet1[tam1], int vet2[tam2]){

    printf("Digite os valores do primeiro vetor:\n");
    for(int i=0; i<tam1; i++){
        printf("%d - ", i+1);
        scanf("%d", &vet1[i]);
    }

    printf("Digite os valores do primeiro vetor:\n");
    for(int i=0; i<tam2; i++){
        printf("%d - ", i+1);
        scanf("%d", &vet2[i]);
    }
}

void verificaVetIguais(int tam1, int tam2, int vet1[tam1], int vet2[tam2], int vetIgual){

    //verificar se sao iguais;
        for(int i=0; i<tam1; i++){
        if(vet1[i]==vet2[i])vetIgual=1;
        else{
            vetIgual=0;
            break;
        }
    }

    //printar resultado
    if(vetIgual==1)printf("1");
    else printf("0");

}

int main()
{/* Crie uma função que recebe dois vetores e verifica se um vetor é igual ao
outro. Ela deve retornar 1, caso os vetores sejam iguais e 0, caso sejam
diferentes.*/

    int tam1=0, tam2=0;
    int vetIgual=1;
    printf("Digite o tamanho do primeiro vetor:\t");
    scanf("%d", &tam1);
    printf("Digite o tamanho do segundo vetor:\t");
    scanf("%d", &tam2);

    //verificar se tem mesmo tamanho;
    if(tam1!=tam2){
        printf("0");
        //break;
    }else{

    //inicializa vetor
    int vet1[tam1];
    int vet2[tam2];

    //preencher vetores;
    inicializaVet(tam1, tam2, vet1, vet2);

    //verificar se sao iguais
    verificaVetIguais(tam1, tam2, vet1, vet2, vetIgual);

    }//fim else;


    return 0;
}
