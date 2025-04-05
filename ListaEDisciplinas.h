#include "Disciplina.h"
#ifndef LISTAEDISCIPLINAS_H_
#define LISTAEDISCIPLINAS_H_

/*Estrutura de nome no*/
    // - Campo disciplina: disciplina do no;
    // - Campo prox: ponteiro para o pr�ximo no;
typedef struct noD {
    t_Disciplina disciplina;
    struct noD * prox;
} t_noD;

/*t_listaEDisciplina se torna outro nome para um ponteiro para n�s Disciplina*/
typedef t_noD * t_listaEDisciplina;


/*Cria um novo n� Disciplina*/
    // - Retorna ponteiro para o n� criado;
    // - Sem par�metros.
t_listaEDisciplina criaNoD();

/*Verifica se a lista est� vazia:*/
    // - Retorna 1 para verdadeiro;
    // - Retorna 0 para falso;
    // - Recebe a lista sob an�lise.
int Vazia(t_listaEDisciplina);

/*Retorna total de n�s na lista:*/
    // - Retorna n�mero de elementos na lista;
    // - Recebe a lista sob an�lise.
int Tamanho(t_listaEDisciplina);

/*Insere um novo elemento a lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe a lista sob an�lise.
    // - Recebe a disciplina;
int Inserir(t_listaEDisciplina *, t_Disciplina);

/*Remove um elemento por posi��o na lista:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna -1 para posi��o inv�lida;
    // - Retorna -2 para lista vazia;
    // - Recebe a lista sob analise
    // - Recebe posi��o da remo��o.
int RemoverP(t_listaEDisciplina *, int);

/*Remove um elemento por nome:*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Recebe a lista sob analise
    // - Recebe nome do elemento a ser removido.
//int RemoverN(t_listaEDisciplina *, char *);

int RemoverC(t_listaEDisciplina *, char *);

/*Procura um elemento na lista pela sua posi��o:*/
    // - Retorna o item procurado;
    // - Retorna NULL para posi��o inv�lida;
    // - Recebe a lista sob an�lise;
    // - Recebe a posi��o do item a ser procurado;
t_listaEDisciplina ProcurarP(t_listaEDisciplina *, int);

/*Procura um elemento na lista pelo seu nome:*/
    // - Retorna o item procurado;
    // - Retorna NULL para nome n�o encontrado;
    // - Recebe a lista sob an�lise;
    // - Recebe nome a ser procurado;
//t_listaEDisciplina ProcurarN(t_listaEDisciplina *, char *);

/*Procura um elemento na lista pelo seu c�digo:*/
    // - Retorna o item procurado;
    // - Retorna NULL para c�digo n�o encontrado;
    // - Recebe a lista sob an�lise;
    // - Recebe c�digo a ser procurado;
t_listaEDisciplina ProcurarC(t_listaEDisciplina *, char *);

/*Exibe lista:*/
    // - Sem retorno;
    // - Recebe a lista.
void ExibirLista(t_listaEDisciplina);

/*Exibe disciplina por posi��o na lista:*/
    // - Sem retorno;
    // - Recebe a lista;
    // - Recebe posi��o do elemento na lista.
void ExibirDisciplinaP(t_listaEDisciplina, int);

/*Exibe disciplina por nome:*/
    // - Sem retorno;
    // - Recebe a lista;
    // - Recebe nome da disciplina.
//void ExibirDisciplinaN(t_listaEDisciplina, char *);

/*Exibe disciplina por c�digo:*/
    // - Sem retorno;
    // - Recebe a lista;
    // - Recebe c�digo da disciplina.
void ExibirDisciplinaR(t_listaEDisciplina, char *);

/*Exibe disciplina por c�digo:*/
    // - Sem retorno;
    // - Recebe a lista;
void ExibirDisciplina(t_listaEDisciplina);

#endif // LISTAEDISCIPLINAS_H_

/*ListaEDisciplinas.h
- Criar;
- Vazia;
- Tamanho;
- Inserir elemento;
- Apagar elemento por posi��o;
- Apagar elemento por nome*;
- Apagar elemento por c�digo da disciplina;
- Encontrar elemento por posi��o;
- Encontrar elemento por nome*;
- Encontrar elemento por c�digo da disciplina;
- Exibir lista;
- Exibir disciplina por posi��o;
- Exibir disciplina por nome*;
- Exibir disciplina por c�digo da disciplina.
*/


