import os

try:
  os.mkdir("meu_diretorio")
  print("Diretorio criado!")

except PermissionError as erro:
  print("Sem permissão para criar diretorio!")
  print("Descrição", erro)

except FileExistsError as erro:
  print("Diretorio já existe!")
  print("Descrição", erro)

print("Término do programa")