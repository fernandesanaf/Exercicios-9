#include <stdio.h>

// programa para descobrir se o numero é maior que 10

int main(void){
    int numero;

    printf("digite o numero: ");
    scanf("%d", &numero); 
    if (numero > 10){  // > maior
        printf("o numero maior que 10");
    }
    else{
        printf("o numero menor que 10");
    }
};