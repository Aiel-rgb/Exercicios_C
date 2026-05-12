#include <stdio.h>
#include <stdlib.h>

void Cadastrar(Livro livros[], int n){
    for(int i = 0; i<n ; i++){
        printf("Titulo do livro: ");
        scanf("%[^\n]", livros[i].titulo);
        printf("Autor: ");
        scanf("%[^\n]", livros[i].autor);
        printf("Ano de publicação: ");
        scanf("%[^\n]", &livros[i].ano);
        printf("Está disponivel? (1-Sim / 0-Não)");
        scanf("%d", &livros[i].disponivel);
        printf("%s\n", l[i].disponivel ? "Disponivel" : "Emprestado");
    }
}

int Comparar(Livro livros[], int n){
    Livro *x = (Livro *)a;
    Livro *y = (Livro *)b;
    return (x-> ano > y-> ano) - (x->ano < y-> ano);
}

void Ordenar(Livro livros[], int n){
    qsort(livros, n , sizeof(Livro), Comparar);
}

void Exibir(Livro livros[], int n){
    for(int i = 0; i<n ; i++){
        printf("%d. %s - %s | Ano: %d | %s\n", i+1, livros[i].titulo, livros[i].autor, livros[i].ano, livros[i].disponivel ? "Disponivel" : "Emprestado")
    }
}

void BuscarTitulo(Livro livros[], int n, char busca[]){
    int achou = 0;
    for(int i = 0; i < n ; i++){
        if(strstr(livros[i].titulo, busca) != NULL){
            printf("Encontrado: %s | %s | Ano: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
            achou = 1;
        }
    }
    if(achou == 0){
        printf("Nenhum livro encontrado.\n")
    }
}