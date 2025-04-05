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
  if(p<1)
    return -1;
  if(Vazia(&plED))
    return -2;
  t_listaEDisciplina alED = NULL, aux = plED;
  if(aux->prox == NULL){
    if(p>1)
      return -1;
    else
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
//int RemoverN(t_listaEDisciplina *plED, char *nome){}

int RemoverC(t_listaEDisciplina *plED, char *cod){
  if(Vazia(&plED))
    return -2;
  t_listaEDisciplina alED, aux = plED;
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

t_listaEDisciplina ProcurarP(t_listaEDisciplina *plED, int p){
  t_listaEDisciplina aux = plED;
  for(int i = 1; i < p; i++){
    aux = aux->prox;
    if(aux->prox == NULL && i<p-1)
      return NULL;
  }
  return &aux;
}

/*Procura um elemento na lista pelo seu nome:*/
    // - Retorna o item procurado;
    // - Retorna -1 para nome não encontrado;
    // - Recebe a lista sob análise;
    // - Recebe nome a ser procurado;
//t_listaEDisciplina ProcurarN(t_listaEDisciplina *plED, char *nome);

t_listaEDisciplina ProcurarC(t_listaEDisciplina *plED, char *cod){
  t_listaEDisciplina aux = plED;
  for(int i = 0; !strcmp(aux->disciplina.cod, cod); i++){
    aux = aux->prox;
    if(aux->prox == NULL)
      return NULL;
  }
  return &aux;
}

/*Exibe lista:*/
    // - Sem retorno;
    // - Recebe a lista.
void ExibirLista(t_listaEDisciplina lED){
  if(Vazia(lED))
    printf("\n\t*** LISTA VAZIA ***\n");
  do{
    ExibirDisciplina(lED);
    lED = lED->prox;
  }while(lED != NULL);
}

void ExibirDisciplinaP(t_listaEDisciplina lED, int p){
  ExibirDisciplina(ProcurarP(lED, p));
}

/*Exibe disciplina por nome:*/
    // - Sem retorno;
    // - Recebe a lista
    // - Recebe nome da disciplina.
//void ExibirDisciplinaN(t_listaEDisciplina lED, char *nome){}

void ExibirDisciplinaR(t_listaEDisciplina lED, char *cod){
  ExibirDisciplina(ProcurarC(lED, cod));
}

void ExibirDisciplina(t_listaEDisciplina lED){
  printf("\n\t*** Disciplina: [%s] = %.2f\n", lED->disciplina.cod, lED->disciplina.nota);
}
