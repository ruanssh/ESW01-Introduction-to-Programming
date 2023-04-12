Algoritmo "Exercicio7"


Var

salarioBruto, prestacao: real


Inicio

  Escreva("Digite o valor do salário bruto: ")
  Leia(salarioBruto)

  Escreva("Digite o valor da prestação: ")
  Leia(prestacao)

  Se (prestacao <= salarioBruto * 0.3) Então
    Escreva("Empréstimo concedido.")
  Senão
    Escreva("Empréstimo não pode ser concedido.")
  FimSe

Fimalgoritmo