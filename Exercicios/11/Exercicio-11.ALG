Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/02/2019
Var
// Seção de Declarações das variáveis 
anterior, atual, proximo, termo, i: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("**** Série de Fetuccine *****")
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
   
   escreval("A série de Fetuccine para os termos digitados é: ")
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