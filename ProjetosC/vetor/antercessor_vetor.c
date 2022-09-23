#include <stdio.h>
void inserirvetor(int tam, int vetor[tam]){
    
    int guarda;
    int temp;

    for(int i = 0; i < tam; i++){
        scanf("%d", &guarda);
        vetor[i] = guarda;
    }
    for(int i = 0; i < tam; i++){
        
        temp = vetor[i]-1;
        printf("%d \n", temp);
    }
}
void imprimirvetor(int tam, int vetor[tam]){
    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }
}

int main(){

    int tam;
    
    printf("digite o tamanho do vetor: \n");
    scanf("%d",&tam);

    int vetor[tam];

    inserirvetor( tam, vetor );
    imprimirvetor( tam, vetor ); 


    return 0;
}