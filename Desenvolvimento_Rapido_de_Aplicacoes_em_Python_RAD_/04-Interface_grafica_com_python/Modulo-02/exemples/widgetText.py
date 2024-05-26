import tkinter as tk

janela = tk.Tk()
T = tk.Text(janela, height=2, width=30)
T.pack()
T.insert(tk.END, "Esté é um texto\ncom duas linhas")
tk.mainloop()