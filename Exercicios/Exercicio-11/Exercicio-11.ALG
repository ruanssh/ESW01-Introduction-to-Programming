Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/02/2019
Var
// Se��o de Declara��es das vari�veis 
anterior, atual, proximo, termo, i: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreval("**** S�rie de Fetuccine *****")
   escreval()

   repita
         escreva("Digite o primeiro termo: ")
         leia(anterior)
         escreval()
   ate anterior > 0
   
   repita
         escreva("Digite o segundo termo: ")
         leia(atual)
         escreval()
   ate atual > 0
   
   escreval("A s�rie de Fetuccine para os termos digitados �: ")
   escreva(anterior, " ")
   
   para i de 1 ate 9 passo 1 faca
        escreva(atual, " ")
        
        se i % 2 = 0 entao
           proximo <- atual - anterior
        senao
           proximo <- atual + anterior
        fimse
        anterior <- atual
        atual <- proximo
   fimpara
Fimalgoritmo