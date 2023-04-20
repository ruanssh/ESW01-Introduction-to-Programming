#include <stdio.h>

int main(){
    float sum = 0.0;
    int i, denominator = 7, numerator = 70;

    for (i = 0; i < 100; i++){
        printf("%d/%d\n", numerator, denominator);
        sum += (float)numerator / denominator;
        denominator += 7;
        numerator--;
    }

    printf("O somatório da sequência é: %.2f", sum);
    return 0;
}

