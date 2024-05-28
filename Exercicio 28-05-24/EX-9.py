print("\n\n")
print("=" * 30)
print("COD 1 - Alimento não-perecível")
print("=" * 30)
print("COD 2 , 3 ou 4 - Alimento perecível")
print("=" * 30)
print("COD 5 e 6 - Vestuário")
print("=" * 30)
print("COD 7 - Higiene Pessoal")
print("=" * 30)
print("\n\n")

codigo = int(input("Qual codigo do produto? \n\n"))

if (codigo == 1):
    print("\n\nAlimento não-perecível\n\n")
elif (codigo == 2) or (codigo == 3) or (codigo == 4):
    print("\n\nAlimento perecível\n\n")
elif (codigo == 5) or (codigo == 6):
    print("\n\nVestuário\n\n")
elif (codigo == 7):
    print("\n\nHigiene Pessoal\n\n")
elif (codigo >= 8) and (codigo <= 15):
    print("\n\nLimpeza e Utensílios domésticos\n\n")
else:
    print("\n\nCódigo Inválido\n\n")