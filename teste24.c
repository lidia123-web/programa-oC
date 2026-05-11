#include <stdio.h>
int main(){
    int opcao;
    float nota1, nota2, media;
    // Exebição do menu
    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determonar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    // Entrada de notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    // Calculo da média
    media = (nota1 + nota2) / 2;
    printf("A média do estudante é: %.2f\n", media);

        break;
    case 2:
    // Determonação do status com base na média
    printf("Digite a média do estudante: ");
    scanf("%f", &media);
    if (media >= 7.0) {
        printf("Status: Aprovado\n");
        
    } else if (media >= 5.0) {
        printf("Status: Recuperação\n");
    } else {
        ("Status: Reprovado\n");
    }
        break;
        case 3:
        printf("Saindo...\n");
        break;
        default:
        printf("Opção invalida. Tente novamente\n");
    }
    return 0;
}