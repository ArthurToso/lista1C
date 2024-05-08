#include <stdio.h>

int main(){

    float tempK, tempC;
    
    printf("Digite uma temperatura em Kelvin: ");
    scanf("%f",&tempK);

    tempC = tempK - 273.15;

    printf("%.2f Kelvin equivale a %.2f Celsius",tempK,tempC);
    
    return 0;
}