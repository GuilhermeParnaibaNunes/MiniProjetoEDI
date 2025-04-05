#include "Disciplina.h"
#ifndef LISTAEDISCIPLINAS_H_
#define LISTAEDISCIPLINAS_H_

/*Estrutura de nome no*/
    // - Campo disciplina: disciplina do no;
    // - Campo prox: ponteiro para o próximo no;
typedef struct noD {
    t_Disciplina disciplina;
    struct noD * prox;
} t_noD;

/*t_listaEDisciplina se torna outro nome para um ponteiro para nós Disciplina*/
typedef t_noD * t_listaEDisciplina;


/*Cria um novo nó Disciplina*/
    // - Retorna ponteiro para o nó criado;
    // - Sem parâmetros.
t_listaEDisciplina criaNoD();

/*Verifica se a lista está vazia:*/
    // - Retorna 1 para verdadeiro;
    // - Retorna 0 para falso;
    // - Recebe a lista sob análise.
int Vazia(t_listaEDisciplina);

/*Retorna total de nós na lista:*/
    // - Retorna número de elementos na lista;
    // - Recebe a lista sob análise.
int Tamanho(t_listaEDisciplina);

/*Insere um novo elemento a lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe a lista sob análise.
    // - Recebe a disciplina;
int Inserir(t_listaEDisciplina *, t_Disciplina);

/*Remove um elemento por posição na lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna -1 para posição inválida;
    // - Retorna -2 para lista vazia;
    // - Recebe a lista sob analise
    // - Recebe posição da remoção.
int RemoverP(t_listaEDisciplina *, int);

/*Remove um elemento por nome:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe a lista sob analise
    // - Recebe nome do elemento a ser removido.
//int RemoverN(t_listaEDisciplina *, char *);

int RemoverC(t_listaEDisciplina *, char *);

/*Procura um elemento na lista pela sua posição:*/
    // - Retorna o item procurado;
    // - Retorna NULL para posição inválida;
    // - Recebe a lista sob análise;
    // - Recebe a posição do item a ser procurado;
t_listaEDisciplina ProcurarP(t_listaEDisciplina *, int);

/*Procura um elemento na lista pelo seu nome:*/
    // - Retorna o item procurado;
    // - Retorna NULL para nome não encontrado;
    // - Recebe a lista sob análise;
    // - Recebe nome a ser procurado;
//t_listaEDisciplina ProcurarN(t_listaEDisciplina *, char *);

/*Procura um elemento na lista pelo seu código:*/
    // - Retorna o item procurado;
    // - Retorna NULL para código não encontrado;
    // - Recebe a lista sob análise;
    // - Recebe código a ser procurado;
t_listaEDisciplina ProcurarC(t_listaEDisciplina *, char *);

/*Exibe lista:*/
    // - Sem retorno;
    // - Recebe a lista.
void ExibirLista(t_listaEDisciplina);

/*Exibe disciplina por posição na lista:*/
    // - Sem retorno;
    // - Recebe a lista;
    // - Recebe posição do elemento na lista.
void ExibirDisciplinaP(t_listaEDisciplina, int);

/*Exibe disciplina por nome:*/
    // - Sem retorno;
    // - Recebe a lista;
    // - Recebe nome da disciplina.
//void ExibirDisciplinaN(t_listaEDisciplina, char *);

/*Exibe disciplina por código:*/
    // - Sem retorno;
    // - Recebe a lista;
    // - Recebe código da disciplina.
void ExibirDisciplinaR(t_listaEDisciplina, char *);

/*Exibe disciplina por código:*/
    // - Sem retorno;
    // - Recebe a lista;
void ExibirDisciplina(t_listaEDisciplina);

#endif // LISTAEDISCIPLINAS_H_

/*ListaEDisciplinas.h
- Criar;
- Vazia;
- Tamanho;
- Inserir elemento;
- Apagar elemento por posição;
- Apagar elemento por nome*;
- Apagar elemento por código da disciplina;
- Encontrar elemento por posição;
- Encontrar elemento por nome*;
- Encontrar elemento por código da disciplina;
- Exibir lista;
- Exibir disciplina por posição;
- Exibir disciplina por nome*;
- Exibir disciplina por código da disciplina.
*/


