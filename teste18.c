#include <stdio.h>
int main(){
    int opcao;

    printf("Escolha uma opção:\n");
    printf("1.Verificar saldo\n");
    printf("2.Fazer deposito\n");
    printf("3.Fazer saque\n");

    switch (opcao)
    {
    case 1:
    printf("Saldo atual: R$ 1.000,00\n");

        break;
        case 2:
        printf("Deposito realizado com sucesso\n");
        break;
        case 3:
        printf("Saque realizado com sucesso\n");
        break;
    
    default:
        printf("Opção inválida");
    }
    return 0;
}