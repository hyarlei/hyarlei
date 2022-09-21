#include <stdio.h>
int main()
{
    int linhas, colunas, guarda = 0, soma, cont;
    printf("digite o total de linhas: \n");
    scanf("%d",&linhas);

    printf("digite o total de colunas: \n");
    scanf("%d",&colunas);

    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("digite o valor da matriz: ");
            scanf("%d",&cont);
            
            matriz[i][j] = cont;
        }
    }
    for(int i = 0; i < linhas; i++){
        soma = 0;
        for(int j = 0; j < colunas; j++){
            soma = soma + matriz[i][j];
        }
        printf("valor total da linha: %d ",i);
        printf("o total e: %d \n",soma);
    }

    return 0;
}