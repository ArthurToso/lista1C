#include <stdio.h>

int main(){

    float kmHora, mSegundo;

    printf("Digite a velocidade em Km/h: ");
    scanf("%f", &kmHora);

    mSegundo = kmHora/3.6;

    printf(" %.2f Km/h em metros/segundo eh %.2f",kmHora, mSegundo);


    return 0;
}