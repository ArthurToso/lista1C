#include <stdio.h>

int main(){

    float altura;
    char sexo;
    printf("Digite H para homem e M para mulher:");
    scanf("%c", &sexo);
    printf("Digite sua altura:");
    scanf("%f", &altura);

    if(sexo == 'H'){
        float pesoIdeal = (72.7 * altura) - 58;
        printf("%.2f", pesoIdeal);
    }else{
        float pesoIdeal = (62.1 * altura) - 44.7;
        printf("%.2f", pesoIdeal);
    }

    return 0;
}