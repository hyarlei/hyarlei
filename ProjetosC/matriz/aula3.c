#include <stdio.h>
void inicializamatriz (int linhas, int colunas, int matriz[linhas][colunas]){

    int guarda = 0;

    for(int i = 0; i < linhas; i++){


        for(int j = 0; j < colunas; j++){

            printf("digite o os elementos da matriz: \n ");
            scanf("%d",&guarda);

            guarda = guarda * 3;

            matriz[i][j] = guarda;
        }
    }
}
void imprimematriz(int linhas, int colunas,int matriz[linhas][colunas]){

    printf(" matriz digitada: \n");

    for(int i = 0; i < linhas; i++){


        for(int j = 0; j < colunas; j++){


            printf("%d ", matriz[i][j]);

        }
        printf("\n");

    }
}
int main(){
    int linhas, colunas;

    printf("digite o numero de linhas da matriz: ");
    scanf("%d",&linhas);

    printf("digite o numero de colunas da matriz: ");
    scanf("%d",&colunas);

    int matriz [linhas][colunas];

    inicializamatriz(linhas, colunas, matriz);
    imprimematriz(linhas, colunas, matriz);

    return 0;
}




