#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome[50];
    int matricula;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%s", nome);

    printf("Digite a sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matrícula: %d", nome, matricula);
    printf("Idade: %d - Altura: %f", idade, altura);


    return 0;

}