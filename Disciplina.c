#include "Disciplina.h"

t_Disciplina setDisciplina(char *cod, float nt){
  t_Disciplina d;
  printf("\n\t*** t_Disciplina setDisciplina:\n\t***  Disciplina: [%s] = %.2f\n", cod, nt);
  d.nota = nt;
  cod[7] = '\0';
  strncpy(d.cod, cod, 8*sizeof(char));
  printf("\n\t*** t_Disciplina setDisciplina:\n\t***  Disciplina: [%s] = %.2f\n", d.cod, d.nota);
  return d;
}

void ExibirDisciplina(t_Disciplina d){
  printf("\n\t*** Disciplina: [%s] = %.2f\n", d.cod, d.nota);
}

void fdiv(){
  printf("\n\t------------------------------------------------------------------------------------------\n");
}
