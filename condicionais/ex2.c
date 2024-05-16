#include <stdio.h>
#include <math.h>

int main (){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    int raizQ = (int)sqrt(num);

    if(num > 0){
        printf("Ah raiz quadrada de %d eh %d", num, raizQ);
    }else if (num < 0){
        printf("numero invalido");
    }else{
        printf("Digite um numero!");
    }

    return 0;
}