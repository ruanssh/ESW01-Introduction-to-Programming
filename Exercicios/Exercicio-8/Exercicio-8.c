#include <stdio.h>
#include <string.h>

int main() {
    char estado[3];

    printf("Informe sua UF (AM, RJ, PA ou AC):");
    scanf("%s", estado);

    if(strcmp(estado, "AM") == 0) {
        printf("\nVoce e amazonense.\n");
    } else if(strcmp(estado, "RJ") == 0) {
        printf("\nVoce e carioca.\n");
    } else if(strcmp(estado, "PA") == 0) {
        printf("\nVoce e paraense.\n");
    } else if(strcmp(estado, "AC") == 0) {
        printf("\nVoce e acreano(a)\n");
    } else {
        printf("\nPrograma indisponivel para a UF informada.\n");
    }

    return 0;
}

