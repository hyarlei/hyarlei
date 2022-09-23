#include <stdio.h>
int main()
{
    int linhas, colunas, guarda = 0, soma = 0;

    printf("digite a quantidade de linhas: ");
    scanf("%d",&linhas);

    printf("digite a quantidade de colunas: ");
    scanf("%d",&colunas);

    int matriz [linhas][colunas];

    for(int i = 0; i < linhas; i++){

        for(int j = 0; j < colunas; j++){
        scanf("%d",&guarda);
        matriz [i][j] = guarda;
        soma = soma + guarda;
        }
    }
    printf("a matriz e: \n");
    for(int i = 0; i < linhas; i++){

        for(int j = 0;j < colunas; j++){    
        printf("%d ",matriz[i][j]);
        }
        printf("\n");
}
printf("o valor da soma e: %d",soma);

    return 0;
}