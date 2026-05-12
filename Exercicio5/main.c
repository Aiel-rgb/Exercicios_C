#include "tipos.c"
#include "funcoes.c"
#include <stdio.h>

int main(){
    int n;
    printf("Quantidade de livros: \n");
    scanf("%d", &n);

    Livro livros[n];

    Cadastrar(livros,  n);
    Ordenar(livros,  n);
    Exibir(livros,  n);
    BuscarTitulo(livros,  n);
    ContarDisponiveis(livros,  n);
}