#include <stdio.h>
int main()
{
    float media = 0;
    float notas [5] = {0};
    float total = 0;

    printf("digite as 5 notas do aluno: \n");

    for(int i = 0; i < 5; i++)
    scanf("%f",&notas[i]);
    for(int i = 0; i < 5; i++)
    total += notas[i];

    media = total / 5;

    printf("a media do aluno e : %.2f \n",media);

    return 0 ;
}
