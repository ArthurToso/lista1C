#include <stdio.h>

int main(){

    float salario, emprestimo;
    
    printf("Digite o salario e o valor do emprestimo: ");
    scanf("%f %f", &salario, &emprestimo);
    float salarioPorcent = salario * 0.2;

    if(emprestimo > salarioPorcent){
        printf("Emprestimo nao concedido");
    }else{
        printf("Emprestimo concedido");
    }


    return 0;
}