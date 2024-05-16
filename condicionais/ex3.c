#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    if (num >= 0) {
        printf("A raiz quadrada de %.2f eh %.2f\n", num, sqrt(num));
    } else {
        printf("O quadrado de %.2f eh %.2f\n", num, num * num);
    }

    return 0;
}