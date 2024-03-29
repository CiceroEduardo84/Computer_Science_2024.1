#include <stdio.h>

int main()
{
  // O trecho de código calcula e mostra a média da turma (soma das notas dos alunos dividida por 80, que é a quantidade de alunos):
  int vet[80], posicao, soma;
  soma = 0;

  for (posicao = 0; posicao < 80; posicao++)
  {
    soma = soma + vet[posicao];
  }
  printf("media = % .2f", (soma / 80));

  return 0;
}