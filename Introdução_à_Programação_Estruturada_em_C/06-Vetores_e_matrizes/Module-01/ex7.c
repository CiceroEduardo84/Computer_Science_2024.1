#include <stdio.h>

int main()
{
  // O trecho de código exibe no dispositivo de saída as notas dos 80 alunos da turma:
  int vet[80], posicao;
  
  for (posicao = 0; posicao < 80; posicao++)
  {
    printf("%d", &vet[posicao]);
  }

  return 0;
}