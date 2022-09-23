#include <stdio.h>
void inserirvetor(int tam, int vetor[tam]){

    for(int i = 0; i < tam; i++){

    printf("digite os elementos do vetor: ");
    scanf("%d",&vetor[i]);
    }
}
void verifificarvetor(int tam, int vetor[tam]){
    int num = 0;
    int cont = 0;
    int guarda = 0;

    printf("Digite o numero que deseja saber quantas vezes ele aparece no vetor: \t");
    scanf("%d", &num);

    for(int i = 0; i < tam; i++){
        if(num == vetor[i]){
            cont = 1;
            guarda++;
            break;
        }
        if(guarda) printf("o numero aparece %d vezes");
    }
}

int main(){

    int tam;

    printf("digite o tamanho do vetor: ");
    scanf("%d",& tam);

    int vetor[tam];

    inserirvetor(tam, vetor);
    verifificarvetor(tam, vetor);

    return 0;
}