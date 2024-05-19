import os
import sqlite3 as conector

# Diretorio atual
directory = os.path.dirname(os.path.abspath(__file__))
path = os.path.join(directory, "meu_banco.db")

# Abertura de conexão e aquisição de cursor
conexao = conector.connect(path)
cursor = conexao.cursor()

# Execução de um comando: SELECT... CREATE ...
comando = '''CREATE TABLE Veiculo (
                placa CHARACTER(7) NOT NULL,
                ano INTEGER NOT NULL,
                cor TEXT NOT NULL,
                proprietario INTEGER NOT NULL,
                marca INTEGER NOT NULL,
                PRIMARY KEY (placa),
                FOREIGN KEY(proprietario) REFERENCES Pessoa(cpf),
                FOREIGN KEY(marca) REFERENCES Marca(id)
                );'''

cursor.execute(comando)

# Efetivação do comando
conexao.commit()

# Fechamento das conexões
cursor.close()
conexao.close()
