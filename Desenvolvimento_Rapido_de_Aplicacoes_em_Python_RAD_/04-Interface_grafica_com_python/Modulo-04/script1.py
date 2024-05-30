import psycopg2

conn = psycopg2.connect(database="Cad_Product", user="postgres", password="Eduardo", host="127.0.0.1", port="5432")

print("Conexão com o BDD realizada com sucesso!")
cur=conn.cursor()
cur.execute('''CREATE TABLE PRODUTO(CODIGO INT PRIMARY KEY NOT NULL, NOME TEXT NOT NULL, PRECO REAL NOT NULL);''')
print("Tabela criada com sucesso!")

conn.commit()
conn.close()