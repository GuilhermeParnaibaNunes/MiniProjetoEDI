#include "Disciplina.h"

t_Disciplina setDisciplina(char *cod, float nt){
  t_Disciplina d;
  d.nota = nt;
  cod[7] = '\0';
  strncpy(d.cod, cod, 8*sizeof(char));
  return d;
}

void ExibirDisciplina(t_Disciplina d){
  printf("\n\t*** Disciplina: [%s] = %.2f", d.cod, d.nota);
}

void fdiv(){
  printf("\n\t------------------------------------------------------------------------------------------\n");
}
/*
void printAsText(char * t){
  printf("\n\t*** %s ***\n", t);
}

void printAsQuest(char * t){
  printf("\n\t*** %s ", t);
}
*/
