Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/04/2023
Var
sexo, cor_olho, cor_cabelo : caracter
idade, maior_idade, sexoF, caracteristica : inteiro
resultado_caracter : real

Inicio
   maior_idade <- 0
   repita
      escreva("Digite a idade do habitante:(-1 Para sair)")
      leia(idade)
      
      se(idade = -1) entao
         interrompa
      fimse
      
      escreva("Digite o sexo do habitante [M/F]:")
      leia(sexo)
      
      escreva("Digite cor dos olhos (AZUL/VERDE/CASTANHO):")
      leia(cor_olho)
      
      escreva("Digite cor dos cabelos (LOURO/CASTANHO/PRETO):")
      leia(cor_cabelo)
      
      se (idade > maior_idade)entao
         maior_idade <- idade
      fimse
      
      se(sexo = "F")entao
         sexoF <- sexoF + 1
      fimse
      
      se ( (sexo = "F") e (idade >= 18) e (idade <= 35) e (cor_olho = "VERDE") e (cor_cabelo = "LOURO") )entao
         caracteristica <- caracteristica + 1
      fimse
      
   ate(idade = -1)
   
      escreval("Maior Idade:", maior_idade)
      se(sexoF >= 1)entao
        escreval("Percentual de indivIduos do sexo feminino com olhos verdes e cabelos louros: ", caracteristica/sexoF * 100, "%")
      senao
        escreval("Nao tem indiduos do sexo femenino com olhos verdes e cabelos louros")
      fimse
Fimalgoritmo