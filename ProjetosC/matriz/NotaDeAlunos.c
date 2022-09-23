#include <stdio.h>
int main()
{
    const int bimestresAnuais = {4};
    const int numerosDeAlunos = {4};

    float notasAlunos[numerosDeAlunos] [bimestresAnuais] = {0};
    float mediaAlunos[numerosDeAlunos] = {0};

    float media = 0;

    printf("digite as 4 notas do aluno: \n");

    for(int alunos = 0; alunos < numerosDeAlunos; alunos++){
        for(int notas = 0; notas < bimestresAnuais; notas++){
            scanf("%f",&notasAlunos[alunos][notas]);
            media += notasAlunos[alunos][notas];
        }
        mediaAlunos[alunos] = media / bimestresAnuais;
        media = 0;
        printf("digite as notas do aluno %d: \n",alunos + 2);

    }
    for(int alunos = 0; alunos < numerosDeAlunos; alunos++){
        printf("a nota do aluno %d eh: %.2f \n",alunos + 2, mediaAlunos[alunos]);
    }

    return 0;
}