#include <stdio.h>

int main(){
    float somatorio = 0.0;
    int iteracao, denominador = 7, numerador = 70, numero_termos;

    printf("Digite o numero de termos da sequencia: ");
    scanf("%d", &numero_termos);

    for (iteracao = 0; iteracao < numero_termos; iteracao++){
        printf("%d/%d\n", numerador, denominador);
        somatorio += (float)numerador / denominador;
        denominador += 7;
        numerador--;
    }

    printf("O somatorio dos %d primeiros termos da sequencia e: %.2f", numero_termos, somatorio);
    return 0;
}

