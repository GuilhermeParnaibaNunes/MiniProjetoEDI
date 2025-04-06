#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef DISCIPLINA_H_
#define DISCIPLINA_H_

/*Estrutura de nome Disciplina*/
    // - Campo nome: nome da disciplina realizada pelo aluno*;
    // - Campo cod: código da disciplina realizada pelo aluno;
    // - Campo nota: nota tirada pelo aluno na disciplina***;
typedef struct Disciplina{
  //char nome[256];
  char cod[8];
  float nota;
} t_Disciplina;

/*Setter para uma Disciplina*/
    // - Retorna um objeto disciplina;
    // - Recebe código da disciplina;
    // - Recebe nota da disciplina.
t_Disciplina setDisciplina(char *, float);

void fdiv();

#endif // DISCIPLINA_H_

// Expandir para outros Setters com regras próprias antes do setter geral;
// Adicionar nome da disciplina;
// Retirar nota e adicionar professor, ou período, por exemplo.
