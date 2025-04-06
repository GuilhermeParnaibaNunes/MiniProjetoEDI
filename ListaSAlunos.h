#include "Aluno.h"
#define	MAX 60
#ifndef LISTASALUNOS_H_
#define LISTASALUNOS_H_

/*Estrutura de nome ListaSEQ*/
    // - Campo aluno: array do tipo t_Aluno;
    // - Campo tam: tamanho atual da lista;
typedef struct ListaSAlunos{
    t_Aluno aluno[MAX];
    t_listaEDisciplina *disciplinas[MAX];
    int tam;
} t_ListaSAlunos;

/*Cria uma lista de alunos vazia:*/
    // - Retorna ponteiro para a lista criada;
    // - Sem parâmetros.
t_ListaSAlunos CriaListaVazia(void);

/*Verifica se a lista possui um numero válido de elementos:*/
    // - Retorna 1 para verdadeiro;
    // - Retorna 0 para tamanho maior do que o máximo;
    // - Retorna -1 para tamanho menor do que zero;
    // - Recebe ponteiro para a lista sob análise.
int Valida(t_ListaSAlunos *);

/*Verifica se a lista está vazia:*/
    // - Retorna 1 para verdadeiro;
    // - Retorna 0 para falso;
    // - Retorna -1 para valor inválido de elementos;
    // - Retorna -2 para erro desconhecido;
    // - Recebe ponteiro para a lista sob análise.
int aVazia(t_ListaSAlunos *);

/*Verifica se a lista está cheia:*/
    // - Retorna 1 para verdadeiro;
    // - Retorna 0 para falso;
    // - Retorna -1 para valor inválido de elementos;
    // - Retorna -2 para erro desconhecido;
    // - Recebe ponteiro para a lista sob análise.
int Cheia(t_ListaSAlunos *);

/*Desloca todos os itens a partir de certo ponto uma und. a esquerda*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Retorna -1 para posição de deslocamento inválida;
    // - Recebe ponteiro para a lista sob análise.
    // - Recebe posição inicial de deslocamento.
int DeslocaEsq(t_ListaSAlunos *, int);

/*Desloca todos os itens a partir de certo ponto uma und. a direita*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Retorna -1 para posição de deslocamento inválida;
    // - Recebe ponteiro para a lista sob análise.
    // - Recebe posição inicial de deslocamento.
int DeslocaDir(t_ListaSAlunos *, int);

/*Retorna total de alunos registrados:*/
    // - Retorna -1 para valor inválido de elementos;
    // - Retorna -2 para erro desconhecido;
    // - Recebe ponteiro para a lista sob análise.
int TotalOcupado(t_ListaSAlunos *);

/*Retorna quantidade de alunos que ainda podem ser inseridos:*/
    // - Retorna -1 para valor inválido de elementos;
    // - Retorna -2 para erro desconhecido;
    // - Recebe ponteiro para a lista sob análise.
int TotalRestante(t_ListaSAlunos *);

/*Insere um novo aluno a lista:*/
    // - Retorna posição de inserção do aluno;
    // - Retorna -3 para procedimento malsucedido;
    // - Retorna -1 para lista cheia;
    // - Retorna -2 para lista inválida;
    // - Recebe ponteiro para a lista sob análise;
    // - Recebe valor de RGM a ser inserido;
    // - Recebe código da primeira disciplina do aluno;
    // - Recebe nota da primeira disciplina do aluno.
int aInserir(t_ListaSAlunos *, char *, char *cod, float nota);

/*Realiza uma busca binária na lista:*/
    // - Retorna posição correta para adição do número;
    // - Recebe ponteiro para a lista sob análise;
    // - Recebe número de RGM;
int BuscaInsB(t_ListaSAlunos *, char *);

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
    // - Retorna -2 para lista inválida;
    // - Retorna -3 para lista vazia;
    // - Recebe ponteiro para a lista sob análise;
    // - Recebe RGM a ser procurado;
int ProcurarR(t_ListaSAlunos *, char *);

/*Remove um elemento por posição na lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna -1 para posição inválida;
    // - Retorna -2 para lista inválida;
    // - Retorna -3 para lista vazia;
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
    // - Retorna -1 para posição inválida;
    // - Retorna -2 para lista inválida;
    // - Retorna -3 para lista vazia;
    // - Recebe ponteiro para a lista sob analise
    // - Recebe RGM do elemento a ser removido.
int RemoverR(t_ListaSAlunos *, char *);

/*Exibe lista:*/
    // - Sem retorno;
    // - Recebe ponteiro para a lista.
void aExibirLista(t_ListaSAlunos *);

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

#endif // LISTASALUNOS_H_

/*ListaSAlunos.h
- Criar;
- Válida;
- Vazia;
- Cheia;
- Tamanho ocupado;
- Tamanho restante;
- Inserir elemento + busca binária;
- Procurar elemento por nome*;
- Procurar elemento por RGM;
- Apagar elemento por posição;
- Apagar elemento por nome*;
- Apagar elemento por RGM;
- Desloca esq.;
- Desloca dir.;
- Exibir lista;
- Exibir aluno por posição;
- Exibir aluno por nome*;
- Exibir aluno por RGM;
- Exibir alunos por curso*.
*/

/*DISCLAIMER*/
// Tamanho e posição são sempre tratados em termos não computacionais, ou seja:
// São tratados como tamanho e posição convencionais .:. [0] = 1.
