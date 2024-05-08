#include <stdio.h>

int main(){

    float num, result;

    printf("Digite um numero: ");
    scanf("%f",&num);

    result = num/5;

    printf("A quinta parte de %.2f eh: %.2f",num,result);    

    return 0;
}