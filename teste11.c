#include <stdio.h>
int main() {
    //Declarar variáveis Produto, u i estoque, double valor unitário, double valor total;
    char produtoA[50] = "Produto A";
    char produtoB[50] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;
    
    float valorA = 10.50;
    float valorB = 20.40;
    
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMininoB = 2500;

    double valorTotalA;
    double valorTotalC;

    int resultadoA, resultadoB;
    

    //Exibir as informações dos produtos
    printf("Produto %s tem estoque %u e o valor untario é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

    //Comparações com valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMininoB;

    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque monimo %d\n", produtoB, resultadoB);

    //Comparações entre os valores totais dos produtos
    printf("O valor total de A (R$%.2f) é maior que o valor total B: (R$%.2f) %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));    




}