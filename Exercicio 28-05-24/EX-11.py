conta = float(input("Qual o valor da sua conta de energia em R$? \n\n"))
x = 0.72
qtdkw = (conta / x)



if (qtdkw <= 40):
    reajuste = (x + (x*0.1))
    newConta = (qtdkw * reajuste)
    print(f'Conta Base: R$ {conta:,.2f}, \n\nReajuste: R$  {reajuste:,.2f} \n\nConta Final: R$ {newConta:,.2f}\n\n ')
elif (qtdkw > 40):
    reajuste = (x + (x*0.3))
    newConta = (qtdkw * reajuste)
    print(f'Conta Base: R$ {conta:,.2f}, \n\nReajuste: R$  {reajuste:,.2f} \n\nConta Final: R$  {newConta:,.2f}\n\n')
else:
    print("ERRO!")
    
