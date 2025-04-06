#include "ListaSAlunos.h"

int main(){
  char continuar;
  int sel, pos;
  t_ListaSAlunos lSA;
  t_ListaSAlunos *plSA = &lSA;
  float nota;
  char *codD[8], *RGM[9];
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
           "\t*** (2) - Apagar aluno por posicao;\n"
           "\t*** (3) - Apagar aluno por RGM;\n"
           "\t*** (4) - Exibir aluno por posicao;\n"
           "\t*** (5) - Exibir aluno por RGM;\n"
           "\t*** (6) - Exibir lista completa de alunos;\n"
           "\t*** (7) - Sair do sistema.\n\t");
    scanf("%d", &sel);
    getchar();
    switch(sel){
      case 1:
        printf("\n\t*** Informe o RGM do aluno: ");
        fgets(RGM, sizeof(RGM), stdin);
        while(continuar != 'n'){
          printf("\n\t*** Deseja cadastrar uma %s? (s/n)***\n\t", (sel)?"disciplina":"outra disciplina");
          scanf(" %c", &continuar);
          getchar();
          if(continuar == 's'){
            printf("\t*** Informe o codigo da disciplina: ");
            fgets(codD, sizeof(codD), stdin);
            printf("\n\t*** codD = %s\n", codD);
            printf("\n\t*** Informe a nota do aluno na disciplina: ");
            scanf("%f", &nota);
            getchar();
            if(sel)
              pos = aInserir(plSA, RGM, codD, nota);
            else
              Inserir(&(lSA.disciplinas[pos]), setDisciplina(codD, nota), 0);
            printf("\n\t___ POS =  %d___\n", pos);
            sel = 0;
          }else if(continuar == 'n'){
            if(sel)
              printf("\n\t*** Nao foi possivel cadastrar aluno, eh preciso ao menos uma disciplina ***\n");
            else
              printf("\n\t*** Ok! ***");
          }else
            printf("\t*** Insira valor valido ***\n");
        }
        printf("\n\t*** Cadastro de aluno concluido com sucesso ***");
        continuar = 's';
        fdiv();
        break;
      case 2:
        printf("\t*** Qual a posicao do aluno que deseja apagar? ");
        scanf("%d", &sel);
        aRemoverP(plSA, sel-1);
        puts("\t*** Aluno removido com sucesso ***");
        fdiv();
        break;
      case 3:
        printf("\t*** Qual o RGM do aluno que deseja apagar? ");
        fgets(RGM, sizeof(RGM), stdin);
        printf("----- RGM SALVO: %s _DEBUG_-----", RGM);
        RemoverR(plSA, RGM);
        puts("\t*** Aluno removido com sucesso ***");
        fdiv();
        break;
      case 4:
        printf("\t*** Qual a posicao do aluno que deseja visualizar? ");
        scanf("%d", &sel);
        ExibirAlunoP(plSA, sel-1);
        fdiv();
        break;
      case 5:
        printf("\t*** Qual o RGM do aluno que deseja visualizar? ");
        fgets(RGM, sizeof(RGM), stdin);
        printf("----- RGM SALVO: %s _DEBUG_-----", RGM);
        ExibirAlunoP(plSA, sel-1);
        fdiv();
        break;
      case 6:
        printf("\t*** Lista completa do SA ***\n");
        aExibirLista(plSA);
        fdiv();
        break;
      case 7:
        printf("\t*** Ate mais! ***\n");
        return 0;
      default:
        printf("\t*** Insira valor valido ***\n");
        break;
    }
  }
}

/*Main.c

Criar lista de ALuno

Menu:
Cadastrar aluno:
  *pListaAlunos, RGM e *pListaDisciplinas**
    **codigoDisciplina & notaDisciplina.
Apagar aluno por posição;
Apagar aluno por nome*;
Apagar aluno por RGM;
Função Exibir Aluno por posição;
Função Exibir Aluno por nome*;
Função Exibir Aluno por RGM;
Função Exibir Alunos por curso*;
Função Exibir Lista de Aluno;
Sair do sistema.
*/


//TO DO:
// - Instancionar main.c;
// - Solucionar erros;
// - Corrigir chars RGM e COD, adicionar unidade extra para o '/0';
// - Renomear funções de forma mais significativa;
// - Adicionar dicionário português;
// - Reestruturar main.c para aproveitar os códigos de erro fornecidos pelas funções;
// - Reestruturar main.c adicionando "Gerenciar disciplinas do aluno";
// - Instancionar extras*;
// - Solucionar erros*;
// - Front-end.
