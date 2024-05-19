import os

try:
  os.rmdir("meu_diretorio")
  print("Diretorio removido!")

except PermissionError as erro:
  print("Sem permissão para remover diretorio!")
  print("Descrição", erro)

except FileNotFoundError as erro:
  print("Diretorio inexistente!")
  print("Descrição", erro)

except OSError as erro:
  print("Outro erro.")
  print("O diretorio está vazio?")
  print("Descrição", erro)

print("Término do programa")