#include <stdio.h>
#include <string.h>
void qtdmenusculas(char nome[]){
    int tamanho = strlen(nome);
    int cont = 0;

    for(int i = 0; i < tamanho; i++){
        
        if(nome[i] >= 'a'){
            cont++;
        }
    }
    printf("a quantidade de letras menusculas e: %d \n",cont);
}
int main(){

    char nome[63];
    printf("digite algo: ");
    scanf("%s",nome);
    qtdmenusculas(nome);

    return 0;
}