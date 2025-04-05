#include "Disciplina.h"

t_Disciplina setDisciplina(char *cod, float nt){
  t_Disciplina d;
  strncpy(d.cod, *cod, 8*sizeof(char));
  d.nota = nt;
  return d;
}

void div(){
  printf("\n\t------------------------------\n");
}
