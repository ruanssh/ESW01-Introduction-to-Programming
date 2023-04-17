#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num_turmas = 14;
    int total_turmas_com_ausencia = 0;
    int i, j, num_alunos, num_faltas;
    char presenca;

    printf("Existem %d turmas, vamos calcular a porcentagem de ausência.\n", num_turmas);

    for (i = 0; i < num_turmas; i++) {
        printf("\nQuantos alunos estão matriculados na turma %c?", 'A' + i);
        scanf("%d", &num_alunos);

        num_faltas = 0;
        for (j = 0; j < num_alunos; j++) {
            printf("Aluno presente? [P] - Presente | [A] - Ausente: ");
            scanf(" %c", &presenca);
            while (getchar() != '\n'); // limpa o buffer de entrada

            if (presenca == 'P') {
                // Não faz nada
            } else if (presenca == 'A') {
                num_faltas++;
            } else {
                printf("  !!!!!  Digite um valor válido  !!!!!\n");
                j--;
            }
        }

        float porcentagem_ausencia = ((float) num_faltas / num_alunos) * 100;
        printf("%.2f%% de faltas.\n", porcentagem_ausencia);

        if (porcentagem_ausencia > 5) {
            total_turmas_com_ausencia++;
        }
    }

    printf("\nTotal de turmas com porcentagem de ausência superior a 5%%: %d\n", total_turmas_com_ausencia);

    return 0;
}

