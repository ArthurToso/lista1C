#include <stdio.h>

int main(){

    int num1,num2,num3;

    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite um numero: ");
    scanf("%d",&num2);
    printf("Digite um numero: ");
    scanf("%d",&num3);

    int soma = num1 + num2 + num3;

    printf("A soma de %d + %d + %d eh : %d",num1,num2,num3,soma);

    return 0;
}