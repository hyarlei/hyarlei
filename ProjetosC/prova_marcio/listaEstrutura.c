#include <stdio.h>
#include <string.h>

typedef struct{

    int identificador;
    char nome[50];
    float altura;
    int idade;
    float peso;
    
}Paciente;

void imprimirMenu(){
    printf("---------PONTUARIO MEDICO---------\n");
    printf("Digite 1: Inicializar o pontuario. \n");
    printf("Digite 2: imprimir um paciente. \n");
    printf("Digite 3: inserir um paciente. \n");
    printf("Digite 4: editar um paciente. \n");
    printf("Digite 5: Sair. \n");
    printf("------------------------------------\n");
}

void inicializarPontuario(Paciente pontuario[], int tam){
    for(int i = 0; i < tam; i++){
        pontuario[i].identificador = -1;
    }
    printf("pontuario medico inicializado com sucesso! \n");
}

Paciente lerPaciente(){
    Paciente paciente;

    printf("Digite o indentificador de contato: \n");
    scanf("%d",&paciente.identificador);

    printf("Digite o seu nome: \n");
    scanf("%s",paciente.nome);

    printf("Digite a sua altura: \n");
    scanf("%.2f",&paciente.altura);

    printf("Digite a sua idade: \n");
    scanf("%d",&paciente.idade);

    printf("digite o seu peso: \n");
    scanf("%.2f",&paciente.peso);

    return paciente;

}

void imprimirPaciente(Paciente paciente){

    printf("--------Contato digitado----------\n");
    printf("Indentificador: %d \n",paciente.identificador);
    printf("Nome: %s \n", paciente.nome);
    printf("altura: %.2f \n", &paciente.altura);
    printf("idade: %d \n", &paciente.idade);
    printf("peso: %.2f \n",&paciente.peso);
    printf("----------------------------------\n");
}

void adicionarpaciente(Paciente pontuario[], int tam){
    printf("adicionando contatos no pontuario medico... \n");

    int adicionou = 0;

    for(int i = 0; i < tam; i++){

        if(pontuario[i].identificador == -1){
            Paciente pacienteAdicionar = lerPaciente();
            pontuario[i] = pacienteAdicionar;
            adicionou = 1;
            break;
        }
    }
    if(adicionou == 1) printf("paciente adicionado no pontuario com com sucesso! \n");
    else printf("paciente nao adicionado no pontuario! pontuario cheio. \n");
}

void imprimirPontuario(Paciente pontuario[], int tam){
    printf("imprimindo pontuario medico...\n");
    int imprimiu = 1;

    for(int i = 0; i < tam; i++){

        if(pontuario[i].identificador != -1){
            imprimirPaciente(pontuario[i]);
            imprimiu = 1;
        }
    }
    if(imprimiu == 1) printf("pontuario medico impresso com sucesso! \n");
    else printf("pontuario medico vazio! Adicione um paciente. \n");
}

void editarContatoNome(Paciente pontuario[], int tam, char *editarPontuario){

    int editou = 0;

    for(int i = 0; i < tam; i++){

        if(strcmp(pontuario[i].nome, editarPontuario) == 0){

            printf("informacoes do sobre o paciente sendo editado... \n");
            imprimirContatosId(pontuario[i]);

            Paciente p = lerPaciente();
            pontuario[i] = p;

            editou = 1;
        }
    }
    if(editou == 1) printf("pontuario editado com sucesso! \n");
    else printf("paciente nao encontrado");
}

int main(){
    int opcao = 1;
    int tam = 2;
    Paciente pontuario[tam];
    do{
        imprimirMenu();
        scanf("%d",&opcao);
        
        if(opcao == 1){//inicializar o pontuario medico
            inicializarPontuario(pontuario, tam);
        }
        else if(opcao == 2){//imprimir um paciente
            imprimirPontuario(pontuario, tam);
        }
        else if(opcao == 3){//inserir um paciente
            imprimirListaContatos(pontuario, tam);
        }
        else if(opcao == 4){//editar pontuario pelo nome
        char editarPontuario[50];
            printf("editando pontuario...informe o identificador do paciente a ser editado. \n");
            scanf("%s",editarPontuario);

            editarContatoNome(pontuario, tam, editarPontuario);
        }
        else if(opcao == 5){
            printf("Sair");
        }

        else{
            printf("escolha uma das opcoes: \n");
        }
    }while(opcao != 5);

}


