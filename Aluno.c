#include "Aluno.h"
/*Setter para um aluno*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Retorna -1 para RGM inválido;
    // - Recebe ponteiro para o objeto aluno.
    // - Recebe RGM a ser cadastrado.
int setAluno(t_Aluno *a, char *RGM) {
  if(strlen(RGM) != 9)
    return -1;
  RGM[8] = '\0';
  strncpy(a->RGM, RGM, (9*sizeof(char)));
  printf("t_Aluno - setAluno: Aluno[%s]", a->RGM);
  return 1;
}
