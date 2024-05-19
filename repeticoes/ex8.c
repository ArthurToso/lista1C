#include <stdio.h>

int main() {
    int num[10];
    int maior, menor;

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    maior = num[0];
    menor = num[0];

    for (int i = 1; i < 10; i++) {
        if (num[i] > maior) {
            maior = num[i];
        }
        if (num[i] < menor) {
            menor = num[i];
        }
    }

    printf("O maior número digitado eh: %d\n", maior);
    printf("O menor número digitado eh: %d\n", menor);

    return 0;
}