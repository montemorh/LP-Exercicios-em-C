#5) Elabore um programa que leia a
# *velocidade de um carro* e a *velocidade
#permitida* pelo radar. Caso a leitura do
#carro ser maior que 10% da permitida,
#informar uma mensagem

velocidade = int(input("Qual a velocidade aferida?"))
velocidadeOK = int(input("Qual a velocidade permitida da via?"))


multa = (velocidadeOK + (velocidadeOK * 0.1))

if (velocidade > multa ):
    print("Multado, Velocidade Permitida ", velocidadeOK, "Velocidade Aferida: ", velocidade)
else:
    print("Veiculo nao multado")


