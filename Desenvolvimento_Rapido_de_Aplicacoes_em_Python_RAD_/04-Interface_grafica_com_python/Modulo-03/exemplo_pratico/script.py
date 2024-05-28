import psycopg2

conn = psycopg2.connect(database="postgres", user="postgres", password="Eduardo", host="127.0.0.1", port="5432")
print("Conexão como o Banco de dados aberta!")

cur = conn.cursor()
cur.execute('''CREATE TABLE Agenda(ID INT PRIMARY KEY NOT NULL, Nome TEXT NOT NULL, Telefone CHAR(12));''')
print("Tabela criada com sucesso!")
conn.commit()

cur.execute("""INSERT INTO public."AGENDA" ("id", "nome", "telefone") VALUES (1, 'Pessoa', '02199999999');""")
conn.commit()
print("Tabela criada com sucesso!")

cur.execute("""SELECT * FROM public."AGENDA" WHERE "id"=1;""")
registro=cur.fetchone()
print(registro)
conn.commit()
print("Seleção realizada com sucesso!")

cur.execute("""UPDATE public."AGENDA" SET "telefone" = '02188888888' WHERE "id"=1;""")
conn.commit()
print("Registro atualizado com sucesso!")

cur.execute("""DELETE FROM public."AGENDA" WHERE "id"=1;""")
conn.commit()
print("Exclusão realizada com sucesso!")

conn.close()