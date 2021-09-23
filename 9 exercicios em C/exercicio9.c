#include <stdio.h>

// esse programa tem como finalidade converter segundos de um evento em horas minutos e segundos

int main(){
    int evento;
    int horas;
    int x;
    int minuto;
    int segundos;

    printf("insira a duracao do evento em segundos: ");
    scanf("%d", &evento);
    horas = evento / 3600;
    x = evento - (3600 * horas);
    minuto = x/60;
    segundos = x - (60 * minuto);
    printf("a duracao do evento: \n");
    printf("horas: %.2d\n", horas);
    printf("minuto: %.2d\n", minuto);
    printf("segundos: %.2d\n", segundos);
}