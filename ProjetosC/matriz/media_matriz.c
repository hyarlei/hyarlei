#include <stdio.h>
void inicilizamatriz(int linhas, int colunas, int matriz[linhas][colunas]){

    for(int i = 0; i < linhas; i++){


        for(int j = 0; j < colunas; j++){


            printf("digite os elementos da matriz: \n ");
            scanf("%d",&matriz[i][j]);
        }
    }
}
float mediamatriz(int linhas, int colunas, int matriz[linhas][colunas]){

    int cont = 0;
    
    int guarda = 0;

    float media;

    for(int i = 0; i < linhas; i++){


        for(int j = 0; j < colunas; j++){


            if(matriz[i][j] % 2 == 0 && matriz[i][j] > 0){
            cont++;
            guarda += matriz[i][j];

            }
        }
    }
    media = (float)guarda / cont;
    
    return media;
}
void imprimematriz (int linhas, int colunas, int matriz[linhas][colunas]){

    for(int i = 0; i < linhas; i++){


        for(int j = 0; j < colunas; j++){


            printf("%d ",matriz[i][j]);

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

    int matriz[linhas][colunas];

    inicilizamatriz(linhas, colunas, matriz);
    imprimematriz(linhas, colunas, matriz);
    float media = mediamatriz(linhas, colunas, matriz);
    printf("o resultado da media e: %.2f",media);

    return 0;
}

