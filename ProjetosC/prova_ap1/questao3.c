#include <stdio.h>
int main(){
    int numero = 0;

    printf("digite um numero: ");
    scanf("%d", &numero);

    for(int i= 1; i <= numero /2; i++){
        for(int j= 1; j <= numero; j++){
            if(i * j == numero){
                printf("[%d, %d] \n", i, j);
            }
        }
    }
    return 0;
}