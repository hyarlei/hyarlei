#include <stdio.h>
#include <string.h>


typedef struct{
    char nome[50];
    int codigo;
    float salario;
}Cargo;

typedef struct{
    char nome[50];
    int idade;
    Cargo cargofuncionario;
}Funcionario;


void imprimir(Funcionario listafuncionario[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%s  \n",listafuncionario[i].nome);

        printf("%s  \n",listafuncionario[i].cargofuncionario.nome);

    }
}


void vermedia(Funcionario listafuncionario[], int tamanho,int *media){
    for(int i = 0; i < tamanho; i++){

        printf("%d",*media);
        media += listafuncionario[i].idade;

    }


}

void inserir(Funcionario listafuncionario[], int tamanho){
    for(int i=0; i<tamanho;){
        printf("digite 1 para adicionar um Professor \n");
        printf("digite 2 para adicionar um Coordenador \n");
        printf("digite 3 para adicionar um Diretor \n");
        int opcao;
        scanf("%d",&opcao);
        if(opcao==1){
            strcpy(listafuncionario[i].cargofuncionario.nome,"Professor");
            listafuncionario[i].cargofuncionario.codigo = 1;
            listafuncionario[i].cargofuncionario.salario = 1000;
            
            printf("digite os dados do Funcionario\n");
            printf("Digite o nome do Funcionario :   ");
            scanf("%s", listafuncionario[i].nome);

            printf("Digite a idade do Funcionario :   ");
            scanf("%d", &listafuncionario[i].idade);
            i++;
        }else if(opcao==2){            
            strcpy(listafuncionario[i].cargofuncionario.nome,"Coordenador");
            listafuncionario[i].cargofuncionario.codigo = 2;
            listafuncionario[i].cargofuncionario.salario = 1500;
            
            printf("digite os dados do Funcionario\n");
            printf("Digite o nome do Funcionario :   ");
            scanf("%s", listafuncionario[i].nome);

            printf("Digite a idade do Funcionario :   ");
            scanf("%d", &listafuncionario[i].idade);
            i++;

        }else if(opcao==3){
            strcpy(listafuncionario[i].cargofuncionario.nome,"Diretor");
            listafuncionario[i].cargofuncionario.codigo = 3;
            listafuncionario[i].cargofuncionario.salario = 2000;
            
            printf("digite os dados do Funcionario\n");
            printf("Digite o nome do Funcionario :   ");
            scanf("%s", listafuncionario[i].nome);

            printf("Digite a idade do Funcionario :   ");
            scanf("%d", &listafuncionario[i].idade);
            i++;
        }else {
            printf("opcao invalida escolha entre 1 e 3");
        }
    }
}


int main(){

    int quantidade , media =0 ;
    scanf("%d",&quantidade);

    Funcionario listafuncionario[quantidade];

    inserir(listafuncionario,quantidade);
    imprimir(listafuncionario,quantidade);
    return 0;
}