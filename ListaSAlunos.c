#include "ListaSAlunos.h"

t_ListaSAlunos CriaListaVazia(void){
  t_ListaSAlunos lista;
  lista.tam = 0;
  return lista;
}

int Valida(t_ListaSAlunos *l){
  if(l->tam > MAX)
    return 0;
  else if(l->tam < 0)
    return -1;
  else
    return 1;
}

int aVazia(t_ListaSAlunos *l){
  if(!Valida(l)){
    if(l->tam == 0)
      return 1;
    else
      return 0;
  }else
    return -1;
}

int Cheia(t_ListaSAlunos *l){
  if(Valida(l)){
    if(l->tam == MAX)
      return 1;
    else
      return 0;
  }else
    return -1;
}

int DeslocaEsq(t_ListaSAlunos *l, int p){
  if(p>l->tam-1 || p<=0 || p>=MAX)
    return -1;
  t_Aluno aAux;
  for(int i = p; i<=l->tam-1; i++){
    l->aluno[i] = l->aluno[i+1];
  }
  return 1;
}

int DeslocaDir(t_ListaSAlunos *l, int p){
  if(p>=l->tam-1 || p<0 || p>=MAX)
    return -1;
  t_Aluno aAux;
  for(int i = l->tam; i>=p; i--){
    l->aluno[i] = l->aluno[i-1];
  }
  return 1;
}

int TotalOcupado(t_ListaSAlunos *l){
  if(!Valida(l))
    return -1;
  return l->tam;
}

int TotalRestante(t_ListaSAlunos *l){
  if(!Valida(l))
    return -1;
  return (MAX-(l->tam));
}

/*Insere um novo aluno a lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Retorna -1 para lista cheia;
    // - Retorna -2 para lista inválida;
    // - Recebe ponteiro para a lista sob análise.
    // - Recebe valor de RGM a ser inserido
int aInserir(t_ListaSAlunos *l, char *RGM){
  int pa = 0;
  t_Aluno *aluno;
  setAluno(aluno, RGM);
  if(l->tam == 0){//Caso seja o primeiro item da lista a inserção é simples
    l->aluno[pa] = *aluno;
    l->tam++;
    return 1;
  }else if(Cheia(l))
    return -1;
  else if (!Valida(l))
    return -2;
  else //Buscar posição dele na lista forma computacional -> deslocar a direita -> inserir na posição -> acrescer tamanho da lista
    pa = BuscaInsB(l, RGM);
    DeslocaDir(l, pa);
    l->aluno[pa] = *aluno;
    l->tam++;
    return 1;
}

/*int buscaBinaria(int vet[], int ini, int fim, int key) {
    int meio = ini + (fim-ini)/2;

    if (fim<ini)
        return -1;

    if (vet[meio] == key) {
        return meio;
    }
    if (vet[meio] < key)
        return buscaBinaria(vet, meio+1, fim, key);
    else
        return buscaBinaria(vet, ini, meio-1, key);
}
*/

/*Realiza uma busca binária na lista para inserção:*/
    // - Retorna posição correta para adição do RGM em ordem crescente;
    // - Recebe ponteiro para a lista sob análise;
    // - Recebe número de RGM;
int BuscaInsB(t_ListaSAlunos *l, char *iRGM){
  if(strcmp(iRGM, l->aluno[l->tam-1].RGM) > 0)
    return l->tam;

  if(strcmp(iRGM, l->aluno[0].RGM) < 0)
    return 0;

  int meio, ini = 1, fim = l->tam-2;


  while(1){ //Deve haver uma forma mais inteligente de se fazer isso
    meio = ini + (fim-ini)/2;
    if(strcmp(iRGM, l->aluno[meio-1].RGM) > 0 && strcmp(iRGM, l->aluno[meio].RGM < 0))
      return meio;
    else if(strcmp(iRGM, l->aluno[meio].RGM) > 0)
      ini = meio+1;
    else
      fim = meio-1;
  }
}

/*Realiza uma busca sequencial na lista:*/
    // - Retorna posição do item procurado;
//int BuscaS(t_ListaSAlunos *, int); ???

/*Procura a posição de um elemento na lista pelo seu nome:*/
    // - Retorna posição do item procurado;
    // - Retorna -1 para nome não encontrado;
    // - Recebe ponteiro para a lista sob análise;
    // - Recebe nome a ser procurado;
//int ProcurarN(t_ListaSAlunos *, char *);

/*Procura a posição de um elemento na lista pelo seu RGM:*/
    // - Retorna posição do item procurado;
    // - Retorna -1 para RGM não encontrado;
    // - Recebe ponteiro para a lista sob análise;
    // - Recebe RGM a ser procurado;
int ProcurarR(t_ListaSAlunos *, char *);

/*Remove um elemento por posição na lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe ponteiro para a lista sob analise
    // - Recebe posição da remoção.
int aRemoverP(t_ListaSAlunos *, int);

/*Remove um elemento por nome:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe ponteiro para a lista sob analise
    // - Recebe nome do elemento a ser removido.
//int RemoverN(t_ListaSAlunos *, char *);

/*Remove um elemento por RGM:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe ponteiro para a lista sob analise
    // - Recebe RGM do elemento a ser removido.
int RemoverR(t_ListaSAlunos *, char *);

/*Exibe lista:*/ //EXIBIR VOID E COLOCA CÓDIGOS DE ERRO NA MENSAGEM? OU EXIBIR INT E PÕE CÓDIGOS DE ERRO?
    // - Sem retorno;
    // - Recebe ponteiro para a lista.
void ExibirLista(t_ListaSAlunos *);

/*Exibe aluno por posição na lista:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista;
    // - Recebe posição do elemento na lista.
void ExibirAlunoP(t_ListaSAlunos *, int);

/*Exibe aluno por nome:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista
    // - Recebe nome do aluno.
//void ExibirAlunoN(t_ListaSAlunos *, char *);

/*Exibe aluno por RGM:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista
    // - Recebe RGM do aluno.
void ExibirAlunoR(t_ListaSAlunos *, char *);

/*Exibe alunos de um certo curso:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista e posição do contao.
//void ExibirAlunosC(t_ListaSAlunos *, int);
