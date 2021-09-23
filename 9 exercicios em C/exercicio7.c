#include <stdio.h>

// esse programa converte dias em uma idade

int main(){
    int idade;
    int anos;
    int x; //essa varial é a quantidade de dias que sobrou dos anos
    int meses;
    int dias;

    printf("digite sua idade em dias:");
    scanf("%d", &idade);
    anos = idade/365;
    x = idade - (365 * anos);
    meses = x/30;
    dias = x - (30*meses);
    printf("Sua idade em: \n");
    printf("anos: %.2d\n", anos);
    printf("meses: %.2d\n", meses);
    printf("dias: %.2d\n", dias);
}