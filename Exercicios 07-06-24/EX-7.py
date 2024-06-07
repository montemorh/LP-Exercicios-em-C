import random

numero_secreto = random.randint(0, 10)
tentativas = 0
palpite = -1

print("Tente adivinhar o número entre 0 e 10 que estou pensando!")

while palpite != numero_secreto:
    palpite = int(input("Qual é o seu palpite? "))
    tentativas += 1
    if palpite < numero_secreto:
        print("Mais... Tente um número maior.")
    elif palpite > numero_secreto:
        print("Menos... Tente um número menor.")

print(f"Parabéns! Você acertou o número {numero_secreto} em {tentativas} tentativas.")
