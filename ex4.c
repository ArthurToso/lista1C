#include <stdio.h>

int main(){

    float num,result;

    printf("Digite um numero: ");
    scanf("%f",&num);

    result = num * num;

    printf("O quadrado de %.2f eh: %.2f",num,result);

    return 0;
}