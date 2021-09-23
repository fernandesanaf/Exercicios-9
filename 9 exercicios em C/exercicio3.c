#include <stdio.h>

// esse programa tem como função dividir dois numeros reais

int main(){
    float numero1;
    float numero2;
    float resultadoDivisao;
    
    printf("digite um numero: ");
    scanf("%f", &numero1);
    printf("digite outro numero: ");
    scanf("%f", &numero2);
    resultadoDivisao = numero1 / numero2;
    printf("resultado: %.2f\n", resultadoDivisao);
}