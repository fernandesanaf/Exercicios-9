#include <stdio.h>

// esse programa faz a media ponderavel de nota 2, 3 e 5

int main(){
    int peso1;
    int peso2;
    int peso3; 
    int media1;
    int media2;
    int media3;
    int preMedia;
    int media;

    printf("insira a nota que vale ao peso 1: ");
    scanf("%d", &peso1);
    printf("insira a nota que vale ao peso 2: ");
    scanf("%d", &peso2);
    printf("insira a nota que vale ao peso 3: ");
    scanf("%d", &peso3);
    media1 = peso1*2;
    media2 = peso2*3;
    media3 = peso3*5;
    // soma dos pesos = 10
    preMedia = media1 + media2 + media3;
    media = preMedia/10;
    printf("media: %.2d\n", media);
}