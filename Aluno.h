#include "ListaEDisciplinas.h"
#ifndef ALUNO_H_
#define ALUNO_H_

/*Estrutura de nome Aluno*/
    // - Campo nome: nome do aluno*;
    // - Campo DATA DE NASCIMENTO???* Usar local time pra guardar formato de data?;
    // - Campo idade: idade do aluno*;
    // - Campo curso: nome do curso realizado pelo aluno*;
    // - Campo mensalidade: valor da mensalidade do aluno*;
    // - Campo RGM: número do RGM (matrícula) do aluno;
    // - Campo disciplinas: lista atual de disciplinas do aluno.
typedef struct Aluno{
  //char nome[256];
  //DATA DE NASCIMENTO???
  //int idade;
  //char curso[256];
  //float mensalidade;
  char RGM[9];
} t_Aluno;

/*Setter para um aluno*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Retorna -1 para RGM inválido;
    // - Recebe ponteiro para o objeto aluno.
    // - Recebe RGM a ser cadastrado.
int setAluno(t_Aluno *, char *);

#endif // ALUNO_H_

/*COMO DISCIPLINAS É O TIPO MAIS INTERNO ELE PRECISA SER DEFINIDO ANTES
UMA VEZ QUE DENTRO DE ALUNO NÃO VAI DISCIPLINAS E SIM LISTA DE DISCIPLINAS
LOGO, PRIMEIRO SE DEFINE DISCIPLINAS EM UM ARQUIVO PRÓPRIO E DEPOIS ALUNO TAMBÉM EM UM ARQUIVO PRÓPRIO
DISCIPLINAS É ADICIONADO A LISTA DE DISCIPLINAS, LISTA DE DISCIPLINAS É ADICIONADA A ALUNOS
POR FIM ALUNOS É ADICIONADO A LISTA DE ALUNOS*/

/*Setter para um aluno
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Retorna -1 para RGM inválido;
    // - Recebe ponteiro para o objeto aluno.
    // - Recebe RGM a ser cadastrado.
int setAluno(t_Aluno *a, char *RGM){
  if(sizeof(RGM)!=(8*sizeof(char)))
    return -1;
  a->RGM = RGM;
    return 0;
}
*/

