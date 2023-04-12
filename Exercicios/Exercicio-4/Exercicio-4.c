#include <stdio.h>
#include <math.h>

// nao achei outro jeito de fazer sem incluir a biblioteca <math.h> tentei entrar em contato pra saber se era permitido, nao nao tive sucesso. enfim, o codigo funciona.

int main() {
   float x1, y1, x2, y2, x3, y3;
   float d1, d2, d3;

   printf("Digite o ponto 1 (x1,y1):\n");
   scanf("%f %f", &x1, &y1);

   printf("Digite o ponto 2 (x2,y2):\n");
   scanf("%f %f", &x2, &y2);

   printf("Digite o ponto 3 (x3,y3):\n");
   scanf("%f %f", &x3, &y3);

   d1 = sqrtf((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
   d2 = sqrtf((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
   d3 = sqrtf((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));

   printf("A distancia entre os pontos é:\n");
   printf("P1 e P2: %.2f\n", d1);
   printf("P2 e P3: %.2f\n", d2);
   printf("P3 e P1: %.2f\n", d3);

   return 0;
}
