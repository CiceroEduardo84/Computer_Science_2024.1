#include <stdio.h>

int main()
{
  // Se fossem 3 notas de 100 alunos, em vez de 10, seria inviável inicializar a matriz com 3x100 zeros entre as chaves. Se fossem 500 alunos, mais inviável ainda.
  for (linha = 0; linha < 3; linha++)
  {
    for (coluna = 0; coluna < 100; coluna++)
    {
      mat[linha][coluna] = 0;
    }
  }
}