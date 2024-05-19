#include <stdio.h>

int main(){

    int soma;

    for(int i=0; i <= 100; i++){
        if(i % 2 == 0){
            soma += i;
        }
    }

    printf("A soma dos 50 primeiros numeros pares eh: %d", soma);

    return 0;
}