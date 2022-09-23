#include <stdio.h>

typedef struct{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
}aluno;
float mediaGeral( aluno aluno){
    float media = (aluno .nota1 + aluno .nota2);
}
void imprimirAluno(aluno aluno){
    printf("-----------aluno---------------");
    printf("matricula: %d\n",aluno.matricula);
    printf("nome: %d\n",aluno.nome);
    printf("nota1: %f\n",aluno.nota1);
    printf("nota2: %f\n",aluno.nota2);
    printf("media geral %f \n",mediaGeral);

    if( meidaGeral(aluno ) >= 6){
        printf("resultado aluno aprovado \n");
    }
    else{
        printf("resultado: aluno reprovado \n");
    }
    printf("-------------------------------");
}
void leraluno(aluno listaAlunos){
    aluno aluno;

    printf("lendo as informacoes sobre o aluno: \n");

    printf("digite a matricula do aluno: \n");
    scanf("%d",&aluno.matricula);

    printf("digite o nome do aluno: \n");
    scanf("%s",&aluno.nome);

    printf("digite a nota 1 do aluno: \n");
    scanf("%s",&aluno.nota1);

    printf("digite a nota 2 do aluno: \n");
    scanf("%s",&aluno.nota2);

    return aluno;

}
aluno maiorMediaGeral(aluno listaAluno[], int qtdAlunos){
    aluno alunoMaiorMedia( );
}
void inicializarListaAlunos(aluno listaAlunos[], int qtdAlunos){
    for( int i = 0; i < qtdAlunos; i++ ){

        listaAlunos[i] = lerAluno();
    }
}
void imprimirListaAlunos(aluno ListaAlunos[], int qtdAlunos){
    for(int i = 0; i < qtdAlunos; i++ ){

        imprimirAlunos = (listaAlunos[i]);
    }
}
int main(){

    int qtdAlunos;
    aluno listaAlunos [qtdAlunos];

    inicializarListaAlunos(aluno ListaAlunos, );

}