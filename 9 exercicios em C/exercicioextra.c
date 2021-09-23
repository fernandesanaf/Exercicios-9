/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 21/09/2021
MATÉRIA: Construção de Algoritmos

ATIVIDADE EXTRA:
escrever um algoritmo que permita o usuario digite uma data dd/mm/aaaa e o
algoritmo de como saida qual dia da semana é aquela data
*/

#include <stdio.h>

int main(){
    int dia;
    int mes;
    int ano;
    int a;
    int b;
    int c;
    int d;
    int resultado;
    int semana;

    printf("DIGITE O DIA:");
    scanf("%d", &dia);
    printf("DIGITE O MES:");
    scanf("%d", &mes);
    printf("DIGITE O ANO:");
    scanf("%d", &ano);

        a = (14 - mes)/12;
        b = ano - a;
        c = mes + (12 * a) - 2;
        d = dia + ((31 * c)/12) + b + (b/4) - (b/100) + (b/400);
        resultado = (d % 7) + 1;

        
        if(resultado == 1){
            printf("DOMINGO");
        }
        if(resultado == 2){
            printf("SEGUNDA-FEIRA");
        }
        if(resultado == 3){
            printf("TERCA-FEIRA");
        }
        if(resultado == 4){
            printf("QUARTA-FEIRA");
        }
        if(resultado == 5){
            printf("QUINTA-FEIRA");
        }
        if(resultado == 6){
            printf("SEXTA-FEIRA");
        }
        if(resultado == 7){
            printf("SABADO");
        }

}
