#include <stdio.h>

int main(){

    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d",&num1, &num2);

    if(num1 > num2){
        printf("%d eh maior que %d\n",num1,num2);
        printf("A diferenca entre eles eh: %d",num1 - num2);
    }else{
        printf("%d eh maior que %d\n", num2,num1);
        printf("A diferenca entre eles eh: %d", num2 - num1);
    }

    return 0;
}