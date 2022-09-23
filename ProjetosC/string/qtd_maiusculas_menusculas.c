#include <stdio.h>
#include <string.h>
void inverter_maiusculas_menusculas(char nome[]){
    int tamanho = strlen(nome);
    for(int i = 0; i < tamanho; i++){

        if(nome[i] < 'a'){

            nome[i] = nome[i] + 32;
        }
        else if(nome[i] >= 'a'){

            nome[i] = nome[i] - 32;
        }
    }
    printf("%s\n", nome);
}
int main(){
    char nome[63];
    printf("digite algo: ");
    scanf("%s", nome);
    inverter_maiusculas_menusculas(nome);

    return 0;
}