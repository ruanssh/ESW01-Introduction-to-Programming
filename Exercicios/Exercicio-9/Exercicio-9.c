#include <stdio.h>
#include <locale.h>

void cabecalho(void){
    printf("***** Medidor de dosagem *****");
}

int main()
{
    int idade, gotasPorDose, dosagem, gotas = 20;
    char nome[10];
    float peso;
    
    printf("Digite o nome do paciente: ");
    scanf("%s", nome);
    printf("Digite a idade do paciente: ");
    scanf("%d", &idade);
    printf("Digite o peso do paciente: ");
    scanf("%f", &peso);
    
    if(idade >= 12 && peso >= 60){
        gotasPorDose = (1000 * gotas)/500;
        
        printf("O paciente %s(%d anos) de peso %.1f kg terá que tomar 1000mg que correspondem a %d gotas.", nome, idade, peso, gotasPorDose);
    }
    else if(idade >= 12 && peso < 60){
        gotasPorDose = (875 * gotas)/500;
        
        printf("O paciente %s(%d anos) de peso %.1f kg terá que tomar 875mg que correspondem a %d gotas.", nome, idade, peso, gotasPorDose);
    }
     else if(idade < 12){
        if(peso > 30){
        gotasPorDose = (750 * gotas)/500;
        
        printf("O paciente %s(%d anos) de peso %.1f kg terá que tomar 750mg que correspondem a %d gotas.", nome, idade, peso, gotasPorDose);
        }
        if(peso <= 30 ){
        gotasPorDose = (500 * gotas)/500;
        
        printf("O paciente %s(%d anos) de peso %.1f kg terá que tomar 500mg que correspondem a %d gotas.", nome, idade, peso, gotasPorDose);
        }
        if(peso <= 24){
        gotasPorDose = (375 * gotas)/500;
        
        printf("O paciente %s(%d anos) de peso %.1f kg terá que tomar 375mg que correspondem a %d gotas.", nome, idade, peso, gotasPorDose);
        }
        if(peso <= 16){
        gotasPorDose = (250 * gotas)/500;
        
        printf("O paciente %s(%d anos) de peso %.1f kg terá que tomar 250mg que correspondem a %d gotas.", nome, idade, peso, gotasPorDose);
        }
        if(peso <= 9){
        gotasPorDose = (125 * gotas)/500;
        
        printf("O paciente %s(%d anos) de peso %.1f kg terá que tomar 125mg que correspondem a %d gotas.", nome, idade, peso, gotasPorDose);
        }
    }
    return 0;
}
