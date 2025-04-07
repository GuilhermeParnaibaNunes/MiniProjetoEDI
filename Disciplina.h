#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#ifndef DISCIPLINA_H_
#define DISCIPLINA_H_

/*Estrutura de nome Disciplina*/
    // - Campo nome: nome da disciplina realizada pelo aluno*;
    // - Campo cod: c�digo da disciplina realizada pelo aluno;
    // - Campo nota: nota tirada pelo aluno na disciplina***;
typedef struct Disciplina{
  //char nome[256];
  char cod[8];
  float nota;
} t_Disciplina;

/*Setter para uma Disciplina*/
    // - Retorna um objeto disciplina;
    // - Recebe c�digo da disciplina;
    // - Recebe nota da disciplina.
t_Disciplina setDisciplina(char *, float);

/*Exibe disciplina:*/
    // - Sem retorno;
    // - Recebe a lista;
void ExibirDisciplina(t_Disciplina);

/*Verifica c�digo de disciplina fornecido:*/
    // - Retorna 1 para c�digo v�lido;
    // - Retorna 0 para c�digo fora do padr�o;
    // - Recebe o pretenso c�digo;
int validaCOD(char *);

/*Printa na tela uma divis�ria*/
void fdiv();

/*Printa na tela um dado texto em formato padr�o*/
//void printAsText(char *);

/*Printa na tela um dado input em formato padr�o*/
//void printAsQuest(char *);

#endif // DISCIPLINA_H_

// Expandir para outros Setters com regras pr�prias antes do setter geral;
// Adicionar nome da disciplina;
// Retirar nota e adicionar professor, ou per�odo, por exemplo.
