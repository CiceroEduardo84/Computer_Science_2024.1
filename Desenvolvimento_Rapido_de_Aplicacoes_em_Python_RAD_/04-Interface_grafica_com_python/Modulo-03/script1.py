import psycopg2

carros = (
(1, 'Celta', 35000),
(2, 'Fusca', 30000),
(3, 'Fiat Uno', 32000)
)

con = psycopg2.connect(database='BancoExemplo', user='postgres',
       password='postgres')

cursor = con.cursor()

query = "INSERT INTO cars (id, nome, preco) VALUES (%s, %s, %s)"
cursor.executemany(query, carros)