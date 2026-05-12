#include <stdio.h>
#include "funcoes.c"
#include "tipo.c"

int main(){
    int n;
    printf("Quantidade de funcionarios: ");
    scanf("%d", &n);

    Funcionario funcionarios[n];

    Cadastrar(funcionarios, n);
    Ordenar(funcionarios, n);
    Exibir(funcionarios, n);
    MaiorSalario(funcionarios, n);
    MediaSalarial(funcionarios, n);
    return 0;
}