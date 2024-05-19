import os
import sqlite3 as conector

# Diretorio atual
directory = os.path.dirname(os.path.abspath(__file__))
path = os.path.join(directory, "meu_banco.db")

# Abertura de conexão e aquisição de cursor
conexao = conector.connect(path)
cursor = conexao.cursor()

# Execução de um comando: SELECT... CREATE ...
comando = '''CREATE TABLE Marca (
                id INTEGER NOT NULL,
                nome TEXT NOT NULL,
                sigla CHARACTER(2) NOT NULL,
                PRIMARY KEY (id)
                );'''

cursor.execute(comando)

# Efetivação do comando
conexao.commit()

# Fechamento das conexões
cursor.close()
conexao.close()
