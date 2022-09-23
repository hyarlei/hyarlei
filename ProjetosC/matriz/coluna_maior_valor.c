#include <stdio.h>
#include <stdlib.h>
void inicializamatriz (int linhas, int colunas, int matriz[linhas][colunas]){

    int maxcont = 0;

    int cont2 = 0;

    int guarda;

    for(int j = 0; j < colunas; j++){


        for(int i = 0; i < linhas; i++){

            printf("digite os elementos da matriz: ");
            scanf("%d",&matriz[j][i]);

        }
    }

            for(int j = 0; j < colunas; j++){


                for(int i = 0; i < linhas; i++){


                 guarda += matriz[i][j]*matriz[i][j];

                if(guarda >= maxcont){
                maxcont = guarda;
                cont2 = j;
            }
        }
        guarda = 0;
    }
    printf("o resultado e: %d\n",cont2);

}
void imprimematriz (int linhas, int colunas, int matriz[linhas][colunas]){
    for(int i = 0; i < linhas; i++){


        for(int j = 0; j < colunas; j++){


            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    int linhas, colunas;

    printf("digite a quantidade de linhas: ");
    scanf("%d",&linhas);

    printf("digite a quantidade de colunas: ");
    scanf("%d",&colunas);

    int matriz [linhas][colunas];

    inicializamatriz(linhas, colunas, matriz);
    imprimematriz(linhas, colunas, matriz);

    return 0; 
}