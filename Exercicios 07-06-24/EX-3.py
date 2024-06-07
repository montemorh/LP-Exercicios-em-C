numero = int(input("Informe um número para ver a tabuada: "))

# Exibe a tabuada do número informado
print(f"Tabuada do {numero}:")
for i in range(1, 11):
    resultado = numero * i
    print(f"{numero} x {i} = {resultado}")