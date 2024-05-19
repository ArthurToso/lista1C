#include <stdio.h>

int main(){

    int num[10];
    int aux, soma;

    for (int i=0; i <10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &aux);
        if(aux >= 0){
            num[i] = aux;
        }else{
            printf("Numero ignorado pois eh negativo!");
        }
    }

    for (int i=0; i < 10; i++){
        soma += num[i];
    }

    int media = soma / 10;
    printf("A media dos numeros digitados eh: %d",media);

    return 0;
}

