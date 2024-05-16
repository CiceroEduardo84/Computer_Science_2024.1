class Variavel:

    def __init__(self, posicao_inicial, tamanho, codigo, descricao):
        # Modificado
        # self.posicao_inicial = posicao_inicial
        # self.tamanho = tamanho
        self.posicao_inicial = int(posicao_inicial) - 1
        self.tamanho = int(tamanho)
        self.codigo = codigo
        self.descricao = descricao
        # self.categoria = []
        self.categoria = {}

    def add_categoria(self, categoria):
        # categoria = dict {'categoria_tipo': tipo, 'categoria_descricao_tipo': descricao}
        # alteracao
        # self.categoria.append(categoria)
        self.categoria[categoria.get('categoria_tipo')] = categoria.get('categoria_descricao_tipo')

    def __str__(self):
        # return self.codigo + " - " + self.descricao
        # Alterado
        return f'{self.codigo} - {self.descricao}'
