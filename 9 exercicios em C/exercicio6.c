#include <stdio.h>

// programa para converter a idade expressa em dias, meses e anos para dias

int main(void){  // esse (void) é um teste
    int ano;
    int meses;
    int dias;
    int quantidadeAnos;
    int anosFinal;
    int mesesFinal;
    int diasFinal;

    printf("digite sua data de aniversario a seguir: \n");
    printf("dia:");
    scanf("%d", &dias);
    printf("mes:");
    scanf("%d", &meses);
    printf("ano:");
    scanf("%d", &ano);
    // a data que eu vou usar pra fazer a operação é dia 01/01/2021 :)
    quantidadeAnos = 2021 - ano; // descobrir a quantidades de anos que será calculada
    anosFinal = quantidadeAnos * 365;
    //printf("voce tem %.2d", anosFinal, "de idade"); // quantidade de dias que resultam da quantidade de anos
    mesesFinal = (meses * 30) + 5; // + 5 para contar os meses que tem 31 dias e menos fevereiro que tem -2 dias
    diasFinal = dias + mesesFinal + anosFinal; //quantidade final de dias
    printf("voce tem %.2d", diasFinal);
    printf(" de idade");
};