clima = input("Insira as condições climáticas atuais (Seco, Molhado, Chuva): ")

if clima.lower() == "seco":
    recomendacao = "Pneus Slick"
elif clima.lower() == "molhado":
    recomendacao = "Pneus Intermediário"
elif clima.lower() == "chuva":
    recomendacao = "Pneus Chuva"
else:
    recomendacao = "Condição climática inválida. Por favor, insira 'Seco', 'Molhado' ou 'Chuva'."

print("Recomendação de pneus:", recomendacao)
