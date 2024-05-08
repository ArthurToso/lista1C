#include <stdio.h>

int main(){

    float tempC, tempK;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%f",&tempC);

    tempK = tempC + 273.15;

    printf("%.2f Celsius equivale a %.2f Kelvin",tempC,tempK);
    
    return 0;
}