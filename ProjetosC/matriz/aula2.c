#include <stdio.h>
void inicilizamatriz(int lado, int colunas, float matriz[lado][lado]){

    for(int i = 0; i < lado; i++){


        for(int j = 0; j < colunas; j++){


            printf("digite os elementos da matriz: \n ");
            scanf("%f",&matriz[i][j]);
        }
    }
}
float medialinha(int lado, int colunas, float matriz[lado][lado]){

    int cont = 0;
    
    int guarda = 0;

    float media;

    for(int i = 0; i < lado; i++){

    media = (float)guarda / cont;

        for(int j = 0; j < lado; j++){

            if(matriz[i][j] % 2 == 0 && matriz[i][j] > 0){
            cont++;
            guarda += matriz[i][j];
            }
        }
    }
    
    
    return media;
}
void imprimematriz (int lado, int colunas, float matriz[lado][lado]){

    for(int i = 0; i < lado; i++){


        for(int j = 0; j < colunas; j++){


            printf("%f",matriz[i][j]);

        }
        printf("\n");

    }
}
int main(){

    int lado, colunas;


    printf("digite a quantidade de (linhas) da matriz: ");
    scanf("%d",&lado);

    printf("digite a quantidade de (colunas) da matriz: ");
    scanf("%d",&colunas);

    float matriz[lado][colunas];

    inicilizamatriz(lado, colunas, matriz);
    imprimematriz(lado, colunas, matriz);
    float media = mediamatriz(lado, colunas, matriz);
    printf("o resultado da media e: %.2f",media);

    return 0;
}
