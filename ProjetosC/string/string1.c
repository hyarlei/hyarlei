#include <stdio.h>
#include <string.h>
void qtd_maiusculas(char nome[]){
    int tamanho = strlen(nome);
    int cont = 0;
    for(int i = 0; i < tamanho; i++){

        if(nome[i] < 'a'){
            cont++;
        }
    }
    printf("a quantidade de letras maiusculas e: %d \n", cont);
}
void qtd_menusculas(char nome[]){
    int tamanho = strlen(nome);
    int cont = 0;
    for(int i = 0; i < tamanho; i++){

        if(nome[i] >= 'a'){
            cont++;
        }
    }
    printf("a quantidade de letras menusculas e: %d \n", cont);
}
void inverter_maiusculas(char nome[]){
    int tamanho = strlen(nome);
    for(int i = 0; i < tamanho; i++){

        if(nome[i] < 'a'){

            nome[i] = nome[i] + 32;
        }
    }
    printf("%s \n", nome);
}
void inverter_menusculas(char nome[]){
    int tamanho = strlen(nome);
    for(int i = 0; i < tamanho; i++){

        if(nome[i] >= 'a'){

            nome[i] = nome[i] - 32;
        }
    }
    printf("%s \n", nome);
}
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
    printf("%s \n", nome);
}
int main(){

    char nome[63];
    int opcao;
    printf("digite algo: ");
    scanf("%s", nome);
    do{
        printf("digite 1: para a opcao de indentificar a quantidade de letras maiusculas \n");
        printf("digite 2: para a opcao de indentificar a quantidade de letras menusculas \n");
        printf("digite 3: para a opcao de inverter letras maiusculas \n");
        printf("digite 4: para a opcao de inverter letras menusculas \n");
        printf("digite 5: para a opcao de inverter letras maiusculas e menusculas \n");
        printf("digite 6: sair \n");
        scanf("%d", &opcao);
        if(opcao == 1){
            qtd_maiusculas(nome);
        }
        else if(opcao == 2){
            qtd_menusculas(nome);
        }
        else if(opcao == 3){
            inverter_maiusculas(nome);
        }
        else if(opcao == 4){
            inverter_menusculas(nome);
        }
        else if(opcao == 5){
            inverter_maiusculas_menusculas(nome);
        }
        else{
            printf("sair");
        }
    }while(opcao != 6);
    
    return 0;
}
