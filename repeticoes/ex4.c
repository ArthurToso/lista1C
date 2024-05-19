#include <stdio.h>

int main(){

    int num = 0;

    for (int i=0; i < 101; i++){
        printf("%d \n", num);
        num += 1000;
    }

    return 0;
}