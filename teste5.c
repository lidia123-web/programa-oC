#include <stdio.h>

int main() {
    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNuber = 2147483647;
    printf("Número regular int (int): %d\n", regularNumber);
    printf("Número grande (log int): %ld\n", bigNuber);
    
    bigNuber = 2147483648; // Valor maior que máximo de int
    printf("Número grande atualizado (log int): %ld\n", bigNuber); 
    
    return 0;
}