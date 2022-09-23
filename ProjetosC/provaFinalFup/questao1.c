#include <stdio.h>
#include <string.h>

void lerNumeros(int n, int v[n]){
    int numeros;
    for(int i = 0; i < n; i++){

    printf("digite os numeros: \n");
    scanf("%d",&numeros);
    v[i] = numeros;
    }
}
void imprime(int n, int v[n]){
    int somapares = 0, impares=0;

    for(int i = 0; i < n; i++){

        if(v[i] % 2 == 0){
            somapares += v[i];
        }
        else{
            impares++;
        }
    } 
        printf("A soma dos pares eh: %d \n", somapares);
        printf("A quant de impares eh: %d \n", impares);
}
int main(){

    int n;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    int v[n];

    lerNumeros(n, v);
    imprime(n, v);

    return 0;
}