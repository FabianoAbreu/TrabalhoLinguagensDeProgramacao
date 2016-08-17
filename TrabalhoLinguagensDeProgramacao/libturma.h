#ifndef LIBTURMA_H
#define LIBTURMA_H
#include "libaluno.h"
#include "libprofessor.h"
#include "libdisciplina.h"
#include "libboolean.h"

struct Turma
{
	int codigo;
	professor *professorDaTurma;
	disciplina *disciplinaDaTurma;
	listaDeAlunos *alunosDaTurma;
	struct Turma *proximaTurma;
};

typedef struct Turma turma;

struct ListaDeTurmas
{
	turma *inicio;
};

typedef struct ListaDeTurmas listaDeTurmas;

turma *criarTurma(int codigo);

turma *buscarTurma(listaDeTurmas *lista, int codigo);

#endif // !LIBTURMA_H


