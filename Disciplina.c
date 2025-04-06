#include "Disciplina.h"

t_Disciplina setDisciplina(char *cod, float nt){
  t_Disciplina d;
  d.nota = nt;
  cod[7] = '\0';
  strncpy(d.cod, cod, 8*sizeof(char));
  return d;
}

void fdiv(){
  printf("\n\t------------------------------------------------------------------------------------------\n");
}
