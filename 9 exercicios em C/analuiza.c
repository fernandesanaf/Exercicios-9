#include <stdio.h>
//converter dias em anos, meses e dias
void main (){
    float total;
    int anos;
    int meses;
    int dias;
    int final;

    printf("\nDigite sua idade em dias: \n\n");
    scanf("%f", &total);
    anos = (total/365);
    meses = (total-(365*anos));
    dias = (meses/30);
    final = (meses-(30*dias));
    printf("Voce possui %i Anos \n\n %i Meses \n\n e %i Dias\n\n",anos, dias, final);
}