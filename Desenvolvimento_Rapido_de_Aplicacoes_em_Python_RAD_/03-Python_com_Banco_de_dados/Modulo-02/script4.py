import os
import sqlite3 as conector

try:
    # Diretorio atual
    directory = os.path.dirname(os.path.abspath(__file__))
    path = os.path.join(directory, "meu_banco.db")

    # Abertura de conexão e aquisição de cursor
    conexao = conector.connect(path)
    cursor = conexao.cursor()

    # Execução de um comando: SELECT... CREATE ...
    comando = '''CREATE TABLE Pessoa (
                    cpf INTEGER NOT NULL,
                    nome TEXT NOT NULL,
                    nascimento DATE NOT NULL,
                    oculos BOOLEAN NOT NULL,
                    PRIMARY KEY (cpf)
                    );'''

    cursor.execute(comando)

    # Efetivação do comando
    conexao.commit()

except conector.DatabaseError as err:
    print("Erro de banco de dados", err)

finally:
    # Fechamento das conexões
    if conexao:
        cursor.close()
        conexao.close()