#include <stdio.h>

void inicializaMatriz(int linhas, int colunas, int matriz[linhas][colunas]){

    printf("Digite os elementos da matriz \n  ");

    for(int i = 0; i < linhas; i++){

        for(int j = 0; j < colunas; j++){

            printf("Digite o elemento da linha %d e na coluna %d: ",i+1,j+1);
            scanf("%d", &matriz[i][j]);

        }

        printf("\n");
    }
}

 void imprimeMatriz(int linhas, int colunas, int matriz[linhas][colunas]){

    printf("Matriz digitada. \n");

    for(int i=0; i<linhas; i++){


        for(int j=0; j<colunas; j++){



            printf(" [%d] ", matriz[i][j]);
        }

        printf("\n");
    }
}

int main()
{
        int linhas, colunas;

        printf("Digite o numero de linhas da matriz: ");
        scanf("%d", &linhas);

        printf("Digite o numero de colunas da matriz: ");
        scanf("%d", &colunas);

        int matriz [linhas][colunas];

        inicializaMatriz(linhas, colunas, matriz);
        imprimeMatriz(linhas, colunas, matriz);

return 0;

}