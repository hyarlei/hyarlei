#include <stdio.h>
#include <math.h>
int main()
{
    float velocidade, tempo, consumo, distancia, litros;
    float desempenho = 0;

    printf("digite a velocidade em km/h:");
    scanf("%f",&velocidade);

    printf("digite o tempo percorrido em minutos: \n");
    scanf("%f",&tempo);

    printf("digite o consumo do carro em litros: \n");
    scanf("%f",&consumo);

    distancia = velocidade * tempo/60;

    desempenho = distancia / consumo;

    printf("o desempenho do motor em km/l e: %.2f \n",desempenho);



    return 0;

}