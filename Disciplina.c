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

int validaCOD(char *cod){
  if(strlen(cod)!=8*sizeof(char)){
    printf("\n\t*** Valor fornecido para código de disciplina fora de padrao ***"
           "\n\t*** Formato: [XXXXXXX] (7 digitos, apenas numeros) ***"
           "\n\t*** Por favor, forneca um valor valido ***\n");
    return 0;
  }
  for(int i = 0; i<7; i++){
    if(!isdigit(cod[i])){
      printf("\n\t*** Valor fornecido para código de disciplina fora de padrao ***"
             "\n\t*** Formato: [XXXXXXX] (7 digitos, apenas numeros) ***"
             "\n\t*** Por favor, forneca um valor valido ***\n");
      return 0;
    }
  }
  return 1;
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
