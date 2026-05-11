#include "tipos.c"
#include "funcoes.c"
#include <stdio.h>

void Cadastro(Aluno alunos[], int n);
void Ordenar(Aluno alunos[], int n);
void ExibirLista(Aluno alunos[], int n);

int main (){
	int n;
	printf("Qtd de alunos: \n");
	scanf("%d", &n);
	
	Aluno alunos[n];
	
	Cadastro(alunos, n);
	Ordenar(alunos, n);
	ExibirLista(alunos, n);
	
	return 0;
}
