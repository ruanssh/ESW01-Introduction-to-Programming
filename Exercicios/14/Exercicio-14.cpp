#include <stdio.h>

int main() {
  int sexo, cor_olhos, cor_cabelos, idade, maior_idade = 0, total_feminino = 0, total_feminino_verde_louro = 0;
  float total_habitantes = 0, percentual_feminino_verde_louro = 0.0;

  do {
  	printf("Digite a idade do habitante (-1 Para sair): ");
    scanf("%d", &idade);

	if (idade == -1) {
      	break; 
    }
	    
    printf("Digite o sexo do habitante ([0] - Masculino | [1] - Feminino): ");
    scanf("%d", &sexo);

    printf("Digite a cor dos olhos do habitante ([0] - Azul | [1] - Verde | [2] - Castanho): ");
    scanf("%d", &cor_olhos);

    printf("Digite a cor dos cabelos do habitante ([0] - Louro | [1] - Castanho | [2] - Preto): ");
    scanf("%d", &cor_cabelos);

    if (idade > maior_idade) {
      maior_idade = idade;
    }

    if (sexo == 1 && idade >= 18 && idade <= 35 && cor_olhos == 1 && cor_cabelos == 0) {
      total_feminino_verde_louro++;
    }

    if (sexo == 1) {
      total_feminino++;
    }

    total_habitantes++;
  } while (idade != -1);

  percentual_feminino_verde_louro = (total_feminino > 0) ? (total_feminino_verde_louro / total_feminino) * 100 : 0.0;

  printf("\nMaior idade dos habitantes: %d\n", maior_idade);
  printf("Percentual de individuos do sexo feminino com olhos verdes e cabelos louros: %.2f%%\n", percentual_feminino_verde_louro);

  return 0;
}

