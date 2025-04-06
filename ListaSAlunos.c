#include "ListaSAlunos.h"

t_ListaSAlunos CriaListaVazia(void){
  t_ListaSAlunos lista;
  for(int i = 0; i < MAX; i ++){
    lista.disciplinas[i] = NULL;
  }
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
  if(Valida(l)){
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
  if(p>l->tam-1 || p<0 || p>=MAX)
    return -1;
  for(int i = p; i<=l->tam-1; i++){
    l->aluno[i] = l->aluno[i+1];
    l->disciplinas[i] = l->disciplinas[i+1];
  }
  return 1;
}

int DeslocaDir(t_ListaSAlunos *l, int p){
  if(p>=l->tam || p<0 || p>=MAX){
    return -1;
  }
  t_listaEDisciplina lED, aux;
  for(int i = l->tam; i>p; i--){
    l->aluno[i] = l->aluno[i-1];
    lED = l->disciplinas[i-1];
    l->disciplinas[i] = l->disciplinas[i-1];
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

int aInserir(t_ListaSAlunos *l, char *RGM, char *cod, float nota){
  int pa = 0;
  t_Aluno *aluno;
  if(setAluno(aluno, RGM) == -1)
    return -3;
  if(l->tam == 0){//Caso seja o primeiro item da lista a inserção é simples
    l->aluno[pa] = *aluno;
    l->tam++;
    Inserir(&l->disciplinas[pa], setDisciplina(cod, nota), 1);
    return pa;
  }else if(Cheia(l))
    return -1;
  else if (!Valida(l))
    return -2;
  else //Buscar posição dele na lista forma computacional -> deslocar a direita -> inserir na posição -> acrescer tamanho da lista
    pa = BuscaInsB(l, RGM);
    if(pa!=l->tam)
      DeslocaDir(l, pa);
    l->aluno[pa] = *aluno;
    l->tam++;
    Inserir(&l->disciplinas[pa], setDisciplina(cod, nota), 1);
    return pa;
}

int BuscaInsB(t_ListaSAlunos *l, char *iRGM){
  if(strcmp(iRGM, l->aluno[l->tam-1].RGM) > 0)
    return l->tam;

  if(strcmp(iRGM, l->aluno[0].RGM) < 0)
    return 0;

  int meio, ini = 0, fim = l->tam-1;
  int cmpAtual;
  int cmpAnterior;

  while(ini <= fim){
    meio = ini + (fim-ini)/2;
    cmpAtual = strcmp(iRGM, l->aluno[meio].RGM);
    cmpAnterior = strcmp(iRGM, l->aluno[meio-1].RGM);
    if((cmpAnterior > 0) && (cmpAtual < 0))
      return meio;
    else if(cmpAtual > 0)
      ini = meio+1;
    else
      fim = meio-1;
  }
  return -1;
}

/*Procura a posição de um elemento na lista pelo seu nome:*/
    // - Retorna posição do item procurado;
    // - Retorna -1 para nome não encontrado;
    // - Recebe ponteiro para a lista sob análise;
    // - Recebe nome a ser procurado;
//int ProcurarN(t_ListaSAlunos *, char *);

int ProcurarR(t_ListaSAlunos *l, char *iRGM){
  if(!Valida(l))
    return -2;
  if(aVazia(l))
    return -3;
  int meio, ini = 0, fim = l->tam-1;
  iRGM[8] = '\0';
  while(ini <= fim){
    meio = ini + (fim-ini)/2;
    if(strcmp(iRGM, l->aluno[meio].RGM) == 0)
      return meio;
    else if(strcmp(iRGM, l->aluno[meio].RGM) > 0)
      ini = meio+1;
    else
      fim = meio-1;
  }
  return -1;
}

int aRemoverP(t_ListaSAlunos *l, int p){
  if(!Valida(l))
    return -2;
  if(aVazia(l))
    return -3;
  if(DeslocaEsq(l, p) == 1){
    l->tam--;
    return 1;
  }else
    return -1;
}

/*Remove um elemento por nome:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe ponteiro para a lista sob analise
    // - Recebe nome do elemento a ser removido.
//int RemoverN(t_ListaSAlunos *, char *);

int RemoverR(t_ListaSAlunos *l, char *iRGM){
  if(!Valida(l))
    return -2;
  if(aVazia(l))
    return -3;
  int p = ProcurarR(l, iRGM);
  if(DeslocaEsq(l, p) == 1){
    l->tam--;
    return 1;
  }else
    return -1;
}

/*Exibe lista:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista.
void aExibirLista(t_ListaSAlunos *l){
  if(aVazia(l)){
    printf("\n\t*** LISTA SA VAZIA ***\n");
    return ;
  }
  for(int i = 0; i < l->tam; i++){
    ExibirAlunoP(l, i);
  }
}

/*Exibe aluno por posição na lista:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista;
    // - Recebe posição do elemento na lista.
void ExibirAlunoP(t_ListaSAlunos *l, int p){
  if(p < 0 || p >= l->tam){
    puts("\t*** POSICAO INVALIDA ***\n");
    return ;
  }
  printf("\n\t*** Aluno[%d] ***\n\t*** RGM: [%s] ***\n\t*** Lista de disciplinas ***", p+1, l->aluno[p].RGM);
  ExibirLista(l->disciplinas[p]);
}

/*Exibe aluno por nome:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista
    // - Recebe nome do aluno.
//void ExibirAlunoN(t_ListaSAlunos *, char *);

/*Exibe aluno por RGM:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista
    // - Recebe RGM do aluno.
void ExibirAlunoR(t_ListaSAlunos *l, char *iRGM){
  ExibirAlunoP(l, ProcurarR(l, iRGM));
}

/*Exibe alunos de um certo curso:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista e posição do contao.
//void ExibirAlunosC(t_ListaSAlunos *, int);
