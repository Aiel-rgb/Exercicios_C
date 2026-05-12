#include <stdio.h>

void Cadastro (Aluno alunos[], int n){
	for(int i = 0; i<n ; i++){
		printf("Nome do aluno: ");
		scanf("%49s", alunos[i].nome);
		printf("Nota do aluno: ");
		scanf("%f", &alunos[i].nota);
	}
}

void Ordenar (Aluno alunos[], int n){
	Aluno temp;
	
	for(int i = 0; i < n - 1; i++){
		for(int j=0; j<n-1-i;j++){
			if(alunos[j].nota > alunos[j+1].nota){
				temp = alunos[j];
				alunos[j] = alunos[j+1];
				alunos[j+1] = temp;
			}
		}
	}
}

void ExibirLista(Aluno alunos[] , int n){
	for (int i = 0; i < n; i++){
		printf("%d. %s - %.1f\n", i+1, alunos[i].nome, alunos[i].nota);
	}
	}
