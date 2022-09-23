//escrever um programa para somar duas matrizes ordem 3 x 2.a soma das matrizes
// a e b deve ser armazenada na matriz c.
#include <stdio.h>
int main(){

    int matrizA[3][2], matrizB[3][2], matrizC[3][2], i, j, guarda = 0;

    //lendo matriz A;
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 2; j++){
            printf("digite os elementos da matriz (A): ");
            scanf("%d",&matrizA[i][j]);
    }
}
    //lendo matriz B;
        for(int i = 0; i < 3; i++){

            for(int j = 0; j < 2; j++){
                printf("digite os elementos da matriz (B): ");
                scanf("%d",&matrizB[i][j]);

    }
}
    //soma das matrizes
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 2; j++){
           matrizC[i][j] = matrizA[i][j] + matrizB[i][j];

    }
}

            //matriz C
            for(int i = 0; i < 3; i++){

                for(int j = 0; j < 2; j++){
                    printf("o soma da matriz vai ser: %d \n",matrizC[i][j]);

        }
        printf("\n");
    }

    return 0;
}