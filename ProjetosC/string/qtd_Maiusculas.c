#include <stdio.h>
#include <string.h>
void qtdmaiusculas(char nome[]){
    int cont = 0;
    int tamanho = strlen(nome);
    for(int i = 0; i < tamanho; i++){

        if(nome[i] < 'a'){
            cont++;
        }
    }
    printf("a quantidade de letras maiusculas e: %d\n", cont);
}
int main(){

    char nome[63];
    printf("digite algo: \n");
    scanf("%s",&nome);
    qtdmaiusculas(nome);

    return 0;
}