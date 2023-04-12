Algoritmo "Ex04"

var
   x1, y1, x2, y2, x3, y3, d1, d2, d3: real

inicio
   escreva("Digite o ponto 1 (x1, y1): ")
   leia(x1, y1)
   escreva("Digite o ponto 2 (x2, y2): ")
   leia(x2, y2)
   escreva("Digite o ponto 3 (x3, y3): ")
   leia(x3, y3)
   
   d1 <- ((x2-x1)^2 + (y2-y1)^2)^(1/2)
   d2 <- ((x3-x2)^2 + (y3-y2)^2)^(1/2)
   d3 <- ((x1-x3)^2 + (y1-y3)^2)^(1/2)

   escreval("A distância entre o ponto 1 e 2 é: ", d1)
   escreval("A distância entre o ponto 2 e 3 é: ", d2)
   escreval("A distância entre o ponto 1 e 3 é: ", d3)
fimalgoritmo