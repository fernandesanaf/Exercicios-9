#include <stdio.h>

// esse programa tem como função multiplicar dois numeros reais

void main(){
    float numero1;
    float numero2;
    float multiplicacao;
    
    printf("digite um numero: ");
    scanf("%f", &numero1);
    printf("digite outro numero: ");
    scanf("%f", &numero2);
    multiplicacao = numero1 * numero2;
    printf("resultado: %.2f\n",multiplicacao);
}