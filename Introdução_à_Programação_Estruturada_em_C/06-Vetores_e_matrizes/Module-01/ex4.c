#include <stdio.h>

int main()
{
  // Se fossem 100 alunos em vez de 10, seria inviável inicializar o vetor com 100 zeros entre as chaves. Se fossem 500 alunos, mais inviável ainda.
  int vet[100];

  for (int posicao = 0; posicao < 100; posicao++)
  {
    vet[posicao] = 0;
  }

  return 0;
}