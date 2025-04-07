# MiniProjetoEDI
Mini projeto de Estrutura de Dados I - Listas sequencial e encadeada

ESQUEMATIZAÇÃO GERAL:

Disciplina.h
t_Disciplina
- Nome*;
- Código;
- Nota***.
- setDisciplina(char *cod, float nota)

Disciplina.c

Aluno.h
t_Aluno
- Nome*;
- Idade*;
- Curso*;
- Mensalidade*;
- RGM;
- Lista ENCAD Disciplinas;
/*Setter para um aluno*/
    // - Retorna 1 para procedimento bem-sucedido;
    // - Retorna 0 para procedimento malsucedido;
    // - Retorna -1 para RGM inválido;
    // - Recebe ponteiro para o objeto aluno.
    // - Recebe RGM a ser cadastrado.
int setAluno(char *, listaEDisciplinas);

Aluno.c

ListaSEQ.h
- Criar;
- Válida;
- Vazia;
- Cheia;
- Tamanho ocupado;
- Tamanho restante;
- Inserir elemento + busca binária;
- Procurar elemento por nome*;
- Procurar elemento por RGM;
- Apagar elemento por posição;
- Apagar elemento por nome*;
- Apagar elemento por RGM;
- Desloca esq.;
- Desloca dir.;
- Exibir lista;
- Exibir aluno por posição;
- Exibir aluno por nome*;
- Exibir aluno por RGM;
- Exibir alunos por curso*.

ListaSEQ.c

ListaENCAD.h
- Criar;
- Vazia;
- Tamanho;
- Inserir elemento;
- Apagar elemento por posição;
- Apagar elemento por nome;
- Apagar elemento por código da disciplina;
- Encontrar elemento por posição;
- Encontrar elemento por nome;
- Encontrar elemento por código da disciplina;
- Exibir lista;
- Exibir disciplina por posição;
- Exibir disciplina por nome;
- Exibir disciplina por código da disciplina.
  
ListaENCAD.c

Main.c
- Menu:
     - Função Exibir Lista;
     - Cadastrar aluno:
     - Loop Aluno:
           - RGM.     
     - Loop Disciplinas:
           - Código;
           - Nota.
     - Apagar aluno por posição;
     - Apagar aluno por nome*;
     - Apagar aluno por RGM;
     - Função Exibir Aluno por posição;
     - Função Exibir Aluno por nome*;
     - Função Exibir Aluno por RGM;
     - Função Exibir Alunos por curso*;

* = adicionar posteriormente;
*** = dúvida.

TO DO:
- Criar arquivos.h;
- Criar arquivos.c;
- Comentar arquivos (Padronizar nomes);
- Criar main;
- Comentar main;
- Garantir que os dados inseridos batem com os requisitados (strings  de códigos/RGM devem conter apenas números por ex.);
- Setar sistemas de erro;
- Implementar *;
- Front-end.


/*DISCLAIMER*/
// Tamanho e posição são sempre tratados em termos não computacionais, ou seja:
// São tratados como tamanho e posição convencionais .:. [0] = 1.
