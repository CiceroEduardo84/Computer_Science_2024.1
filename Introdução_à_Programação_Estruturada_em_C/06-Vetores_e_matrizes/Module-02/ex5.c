#include <stdio.h>

int main()
{
  // O trecho de código exibe no dispositivo de saída as 3 notas dos 100 alunos da turma
  // Linguagem C
  for (linha = 0; linha < 3; linha++)
  {
    printf("%d \n dados da linha= ", linha);
    
    for (coluna = 0; coluna < 100; coluna++)
    {
      printf("%d", mat[linha][coluna]);
    }
  }
}