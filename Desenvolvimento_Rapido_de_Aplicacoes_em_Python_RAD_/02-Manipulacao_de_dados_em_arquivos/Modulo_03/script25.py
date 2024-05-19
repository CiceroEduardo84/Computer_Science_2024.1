import os

try:
  os.remove("test.txt", "r")
  print("Arquivo removido!")

except FileNotFoundError as erro:
  print("Arquivo inexistente!")
  print("Descrição", erro)

except PermissionError as erro:
  print("Arquivo Sem permissão para acessar o arquivo!")
  print("Descrição", erro)

except IsADirectoryError as erro:
  print("Remove serve apenas para arquivos!")
  print("Descrição", erro)

print("Término do programa")