#include <stdio.h>

int main(){

    int aux = 1;

    for(int i=0; i < 3; i++){
        int result = aux * 5;
        printf("%d \n",result);
        aux++;
    }

    return 0;
}