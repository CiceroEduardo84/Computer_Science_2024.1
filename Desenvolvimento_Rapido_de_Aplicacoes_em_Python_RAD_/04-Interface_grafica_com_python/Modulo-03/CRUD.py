import psycopg2

class AppBd:
  def __init__(self):
    print('Metodo construtor')

  def abrirConexao(self):
    try:
      self.connection = psycopg2.connect(user="postgres", password="XXXX", host="127.0.0.1", port="5432", databas="postgres")
    
    except(Exception, psycopg2.Error) as error:
      if(self.connections):
        print("Falha ao se connectar ao Banco de Dados!", error)

  def selecionarDados(self):
    try:
      self.abrirConexao()
      cursor = self.connection.cursor()

      print("Selecionando todos os produtos")
      sql_select_query = """SELECT * FROM public."PRODUTO";"""
      cursor.execute(sql_select_query)
      registros = cursor.fetchall()
      print(registros)

    except(Exception, psycopg2.Error) as error:
      print("Error in select operation!", error)
    finally:
      if(self.connection):
        cursor.close()
        self.connection.close()
        print("A conexãp com o PostgreSQL foi fechada!")
    return registros

  def inserirDados(self, codigo, nome, preco):
    try:
      self.abrirConexao()
      cursor = self.connection.cursor()

      postgres_insert_query = """INSERT INTO public."PRODUTO" ("CODIGO", "NOME", "PRECO") VALUES(%S, %S, %S);"""
      record_to_insert = (codigo, nome, preco)
      cursor.execute(postgres_insert_query, record_to_insert)
      self.connection.commit()
      count = cursor.rowcount
      print(count,"registo inserido com sucesso!")

    except(Exception, psycopg2.Error) as error:
      if(self.connection):    
        print("Error in select operation!", error)
        
    finally:
      if(self.connection):
        cursor.close()
        self.connection.close()
        print("A conexãp com o PostgreSQL foi fechada!")

def atualizarDados(self, codigo, nome, preco):
  try:
    self.abrirConexao()
    cursor = self.connection.cursor()

    print("Registro antes da atualização")
    sql_select_query = """SELECT * FROM public."PRODUTO" WHERE "CODIGO" = %s"""
    cursor.execute(sql_select_query, (codigo))
    record = cursor.fetchone()
    print(record)

    sql_select_query = """UPDATE public."PRODUTO" set "NONE" = %s, "PRECO" = %s WHERE "CODIGO"
 = %s"""
    cursor.execute(sql_select_query, (nome, preco, codigo))
    self.connection.commit()
    count = cursor.rowcount
    print(count, "Registro atualizado com sucesso!")
    print("Registro depois da atualização")
    sql_select_query = """SELECT * FROM public."PRODUTO" WHERE "CODIGO" = %s"""
    cursor.execute(sql_select_query, (codigo))
    record = cursor.fetchone()
    print(record)
  except (Exception, psycopg2.Error) as error:
    print("Erro na atualização", error)
  finally:
    if (self.connection):
      cursor.close()
      self.connection.close()
      print("A conexão com o PostgreSQL foi interrompida!")
def excluirDAdos(self, codigo):
  try:
    self.abrirConexao()
    cursor = self.connection.cursor()

    sql_delete_query = """DELETE FROM public."PRODUTO" WHERE "CODIGO" = %s"""
    cursor.execute(sql_delete_query, (codigo))
    self.connection.commit()
    count = cursor.rowcount
    print(count, "Registro excluido com sucesso!")
  except (Exception, psycopg2.Error) as error:
    print(count, "Registro excluido com sucesso!")
  finally:
    if (self.connection):
      cursor.close()
      self.connection.close()
      print("A conexao com o PostgreSQL doi fechada")
