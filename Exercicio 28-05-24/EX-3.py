n1 = float(input("Qual a sua nota n1? \n\n"))
n2 = float(input("Qual a sua nota n2? \n\n"))

media = (n1+n2) / 2

if (media >= 5) and (media <= 10):
    print("Aprovado")
elif(media <= 5) and (media >= 0):
    print("Reprovado")
else:
    print("Nota invalida")