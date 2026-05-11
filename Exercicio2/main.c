#include "tipos.c"
#include "funcoes.c"
#include <stdio.h>

void Cadastro(Jogador jogador[], int n);
void QuantidadeJogadores(int n);
void ExibirJogadores(Jogador jogador[], int n);
void OrdemDecrescente(Jogador jogador[], int n);

int main(){
	int n;
	printf("Quantidade de jogadores: ");
	scanf("%d", &n);
	
	Jogador jogador[n];
	
	Cadastro(jogador, n);
	QuantidadeJogadores(n);
	ExibirJogadores(jogador, n);
	OrdemDecrescente(jogador, n);
	
	return 0;
	}
