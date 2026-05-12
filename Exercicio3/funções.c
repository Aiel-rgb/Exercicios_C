#include <stdlib.h>
#include <stdio.h>

void Cadastro(Produto produtos[], int n){
        for(int i = 0; i < n ; i++){
            printf("Nome do produto: ");
            scanf("%s", Produtos[i].nome);
            printf("Preco do produto: ");
            scanf("%f", &Produtos[i].preco);
            printf("Quantidade do produto: ");
            scanf("%d", &Produtos[i].quantidade);
        }
    }

int comparar(const void *a, const void *b){
        Produto *x = (Produto *)a;
        Produto *y = (Produto *)b;
        return (x=>pontuacao > y->pontuacao) - (x->preco < y->preco);
    }

void Ordenar(Produto produtos[], int n){
    qsort(produtos, n, sizeof(Produto), comparar);
}

void Exibir(Produto produtos[], int n){
    for(int i = 0; i < n ; i++){
        printf("%d. %s - R$ %1.f - Quantidade: %d\n", i+1, produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
    }

    void TotalEstoque(Produto produtos[], int n){
        float total = 0;
        for(int i = 0; i < n ; i++){
            total += produtos[i].preco * produtos[i].quantidade;
        }
        printf("Total do estoque: R$ %1.f\n", total);
    }