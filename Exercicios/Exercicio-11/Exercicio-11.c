#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
    int i, a1, a2, n;
 
    printf("Digite o primeiro termo: ");
    scanf("%d", &a1);
 
    printf("Digite o segundo termo: ");
    scanf("%d", &a2);
 
    printf("%d ", a1);
    printf("%d ", a2);
 
    for(i = 3; i <= 10; i++ )
    {
        if(i%2 == 0) 
        {
            n = a2 - a1;
        } 
        else 
        {
            n = a2 + a1;
        }
        printf("%d ", n);
        a1 = a2;
        a2 = n;
    }
}

