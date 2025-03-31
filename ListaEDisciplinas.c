#include "ListaEDisciplinas.h"

t_listaEDisciplina criaNoD() {
    t_listaEDisciplina noD = (t_listaEDisciplina) malloc(sizeof(t_noD));

    if (noD)
        noD->prox = NULL;

/*Verifica se a lista está vazia:*/
    // - Retorna 1 para verdadeiro;
    // - Retorna 0 para falso;
    // - Retorna -1 para valor inválido de elementos;
    // - Recebe a lista sob análise.
int Vazia(t_listaEDisciplina lED){
  return (lED == NULL);
}

/*Retorna total de nós na lista:*/
    // - Retorna número de elementos na lista;
    // - Recebe a lista sob análise.
int Tamanho(t_listaEDisciplina lED){
  int i = 0;
  for(; lED->prox != NULL; i++){
    lED = lED->prox;
  }
  return i;
}

/*Insere um novo elemento a lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe a lista sob análise.
    // - Recebe código da disciplina;
    // - Recebe nota da disciplina.
int Inserir(t_listaEDisciplina *plED, t_Disciplina d){
  criaNoD();
}

/*Remove um elemento por posição na lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe a lista sob analise
    // - Recebe posição da remoção.
int RemoverP(t_listaEDisciplina *plED, int p){

}

/*Remove um elemento por nome:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe a lista sob analise
    // - Recebe nome do elemento a ser removido.
//int RemoverN(t_listaEDisciplina *plED, char *nome){

}

/*Remove um elemento por código:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe a lista sob analise
    // - Recebe código do elemento a ser removido.
int RemoverR(t_listaEDisciplina *plED, char *cod){

}

/*Procura um elemento na lista pela sua posição:*/
    // - Retorna o item procurado;
    // - Retorna -1 para posição inválida;
    // - Recebe a lista sob análise;
    // - Recebe a posição do item a ser procurado;
int ProcurarR(t_listaEDisciplina *plED, int p){

}

/*Procura um elemento na lista pelo seu nome:*/
    // - Retorna o item procurado;
    // - Retorna -1 para nome não encontrado;
    // - Recebe a lista sob análise;
    // - Recebe nome a ser procurado;
//int ProcurarN(t_listaEDisciplina *plED, char *nome);

/*Procura um elemento na lista pelo seu código:*/
    // - Retorna o item procurado;
    // - Retorna -1 para código não encontrado;
    // - Recebe a lista sob análise;
    // - Recebe código a ser procurado;
int ProcurarR(t_listaEDisciplina *plED, char *cod){

}

/*Exibe lista:*/ //EXIBIR VOID E COLOCA CÓDIGOS DE ERRO NA MENSAGEM? OU EXIBIR INT E PÕE CÓDIGOS DE ERRO?
    // - Sem retorno;
    // - Recebe a lista.
void ExibirLista(t_listaEDisciplina lED){

}

/*Exibe disciplina por posição na lista:*/
    // - Sem retorno;
    // - Recebe a lista;
    // - Recebe posição do elemento na lista.
void ExibirDisciplinaP(t_listaEDisciplina lED, int p){

}

/*Exibe disciplina por nome:*/
    // - Sem retorno;
    // - Recebe a lista
    // - Recebe nome da disciplina.
//void ExibirDisciplinaN(t_listaEDisciplina lED, char *nome){

}

/*Exibe disciplina por código:*/
    // - Sem retorno;
    // - Recebe a lista
    // - Recebe código da disciplina.
void ExibirDisciplinaR(t_listaEDisciplina lED, char *cod);

    return noD;
}

