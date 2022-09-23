#include <stdio.h>
void inicilizamatriz(int linhas, int colunas, float matriz[linhas][linhas]){

    for(int i = 0; i < linhas; i++){


        for(int j = 0; j < colunas; j++){


            printf("digite os elementos da matriz: \n ");
            scanf("%f",&matriz[i][j]);
        }
    }
}
void mediaLinha(int linhas, int colunas, float matriz[linhas][linhas]){

    int guarda = 0;
    float media;

    for(int i = 0; i < linhas; i++){
        
        for(int j = 0; j < colunas; j++){

            guarda += matriz[i][j];
            }
            media = (float)guarda / linhas;
            printf("o resultado da media e: %.2f \n", media);
            guarda = 0;
        }
        
    }
    
void imprimematriz (int linhas, int colunas, float  matriz[linhas][linhas]){

    for(int i = 0; i < linhas; i++){


        for(int j = 0; j < colunas; j++){


            printf("%.0f ",matriz[i][j]);

        }
        printf("\n");
    }
}
int main(){

    int linhas, colunas;


    printf("digite a quantidade de (linhas) da matriz: ");
    scanf("%d",&linhas);

    printf("digite a quantidade de (colunas) da matriz: ");
    scanf("%d",&colunas);

    float matriz[linhas][colunas];

    inicilizamatriz(linhas, colunas, matriz);
    imprimematriz(linhas, colunas, matriz);
    mediaLinha(linhas, colunas, matriz);
    //printf("o resultado da media e: %.2f",media);

    return 0;
}
