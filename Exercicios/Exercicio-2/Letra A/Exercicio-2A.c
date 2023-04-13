#include <stdio.h>

int main() 
{
    float n1, n2, media;
    
    printf("Informe a primeira nota.\n");
    scanf("%f", &n1);
    
    printf("Informe a segunda nota.\n");
    scanf("%f", &n2);
    
    media = (n1 + n2)/2;
    
    printf("A media final e: %.2f\n", media);
	return 0;
}
