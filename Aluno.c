#include <Aluno.h>
/*Setter para um aluno*/
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

