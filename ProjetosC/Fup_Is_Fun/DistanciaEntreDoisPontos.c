#include <stdio.h>
#include <math.h>
int main()
{   
    //declarando as variaveis
    float Xa, Xb, Ya, Yb, distancia, auxA, auxB;
    
    //entrada de dados
    printf("digite o ponto em que se encontra: \n");
    scanf("%f",&Xa);

    //entrada de dados
    printf("digite o ponto em que se encontra: \n");
    scanf("%f",&Ya);

    //entrada de dados
    printf("digite o ponto em que se encontra: \n");
    scanf("%f",&Xb);

    //entrada de dados
    printf("digite o ponto em que se encontra: \n");
    scanf("%f",&Yb);

    //calculando
    auxA = (Xb - Xa);

    auxB = (Yb - Ya);

    distancia = sqrt( pow(auxA,2) + pow(auxB,2) );

    //saida
    printf("a distancia entre os dois pontos sao: %.2f\n",distancia);

    return 0;
}