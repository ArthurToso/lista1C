#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("o numero digitado eh par");
    }else{
        printf("o numero digitado eh impar");
    }

    return 0;
}