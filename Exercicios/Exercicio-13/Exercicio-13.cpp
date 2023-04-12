#include <stdio.h>

int main() {
    float x, termo, soma = 0;
    int i, j;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    for (i = 25; i >= 1; i--) {
        if ( i % 2 == 0){
            termo  = -1;
        } else {
            termo = 1;
        }
        float potencia_x = 1;
        for (j = 1; j <= i; j++) {
            potencia_x *= x;
        }
        termo *= potencia_x / i;
        soma += termo;
    }

    printf("O resultado do somatorio: %f", soma);

    return 0;
}
