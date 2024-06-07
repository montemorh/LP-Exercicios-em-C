pesos = []

for i in range(1, 6):
    peso = float(input(f"Informe o peso da pessoa {i}: "))
    pesos.append(peso)

mais_pesado = max(pesos)
mais_leve = min(pesos)

print(f"O peso mais pesado é: {mais_pesado} kg")
print(f"O peso mais leve é: {mais_leve} kg")