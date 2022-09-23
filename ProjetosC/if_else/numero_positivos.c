//faça um programa que leia numeros até que o usuário digite um negativo e quantos numeros positivos foram digitados 2 3 4 1 6 23 5 9 3 -3;
#include <stdio.h>
int main(){
    int numero;
    int guarda = 0;
    int cont = 0;

    for(int i = 0; guarda != 1; i++){
        printf("digite um numero:\n");
        scanf("%d",&numero);
        if(numero < 0){
        guarda = 1;
        }
        else{
            if(numero > 0){
                cont++;
            }   
        }
    }
        printf("\nquantidade de numeros: %d",cont);

    return 0;
}