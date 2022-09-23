#include <stdio.h>
#include <stdlib.h>
void tamanho_vet (int tam1, int tam2, int vet1, int vet2){

    //definicao do tamanho do vetor
    printf("digite o tamanho do primeiro vetor: \n");
    scanf("%d",&tam1);

    printf("digite o tamanho do segundo vetor: \n");
    scanf("%d",&tam2);

    int vet14[tam1];
    int vet23[tam2];

    povoaramatriz(tam1, tam2, vet1, vet2);

}
void povoaramatriz(int tam1, int tam2, int vet1[tam1], int vet2[tam2]){

    printf("digite os elementos do primeiro vetor: ");
    for(int i = 0; i < tam1; i++){
        scanf("%d",&vet1[i]);
    }
    printf("digite os elementos do segundo vetor: ");
    for(int i = 0; i < tam2; i++){
        scanf("%d",&vet2[i]);
    }

    //funcao para verificar a interseccao entre os dois vetores;
    verificainter(tam1, tam2, vet1[tam1], vet2[tam2]);

}
//funcao que verifica as interseccoes
void verificainter(int tam1, int tam2, int vet1[tam1], int vet2[tam2]){
    
    int vetinter = 0;
    int vet3[tam1];
    int z = 0;

    for(int i = 0; i < tam1; i++){
        for(int j = 0; j < tam2; j++){
            if(vet1[i] == vet2[j]){
                vetinter = 1;
                for(int k = 0; k < tam1; k++){
                    if(vet1[i] == vet3[k])vetinter = 0;
                }
                if(vetinter == 1){
                    vet3[z] = vet1[i];
                    z++;
                }
            }
        }
    }

    //funcao para printar os vetores;
    imprimevet(tam1, tam2, z, vet1[tam1], vet2[tam2], vet3[z]);
}
void imprimevet(int tam1, int tam2, int z, int vet1[tam1], int vet2[tam2], int vet3[z]){
    
    //primeiro vetor;
    printf("valores digitados do primeiro vetor: \n");
    printf("[");
    for(int i = 0; i < tam1; i++){
        printf("%d ",vet1[i]);
    }
    printf("]");


    //segundo vetor;
    printf("valores digitados do segundo vetor: \n");
    printf("[");
    for(int i = 0; i < tam2; i++){
        printf("%d", vet2[i]);
    }
    printf("]");

        //vetor interseccao;
        printf("valores que se repetem nos dois vetores: \n");
        printf("[");
        for(int i = 0; i < z; z++){
            printf("%d ", vet3[i]);
        }
        printf("]");

}

int main()
{//vetor interseccao refeito;
    
    int tam1 = 0, tam2 = 0, vet1 = 0, vet2 = 0;
    tamanho_vet(tam1, tam2, vet1, vet2);
    /*povoaramatriz(tam1, tam2, vet1, vet2);
    verificainter(tam1, tam2, vet1, vet2);
    imprimevet(tam1, tam2, vet1, vet2);
    */
    return 0;
}