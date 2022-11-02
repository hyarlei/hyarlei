#include <stdio.h>
int main()
{   
    //Declarando as variaveis
    int linhas, colunas = 1, guarda = 0, soma = 0;

    // printf("digite a quantidade de linhas: ");
    scanf("%d",&linhas);

    // printf("Digite a quantidade de colunas: ");
    // scanf("%d",&colunas);

    //Declarando a matriz
    int matriz [linhas][colunas];

    for(int i = 0; i < linhas; i++){

        for(int j = 0; j < colunas; j++){
        scanf("%d",&guarda);
        matriz [i][j] = guarda;
        soma = soma + guarda;//Realizando a soma dos elementos da matriz
        }
    }
//     printf("a matriz e: \n");
//     for(int i = 0; i < linhas; i++){

//         for(int j = 0;j < colunas; j++){    
//         printf("%d ",matriz[i][1]);
//         }
//         printf("\n");
// }
//Printando a soma
printf("%d",soma);

    return 0;
}