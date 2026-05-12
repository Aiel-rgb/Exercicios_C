#include <stdio.h>
#include "funções.c"
#include "tipos.c"

int main(){
    int n;
    printf("Quantidade de produtos: ");
    scanf("%d", &n);

    Produto produtos[n];
    
    Cadastro(produtos, n);
    Ordenar(produtos, n);
    Exibir(produtos, n);
    TotalEstoque(produtos, n);
    return 0;
}