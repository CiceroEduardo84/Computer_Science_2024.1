import tkinter as tk

def mostar_nome():
  print("Nome: %s\nSobrenome: %s" % (e1.get(), e2.get()))

janela = tk.Tk()
janela.title("aplicação GUI com widget entry")
tk.Label(janela, text="Nome").grid(row=0)
tk.Label(janela,text="Sobrenome").grid( row=0)
e1 = tk.Entry(janela)
e2 = tk.Entry(janela)
e1.grid(row=0, column=1)
e2.grid(row=1, column=1)
tk.Button(janela, text="sair", command=janela.quit).grid(row=3, column=0,sticky=tk.W, pady=4)
tk.Button(janela, text="Exibir dados", command=mostar_nome).grid(row=3, column=0,sticky=tk.W, pady=4)

janela.mainloop()