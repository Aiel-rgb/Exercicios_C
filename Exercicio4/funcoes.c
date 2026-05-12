#include <stdio.h>
#include <stdlib.h>

void Cadastrar(Funcionario funcionarios[], int n){
    for(int i = 0; i<n ; i++){
        printf("Nome do funcionario: ");
        scanf("%[^\n]", funcionarios[i].nome);
        printf("Cargo do funcionario: ");
        scanf("%[^\n]", funcionarios[i].cargo);
        printf("Salario do funcionario: ");
        scanf("%f", &funcionarios[i].salario);
    }
}

int comparar(const void *a, const void *b){
    Funcionario *x = (Funcionario *)a;
    Funcionario *y = (Funcionario *)b;
    return (x->salario > y->salario) - (x->salario < y->salario);
}

void Ordenar(Funcionario funcionarios[], int n){
    qsort(funcionarios, n , sizeof(Funcionario), comparar);
}

void Exibir(Funcionario funcionarios[], int n){
    for(int i = 0; i < n ; i++){
        printf("%d. %s | Cargo: %s | Salario: R$ %.1f\n", i+1, funcionarios[i].nome, funcionarios[i].cargo, funcionarios[i].salario);
    }
}

void MaiorSalario(Funcionario funcionarios[], int n){
    float maior = funcionarios[0].salario;
    char *nome = funcionarios[0].nome;
    for(int i = 1; i<n ; i++){
        if(funcionarios[i].salario > maior){
            maior = funcionarios[i].salario;
            nome = funcionarios[i].nome;
        }
    printf("Maior salario: R$ %.1f | Nome: %s\n", maior, nome);
    }
}

void MediaSalarial(Funcionario funcionarios[], int n){
    float media = 0;
    for(int i = 0; i<n ; i++){
        media += funcionarios[i].salario;
    }
    media /= n;
    printf("Media salarial: R$ %.1f\n", media);
}