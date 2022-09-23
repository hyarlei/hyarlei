#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nome[50];
    float n1;
    float n2;
    float n3;
}Aluno;

void inicializaAluno(Aluno* lista, int qtd){
    for(int i=0;i<qtd;i++){
        lista[i].matricula = -1;
    }
}

int menu(){
    int opc;
    printf("1 - Inserir alunos \n");
    printf("2 - Mostrar maior nota da 1a prova \n");
    printf("3 - Mostrar maior media geral individual \n");
    printf("4 - Mostrar menor media geral individual \n");
    printf("5 - Resultado geral \n");
    printf("6 - Sair \n");
    scanf("%d", &opc);
    return opc;
}

Aluno lerAluno(){
    Aluno a;
    printf("Matricula = ");scanf("%d", &a.matricula);
    printf("Nome = ");scanf(" %[^\n]s", a.nome);
    printf("Nota da 1a prova = ");scanf("%f", &a.n1);
    printf("Nota da 2a prova = ");scanf("%f", &a.n2);
    printf("Nota da 3a prova = ");scanf("%f", &a.n3);
    return a;
}

void printarAluno(Aluno a){
    printf("Matricula = %d \n", a.matricula);
    printf("Nome = %s \n", a.nome);
    printf("Nota da 1a prova = %.2f \n", a.n1);
    printf("Nota da 2a prova = %.2f \n", a.n2);
    printf("Nota da 3a prova = %.2f \n", a.n3);
}

int inserirAluno(Aluno* lista, int qtd){
    int inseriu = 0;
    for(int i=0;i<qtd;i++){
        if(lista[i].matricula==-1){
            lista[i] = lerAluno();
            inseriu = 1;
            //break;
        }
    }
    return inseriu;
}

int maiorNotaPrimeiraProva(Aluno* lista, int qtd){
        Aluno maior;
        int encontou = 0;
        maior.n1 = 0;
        for(int i=0;i<qtd;i++){
            if(lista[i].n1 > maior.n1 && lista[i].matricula!=-1){
                maior = lista[i];
                encontou = 1;
            }
        }
    if(encontou==1)printarAluno(maior);
    return encontou;
}

float mediaAluno(Aluno a){
    float media = (a.n1 + a.n2 + a.n3)/3;
    return media;
}

int maiorMediaGeral(Aluno* lista,int qtd){
    int achou = 0;
    Aluno alunoMaiorMedia = lista[0];
    for(int i=0;i<qtd;i++){
        if((mediaAluno(lista[i])) > (mediaAluno(alunoMaiorMedia))){
            alunoMaiorMedia = lista[i];
            achou = 1;
        }
    }
    printarAluno(alunoMaiorMedia);
    return achou;
}

int menorMediaGeral(Aluno* lista, int qtd){
    Aluno alunoMenorMedia = lista[0];
    int achou = 0;
    for(int i=0;i<qtd;i++){
        if(mediaAluno(lista[i]) < mediaAluno(alunoMenorMedia)){
            alunoMenorMedia = lista[i];
            achou = 1;
        }
    }
    printarAluno(alunoMenorMedia);
    return achou;
}

void resultado(Aluno* lista, int qtd){
    Aluno aprovado;
    Aluno reprovado;
    int resultado;
    for(int i=0;i<qtd;i++){
        if(mediaAluno(lista[i])>=6.0 && mediaAluno(lista[i])<=10.0){
            aprovado = lista[i];
            printarAluno(aprovado);
            printf("\nAluno Aprovado!\n");
        }else if(mediaAluno(lista[i])>=0.0 && mediaAluno(lista[i])<6.0){
            reprovado = lista[i];
            printarAluno(reprovado);
            printf("\nAluno Reprovado!\n");
        }
    }
}

int main(){
    int qtd = 3;
    Aluno lista[qtd];
    int opc = 0;
    inicializaAluno(lista, qtd);

    do{
        printf("\n-------------GERENCIAR ALUNOS----------------\n\n");
        opc = menu();
        switch(opc){
            case 1:
            //{opc;} pra declarar variavel dentro do switch case;
                printf("\n-------------------INSERINDO ALUNO----------------\n");
                int inseriu = inserirAluno(lista, qtd);
                    if(inseriu==1)printf("\n Aluno inserido com sucesso! \n\n");
                    else printf("\n A lista esta cheia! \n\n");
                break;
            case 2:
                printf("\n----------------MAIOR NOTA NA 1a PROVA-------------\n");
                int encontou = maiorNotaPrimeiraProva(lista, qtd);
                    if(encontou==1)printf("\n Aluno encontrado! \n");
                    else printf("\n Aluno nao encontrado! \n");
                break;
            case 3:
                printf("\n--------------MAIOR MEDIA GERAL---------------------\n");
                int achou = maiorMediaGeral(lista, qtd);
                    if(achou==1)printf("\n Aluno(a) com maior media encotrado(a)!\n");
                    else printf("\n Aluno(a) nao encontrado(a)! \n");
                break;
            case 4:
                printf("\n--------------MENOR MEDIA GERAL---------------------\n");
                int achou2 = menorMediaGeral(lista, qtd);
                    if(achou2==1)printf("\n Aluno(a) com menor media encotrado(a)!\n");
                    else printf("\n Aluno(a) nao encontrado(a)! \n");
                break;
            case 5:
                printf("\n--------------RESULTADO---------------------\n");
                resultado(lista, qtd);
                break;
            default:
                break;
        }


    }while(opc!=6);

    return 0;
}