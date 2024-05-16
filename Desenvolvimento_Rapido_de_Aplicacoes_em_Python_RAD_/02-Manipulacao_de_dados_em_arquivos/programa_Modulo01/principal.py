import xlrd
from modelos import Variavel

def extrair_variaveis(dicionario):
    planilha = xlrd.open_workbook(dicionario)
    primeira_aba = planilha.sheet_by_index(0)
    # print("Nome:", primeira_aba.name)
    # print("Num linhas:", primeira_aba.nrows)
    # print("Num colunas:", primeira_aba.ncols)
    
    variaveis = []
    nova_variavel = None
    for idx, linha in enumerate(primeira_aba.get_rows()):
        # print(linha)
        primeira_celula = linha[0]  # Atributos da celula: ctype e value
        if primeira_celula.ctype == 2:  # number
            # Nova variavel
            if nova_variavel:
                # Guarda a ultima variavel criada
                variaveis.append(nova_variavel)
            # Variaveis do construtor
            posicao_inicial = linha[0].value
            tamanho = linha[1].value
            codigo = linha[2].value
            descricao = linha[4].value
            nova_variavel = Variavel(posicao_inicial, tamanho, codigo, descricao)
            # Variaveis da primeira categoria
            # alterado
            # categoria_tipo = linha[5].value
            # categoria_descricao_tipo = linha[6].value
            categoria_tipo = int(linha[5].value) if linha[5].ctype == 2 else linha[5].value
            categoria_descricao_tipo = int(linha[6].value) if linha[6].ctype == 2 else linha[6].value
            nova_variavel.add_categoria({'categoria_tipo': categoria_tipo, 'categoria_descricao_tipo': categoria_descricao_tipo})
        else:
            if nova_variavel:
                # Variaveis das demais categorias
                # alterado
                # categoria_tipo = linha[5].value
                # categoria_descricao_tipo = linha[6].value
                if primeira_celula.ctype == 0:
                    categoria_tipo = int(linha[5].value) if linha[5].ctype == 2 else linha[5].value
                    categoria_descricao_tipo = int(linha[6].value) if linha[6].ctype == 2 else linha[6].value
                    nova_variavel.add_categoria({'categoria_tipo': categoria_tipo, 'categoria_descricao_tipo': categoria_descricao_tipo})
        # limitação de colunas
        if idx > 50:
            break
    
    # print('Total de variaveis', len(variaveis))
    # for variavel in variaveis:
    #     print(variavel)
    #     for categ in variavel.categoria:
    #         print('\t', categ)
    return variaveis