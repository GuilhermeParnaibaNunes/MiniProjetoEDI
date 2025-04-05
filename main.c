#include "ListaSAlunos.h"

int main(){
  char continuar;
  int sel;
  t_ListaSAlunos lSA;
  float nota;
  char *codD[7], *RGM[8];
  fdiv();
  printf("\t*** Seja bem-vindo(a) ao nosso Sistema de Alunos (SA)! ***\n");
  while(1){
    printf("\n\t*** Deseja inicializar uma lista de alunos? (s/n)***\n\t");
    scanf("%c", &continuar);
    getchar();
    if(continuar == 's'){
      lSA = CriaListaVazia();
      break;
    }else if(continuar == 'n'){
      printf("\t*** Ate mais! ***\n");
      fdiv();
      return 0;
    }else
      printf("\t*** Insira valor valido ***\n");
  }
  fdiv();

  while(1){
    printf("\n\t******MENU******\n"
           "\t*** (1) - Cadastrar aluno;\n"
           "\t*** (2) - Apagar aluno por posi��o;\n"
           "\t*** (3) - Apagar aluno por RGM;\n"
           "\t*** (4) - Exibir aluno por posi��o;\n"
           "\t*** (5) - Exibir aluno por RGM;\n"
           "\t*** (6) - Exibir lista completa de alunos;\n"
           "\t*** (7) - Sair do sistema.\n");
    scanf("%d", &sel);
    switch(sel){
      case 1:
        printf("\n\t*** Informe o RGM do aluno: ");
        fgets(RGM, sizeof(RGM), stdin);
        while(1){
          printf("\n\t*** Deseja cadastrar uma %s? (s/n)***\n\t", (sel)?"disciplina":"outra disciplina");
          scanf("%c", &continuar);
          getchar();
          if(continuar == 's'){
//            if(sel)
  //            t_listaEDisciplina lED;
            printf("\n\t*** Informe o c�digo da disciplina: ");
            fgets(codD, sizeof(codD), stdin);
            printf("\n\t*** Informe a nota do aluno na disciplina: ");
            scanf("%f", &nota);
//            Inserir(*lED, setDisciplina(codD, nota));
            sel = 0;
          }else if(continuar == 'n'){
            printf("\t*** Ok! ***\n");
            fdiv();
            break;
          }else
            printf("\t*** Insira valor valido ***\n");
        }
        printf("\n\t*** Cadastro de aluno conclu�do com sucesso ***");
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
    }
  }

  return 0;
}

/*Main.c

Criar lista de ALuno

Menu:
Cadastrar aluno:
  *pListaAlunos, RGM e *pListaDisciplinas**
    **codigoDisciplina & notaDisciplina.
Apagar aluno por posi��o;
Apagar aluno por nome*;
Apagar aluno por RGM;
Fun��o Exibir Aluno por posi��o;
Fun��o Exibir Aluno por nome*;
Fun��o Exibir Aluno por RGM;
Fun��o Exibir Alunos por curso*;
Fun��o Exibir Lista de Aluno;
Sair do sistema.
*/


//TO DO:
// - Instancionar todos as fun��es padr�o;
// - Instancionar main.c;
// - Solucionar erros;
// - Adicionar pt;
// - Instancionar*;
// - Solucionar erros*;
// - Front-end.
