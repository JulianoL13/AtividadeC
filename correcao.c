#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char autor[50];
    int nSerie;
} Livro;

typedef struct {
    char nome[50];
    int idade;
    char matricula[12];
    Livro livroEscolhido;
} Aluno;

int main() {
    Aluno *aluno1 = (Aluno*)malloc(sizeof(Aluno)); 
    Livro *livro1 = (Livro*)malloc(sizeof(Livro));

    strcpy(livro1->nome, "Harry Potter e a Pedra Filosofal");
    strcpy(livro1->autor, "J.K. Rowling"); 
    livro1->nSerie = 1234567891;

    printf("Entre com o nome do aluno: ");
    scanf("%s", aluno1->nome); 

    printf("Entre com a idade do aluno: ");
    scanf("%d", &aluno1->idade); 

    printf("Entre com a matricula do aluno: ");
    scanf("%s", aluno1->matricula); 

    aluno1->livroEscolhido = *livro1; 

    // Exibe os dados do aluno e do livro escolhido
    printf("\nDados do Aluno:\n");
    printf("Nome: %s\n", aluno1->nome);
    printf("Idade: %d\n", aluno1->idade);
    printf("Matricula: %s\n", aluno1->matricula);
    printf("\nLivro Escolhido:\n");
    printf("Nome: %s\n", aluno1->livroEscolhido.nome);
    printf("Autor: %s\n", aluno1->livroEscolhido.autor);
    printf("Numero de Serie: %d\n", aluno1->livroEscolhido.nSerie);

    free(aluno1); 
    free(livro1);
}
