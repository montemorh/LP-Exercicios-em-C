salario = float(input("Qual seu salario atual? \n\n"))

if (salario <= 3500):
    newSalario = (salario + (salario * 0.1))
    print("Salario Atual: ", salario, "\n Novo Salario: ", newSalario)
elif(salario > 3500):
    newSalario = (salario + (salario * 0.05))
    print("Salario Atual: ", salario, "\n Novo Salario: ", newSalario)
else:
    print("Salario Invalido")