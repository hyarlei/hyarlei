#include <stdio.h>
#include <string.h>

typedef struct{

    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float media;

}Media;

void inicializarMedia(Media media_alunos[], int tam){
    for(int i = 0; i < tam; i++){
        media_alunos[i].matricula = -1;
    }
}

Media lerAluno(){
    Media media;

    printf("lendo as informacoes sobre um aluno: \n");

    printf("digite a matricula do aluno: \n");
    scanf("%d",&media.matricula);
    printf("digite o nome do aluno: \n");
    scanf("%s",media.nome);
    printf("digite a nota 1: \n");
    scanf("%f", &media.nota1);
    printf("digite a nota 2: \n");
    scanf("%f", &media.nota2);

    return media;
}

void adicionarNotas(Media media_alunos[], int tam){
    printf("adicionando contatos na agenda... \n");

    //int adicionou = 0;

    for(int i = 0; i < tam; i++){

        if(media_alunos[i].matricula == -1){
            Media mediaAluno = lerAluno();
            media_alunos[i] = mediaAluno;
            //adicionou = 1;
        }
    }
}

void imprimirMenu(){
    printf("---------menu----------\n");
    printf("digite 1: inicializar agenda. \n");
    printf("digite 2: adicionar notas dos alunos. \n");
    printf("digite 3: fazer o calculo da media. ");
    printf("digite 4: imprimir o resultado da media. \n");
    printf("digite 5: sair. \n");
    printf("-----------------------\n");
}

void mediaPorNota(Media media_Alunos[],int tam){
    for(int i = 0; i < tam; i++){
        if(media_Alunos[i].matricula == -1){
            media_Alunos[i].media = media_Alunos[i].nota1 + media_Alunos[i].nota2 / 2;
                break;
        }
    }
    
}

void imprimirMediaporAluno(Media Media_alunos){
    printf("------media calculada-------\n");
    printf("a media do aluno e: %.2f \n", Media_alunos.media);
    printf("----------------------------\n");
}

void imprimirMedia(Media media_alunos[], int tam){
    for(int i = 0; i < tam; i++){
        if(media_alunos[i].matricula != -1){
            imprimirMediaporAluno(media_alunos[i]);
        }
    }
}

int main(){

    int opcao;
    int tam=2;
    Media media_alunos[2];
    //inicializarMedia(media_alunos, 2);
    //mediaPorNota(media_alunos, 2);
    //imprimirMedia(media_alunos, 2);

    while(1){
        imprimirMenu();
        scanf("%d", &opcao);
        
        if(opcao == 1){//inicializar calculos das notas
            inicializarMedia(media_alunos, tam);
        }
        else if(opcao == 2){//adicionar notas dos alunos
            adicionarNotas(media_alunos, tam);
      }
        else if(opcao == 3){//fazer o calculo da media
            mediaPorNota(media_alunos, tam);
        }
        else if(opcao == 4){//imprimir media do aluno
            imprimirMedia(media_alunos, tam);
        }
        else if(opcao == 5){//sair
            printf("sair.");
            break;
        }
        else{
            printf("escolha uma das opcoes: \n");
        }
    }//while(opcao != 5);

}
