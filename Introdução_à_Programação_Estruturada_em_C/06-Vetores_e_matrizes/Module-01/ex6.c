#include <stdio.h>

int main()
{
  // O trecho de código declara e lê as notas de 80 alunos de uma turma:
   int vet[80], posicao;

  for (posicao = 0; posicao < 80; posicao++)
  {
    scanf("%d", &vet[posicao]);
  }

  return 0;
}