print("Abrindo um arquivo")

try:
  open("test.txt", "r")
  print("Arquivo aberto")
except FileNotFoundError as erro:
  print("Arquivo inexistente!")
  print("Descrição", erro)

print("Término do programa")