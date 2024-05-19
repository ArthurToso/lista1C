#include <stdio.h>

int main(){

    float nota1, nota2;

    printf("Digite a nota do Aluno1: ");
    scanf("%f", &nota1);
    printf("Digite a nota do Aluno2: ");
    scanf("%f", &nota2);

    if(nota1 >= 0.0 && nota1 <= 10.00 && nota2 >= 0.0 && nota2 <= 10 ){
        int media = (nota1 + nota2) / 2;
        printf("A media das 2 notas eh: %d",media);
    }else{
        printf("nota invalida");
    }

    return 0;
}