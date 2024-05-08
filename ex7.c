#include <stdio.h>

int main(){

    int tempF, tempC;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%d",&tempF);

    tempC = 5 * (tempF - 32) / 9;

    printf("%d em Celsius eh igual a: %d",tempF,tempC);

    return 0;
}