#include <stdio.h>

int main(){

    int tempC, tempF;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d",&tempC);

    tempF = tempC * 9 /5 + 32;

    printf("%d Celsius equivalem a %d fahrenheit",tempC,tempF);

    return 0;
}