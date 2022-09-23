#include <stdio.h>
int main()
{
    int linhas, colunas, guarda = 0;

    printf("digite a quantidade de linhas: ");
    scanf("%d",&linhas);

    printf("digite a quantidade de colunas ");
    scanf("%d",&colunas);

    int matriz [linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("digite os elementos da matriz: ");
            scanf("%d",&guarda);
            matriz [i][j] = guarda;
        }
    }
    printf("a matriz eh: \n");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}