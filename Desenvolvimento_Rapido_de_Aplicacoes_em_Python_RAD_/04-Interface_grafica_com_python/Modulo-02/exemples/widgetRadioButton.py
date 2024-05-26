import tkinter as tk

janela = tk.Tk()
v = tk.IntVar()

tk.Label(janela, text="""Escola uma lingaugem de programção""", justify= tk.LEFT, padx= 20).pack()
tk.Radiobutton(janela, text="python", padx = 25,variable=v,value=1).pack(anchor=tk.W)
tk.Radiobutton(janela, text="C++", padx = 25,variable=h,value=2).pack(anchor=tk.W)
janela.mainloop()
