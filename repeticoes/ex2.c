#include <stdio.h>

int main (){

    int aux = 1;

    for(int i=0; i < 100; i++){
        printf("%d \n", aux);
        aux++;
    }

    aux = 1;

    while(aux != 101){
        printf("%d \n", aux);
        aux++;
    }

    aux = 1;

    do{
        printf("%d \n", aux);
        aux++;
    }while(aux !=101);

}