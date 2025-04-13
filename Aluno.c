#include "Aluno.h"

int setAluno(t_Aluno *a, char *RGM) {
  if(strlen(RGM) != 9)
    return -1;
  RGM[8] = '\0';
  strncpy(a->RGM, RGM, (9*sizeof(char)));
  return 1;
}

int validaRGM(char *RGM){
  if(strlen(RGM)!=9*sizeof(char)){
    printf("\n\t*** Valor fornecido para o RGM do aluno fora de padrao ***"
           "\n\t*** Formato: [XXXXXXXX] (8 digitos, apenas numeros) ***"
           "\n\t*** Por favor, forneca um valor valido ***\n");
    return 0;
  }
  for(int i = 0; i<8; i++){
    if(!isdigit(RGM[i])){
     printf("\n\t*** Valor fornecido para o RGM do aluno fora de padrao ***"
           "\n\t*** Formato: [XXXXXXXX] (8 digitos, apenas numeros) ***"
           "\n\t*** Por favor, forneca um valor valido ***\n");
      return 0;
    }
  }
  return 1;
}
