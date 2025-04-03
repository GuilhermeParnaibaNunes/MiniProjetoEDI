#include "Aluno.h"
/*Setter para um aluno*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Retorna -1 para RGM inválido;
    // - Recebe ponteiro para o objeto aluno.
    // - Recebe RGM a ser cadastrado.
int setAluno(t_Aluno *a, char *RGM) {
  if (strlen(RGM) != 8)
    return -1;
  strncpy(a->RGM, RGM, (8*sizeof(char)));
  return 1;
}
