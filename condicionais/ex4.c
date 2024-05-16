#include <stdio.h>
#include <math.h>

int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num >= 0){
        printf("%d ao quadrado eh %d \n",num, num*num);
        printf("A raiz quadrada de %d eh %d", num, (int)sqrt(num));
    }else{
        printf("numero negativo!");
    }

    return 0;
}