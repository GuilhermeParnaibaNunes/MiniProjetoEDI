#include "ListaEDisciplinas.h"

t_listaEDisciplina criaNoD() {
    t_listaEDisciplina noD = (t_listaEDisciplina) malloc(sizeof(t_noD));
    if (noD)
        noD->prox = NULL;
    return noD;
}

int Vazia(t_listaEDisciplina lED){
  return (lED == NULL);
}

int Tamanho(t_listaEDisciplina lED){
  int i = 0;
  for(; lED->prox != NULL; i++){
    lED = lED->prox;
  }
  return i;
}

int Inserir(t_listaEDisciplina *plED, t_Disciplina d){
  t_listaEDisciplina lED = criaNoD();
  if(lED == NULL)
    return 0;
  lED->disciplina = d;
  lED->prox = *plED;
  *plED = lED;
  return 1;
}

int RemoverP(t_listaEDisciplina *plED, int p){
  if(p<1 || (plED->prox == NULL && p>1))
    return -1;
  if(Vazia(plED))
    return -2;
  t_listaEDisciplina alED, aux = *plED;
  if(aux->prox == NULL){
    aux = alED;
    free(aux);
    return 1;
  }
  int i = 0;
  for(; i<p-1; i++){
    alED = aux;
    if(alED->prox == NULL){
      return -1;
    }
    aux = aux->prox;
  }
  alED->prox = aux->prox;
  free(aux);
  return 1;
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
    // - Retorna -1 para código não encontrado;
    // - Retorna -2 para lista vazia;
    // - Recebe a lista sob analise
    // - Recebe código do elemento a ser removido.
int RemoverC(t_listaEDisciplina *plED, char *cod){
  if(Vazia(plED))
    return -2;
  t_listaEDisciplina alED, aux = *plED;
  if(aux->prox == NULL){
    if(!(strcmp(aux->disciplina.cod, cod))){
      aux = alED;
      free(aux);
      return 1;
    }else
      return -1;
  }
  int i = 0;
  for(; !strcmp(aux->disciplina.cod, cod); i++){
    alED = aux;
    if(alED->prox == NULL){
      return -1;
    }
    aux = aux->prox;
  }
  alED->prox = aux->prox;
  free(aux);
  return 1;
}

/*Procura um elemento na lista pela sua posição:*/
    // - Retorna o item procurado;
    // - Retorna -1 para posição inválida;
    // - Recebe a lista sob análise;
    // - Recebe a posição do item a ser procurado;
int ProcurarP(t_listaEDisciplina *plED, int p){
  for(int i = 0; i < p; i++){
    plED ==;
  }
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
int ProcurarC(t_listaEDisciplina *plED, char *cod){

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

