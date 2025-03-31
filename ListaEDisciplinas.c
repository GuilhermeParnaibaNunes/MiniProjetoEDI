#include "ListaEDisciplinas.h"

t_listaEDisciplina criaNoD() {
    t_listaEDisciplina noD = (t_listaEDisciplina) malloc(sizeof(t_noD));

    if (noD)
        noD->prox = NULL;

/*Verifica se a lista est� vazia:*/
    // - Retorna 1 para verdadeiro;
    // - Retorna 0 para falso;
    // - Retorna -1 para valor inv�lido de elementos;
    // - Recebe a lista sob an�lise.
int Vazia(t_listaEDisciplina lED){
  return (lED == NULL);
}

/*Retorna total de n�s na lista:*/
    // - Retorna n�mero de elementos na lista;
    // - Recebe a lista sob an�lise.
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
    // - Recebe a lista sob an�lise.
    // - Recebe c�digo da disciplina;
    // - Recebe nota da disciplina.
int Inserir(t_listaEDisciplina *plED, t_Disciplina d){
  criaNoD();
}

/*Remove um elemento por posi��o na lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe a lista sob analise
    // - Recebe posi��o da remo��o.
int RemoverP(t_listaEDisciplina *plED, int p){

}

/*Remove um elemento por nome:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe a lista sob analise
    // - Recebe nome do elemento a ser removido.
//int RemoverN(t_listaEDisciplina *plED, char *nome){

}

/*Remove um elemento por c�digo:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe a lista sob analise
    // - Recebe c�digo do elemento a ser removido.
int RemoverR(t_listaEDisciplina *plED, char *cod){

}

/*Procura um elemento na lista pela sua posi��o:*/
    // - Retorna o item procurado;
    // - Retorna -1 para posi��o inv�lida;
    // - Recebe a lista sob an�lise;
    // - Recebe a posi��o do item a ser procurado;
int ProcurarR(t_listaEDisciplina *plED, int p){

}

/*Procura um elemento na lista pelo seu nome:*/
    // - Retorna o item procurado;
    // - Retorna -1 para nome n�o encontrado;
    // - Recebe a lista sob an�lise;
    // - Recebe nome a ser procurado;
//int ProcurarN(t_listaEDisciplina *plED, char *nome);

/*Procura um elemento na lista pelo seu c�digo:*/
    // - Retorna o item procurado;
    // - Retorna -1 para c�digo n�o encontrado;
    // - Recebe a lista sob an�lise;
    // - Recebe c�digo a ser procurado;
int ProcurarR(t_listaEDisciplina *plED, char *cod){

}

/*Exibe lista:*/ //EXIBIR VOID E COLOCA C�DIGOS DE ERRO NA MENSAGEM? OU EXIBIR INT E P�E C�DIGOS DE ERRO?
    // - Sem retorno;
    // - Recebe a lista.
void ExibirLista(t_listaEDisciplina lED){

}

/*Exibe disciplina por posi��o na lista:*/
    // - Sem retorno;
    // - Recebe a lista;
    // - Recebe posi��o do elemento na lista.
void ExibirDisciplinaP(t_listaEDisciplina lED, int p){

}

/*Exibe disciplina por nome:*/
    // - Sem retorno;
    // - Recebe a lista
    // - Recebe nome da disciplina.
//void ExibirDisciplinaN(t_listaEDisciplina lED, char *nome){

}

/*Exibe disciplina por c�digo:*/
    // - Sem retorno;
    // - Recebe a lista
    // - Recebe c�digo da disciplina.
void ExibirDisciplinaR(t_listaEDisciplina lED, char *cod);

    return noD;
}

