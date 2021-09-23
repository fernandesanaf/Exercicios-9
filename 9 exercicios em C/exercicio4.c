#include <stdio.h>

// programa para descobrir se o numero é par ou impar 

int main(void){
    int numero;

    printf("digite o numero: ");
    scanf("%d", &numero); // precisa ter o & !!!!!!!!!!!
    //operação de escolha
    if ((numero % 2)== 0){  // % = mod
        printf("o numero par");
    }
    else{
        printf("o numero impar");
    }
};