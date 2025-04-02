#include "Disciplina.h"

t_Disciplina setDisciplina(char *cod, float nt){
  t_Disciplina d;
  d.cod = *cod;
  d.nota = nt;
  return d;
}
