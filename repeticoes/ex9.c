#include <stdio.h>

int main(){

     int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Os %d primeiros numeros impares sao:\n", num);
    for (int i = 1; i <= num; i++) {
        printf("%d ", 2*i - 1);
    }
    printf("\n");

    return 0;
}