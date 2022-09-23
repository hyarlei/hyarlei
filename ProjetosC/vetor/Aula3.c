#include <stdio.h>
int main()
{
    int tam;
    int a;

   // printf("digite o tamanho: ");
    scanf("%d",&tam);

    int vetor[tam];

    for(int i = 0; i < tam; i++){
        //printf("digite o tanto de gentes na fila: \n");
        scanf("%d",&a);
        vetor[i] = a;
    }
    for(int i = 0; i < tam; i++){
        if(vetor[i] % 2 != 0){
            printf("%d", vetor[i]);
        }
    }
    printf("\n");
    for(int i = 0; i < tam; i++){
        if(vetor[i] % 2 == 0){
            printf("%d",vetor[i]);
        }
    }

    return 0;
}