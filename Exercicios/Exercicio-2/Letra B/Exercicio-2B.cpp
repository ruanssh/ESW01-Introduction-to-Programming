#include <stdio.h>

int main(){
	char nome[15];
	char sobrenome[15];
	int idade;
	
	printf("Digite o nome do usuario.\n");
	scanf("%s", nome);
	
	printf("Digite o sobrenome do usuario.\n");
	scanf("%s", sobrenome);
	
	printf("Digite a idade.\n");
	scanf("%d", &idade);
	
	printf("%s %s tem %d anos.\n", nome, sobrenome, idade);
	
	return 0;
	
}
