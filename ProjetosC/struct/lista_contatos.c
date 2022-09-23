#include <stdio.h>
#include <string.h>

typedef struct{

    int id; 
    char nome[50];
    char telefone[20];
    char endereco[50];

}contato;

void imprimirMenu(){

    printf("------------menu--------------\n");
    printf("digite 1: iniciacilar agenda. \n");
    printf("digite 2: adicionar contato. \n");
    printf("digite 3: imprimir lista de contato. \n");
    printf("digite 3: apagar contato por identificador. \n");
    printf("digite 4: editar contato por identificador. \n");
    printf("sair. \n");
    printf("------------------------------\n");

}

void inicializar_agenda(contato listaContatos[], int qtdContatos){

    for(int i = 0; i < qtdContatos; i++){
        listaContatos[i].id = -1;
        }
        printf("agenda inicializada com sucesso! \n");
}

contato lerContatos(){

    contato contatos;

    printf("Digite o indentificador de contato: \n");
    scanf("%d",&contatos.id);

    printf("Digite o seu nome: \n");
    scanf("%s",contatos.nome);

    printf("Digite o seu telefone: \n");
    scanf("%s",contatos.telefone);

    printf("Digite o seu endereco: \n");
    scanf("%s",contatos.endereco);

    return contatos;
}

void imprimirContatos(contato contatos){

    printf("identificador: %d", contatos.id);
    printf("nome: %s", contatos.nome);
    printf("telefone: %s", contatos.telefone);
    printf("endereco: %s", contatos.endereco);

}

void imprimirContatosId(contato listaContatos[], int qtdContatos){

    for(int i = 0; i < qtdContatos; i++){
        if(listaContatos[i].id != -1){
            imprimirContatos(listaContatos[i]);
        }
    }
}

void adicionarContato(contato listaContatos[], int qtdContatos){
    printf("adicionando contatos na agenda... \n");

    int adicionou = 0;

    for(int i = 0; i < qtdContatos; i++){

        if(listaContatos[i].id == -1){
            contato contatoAdicionar = lerContatos();
            listaContatos[i] = contatoAdicionar;
            adicionou = 1;
            break;
        }
    }
    if(adicionou == 1) printf("Contato adicionado na agenda com sucesso! \n");
    else printf("Contato nao adicionado! Lista cheia. Apague um contato. \n");
}

void apagarContatoId(contato listaContatos[], int qtdContatos, int idApagar){

    int apagou = 0;

    for(int i = 0; i < qtdContatos; i++){
        if(listaContatos[i].id == idApagar){
            listaContatos[i].id = -1;
            apagou = 1;
        }
    }
    if(apagou == 1) printf("contato apagado com sucesso! \n");
    else printf("contato nao encontrado. \n");
}

void editarContatoId(contato listaContatos[], int qtdContatos, int idContatoEditar){
    
    int editou = 0;

    for(int i = 0; i < qtdContatos; i++){

        if(listaContatos[i].id == idContatoEditar && listaContatos[i].id != -1){

            printf("informacoes do contato sendo editado... \n");
            imprimirContatos(listaContatos[i]);

            contato c = lerContatos();
            listaContatos[i] = c;

            editou = 1;
        }
    }
    if(editou == 1) printf("contato editado com sucesso! \n");
    else printf("contato nao encontrado");
}

int main(){
    int opcao;
    int qtdContatos = 3;
    contato listaContatos[qtdContatos];
    do{
        imprimirMenu();
        scanf("%d",&opcao);
        
        if(opcao == 1){//inicializar agenda
            inicializarAgenda(listaContatos, qtdContatos);
        }
        else if(opcao == 2){//adicionar um contatos
            adicionarContato(listaContatos, qtdContatos);
        }
        else if(opcao == 3){//imprimir lista de contatos
            imprimirListaContatos(listaContatos, qtdContatos);
        }
        else if(opcao == 4){//apagar um contato por identificador

            int idApagar;
            printf("Apagando contato...digite o identificador de contato a ser apagado: \n");
            scanf("%d", &idApagar);

            apagarContatoId(listaContatos, qtdContatos, idApagar);
        }
        else if(opcao == 5){//apagar um contato por nome
            char nomeApagar[50];
            printf("Digite um nome para ser apagado. \n");
            scanf("%s", nomeApagar);

            apagarContatoNome(listaContatos, qtdContatos, nomeApagar);
        }
        else if(opcao == 6){//editar contato pelo identificador
            int idContatoEditar;

            printf("editando contato...informe o identificador do contato a ser editado. \n");
            scanf("%d",&idContatoEditar);
            editarContatoId(listaContatos, qtdContatos, idContatoEditar);
        }
        else if(opcao == 7){//editar contato pelo nome
        char nomeContatoEditar[50];
            printf("editando contato...informe o identificador do contato a ser editado. \n");
            scanf("%s",nomeContatoEditar);

            editarContatoNome(listaContatos, qtdContatos, nomeContatoEditar);
        }
        else if(opcao == 8){
            printf("Sair");
        }

        else{
            printf("escolha uma das opcoes: \n");
        }
    }while(opcao != 8);

}
