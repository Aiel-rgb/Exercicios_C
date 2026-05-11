#include <stdio.h>

void Cadastro (Jogador jogador[], int n){
	for(int i = 0; i < n ; i++){
		printf("Nome: ");
		scanf("%s", jogador[i].nome);
		printf("Idade: ");
		scanf("%d", &jogador[i].idade);
		printf("Pontuacao");
		scanf("%f", &jogador[i].pontuacao);
		}
	}

void QuantidadeJogadores (int n){
	printf("Total de jogadores - [%d]", n);
	}

void ExibirJogadores (Jogador jogador[], int n){
	for (int i = 0; i < n; i++){
		printf("%d. %s - Idade: %d | Pontuacao: %1.f\n", i+1, jogador[i].nome, jogador[i].idade, jogador[i].pontuacao);
		}
	}

void OrdemDecrescente (Jogador jogador[], int n){
	Jogador temp;
	for(int i = 0; i < n - 1; i++){
		for(int j=0; j<n-1-i;j++){
			if(jogador[j].pontuacao > jogador[j+1].pontuacao){
				temp = jogador[j];
				jogador[j] = jogador[j+1];
				jogador[j+1] = temp;
				}			
			}
		}
	}
