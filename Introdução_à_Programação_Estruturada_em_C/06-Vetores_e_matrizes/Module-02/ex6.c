#include <stdio.h>

int main()
{
  // O trecho de código calcula e mostra a média de cada turma (soma das notas dos alunos dividida por 100, que é a quantidade de alunos)

  soma = 0;
  for (linha = 0; linha < 3; linha++)
  {
    for (coluna = 0; coluna < 100; coluna++)
    {
      soma = soma + mat[linha][coluna];
    }
    printf("%f media da turma = ", soma / 100);
  }
}