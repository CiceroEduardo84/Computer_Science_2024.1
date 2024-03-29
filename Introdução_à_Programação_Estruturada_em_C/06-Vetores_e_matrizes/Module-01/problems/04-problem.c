#include <stdio.h>

int main()
{
  // Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, observando as seguintes regras:

  // Se o número for par, preencha a mesma posição do segundo vetor com o número sucessor do contido na mesma posição do primeiro vetor;
  // Se o número for ímpar, preencha a mesma posição do segundo vetor com o número antecessor do contido na mesma posição do primeiro vetor.
  const int tamVet = 4;
  int vetOne[tamVet], vetTwo[tamVet], i;

  for (i = 0; i < tamVet; i++)
  {
    scanf("%d", &vetOne[i]);

    if (vetOne[i] % 2 == 0)
    {
      vetTwo[i] = vetOne[i] + 1;
    }
    else
    {
      vetTwo[i] = vetOne[i] - 1;
    }
  }

  printf("Elementos do Vetor1 e Vetor2:\n");
  for ( i = 0; i < tamVet; i++)
  {
    printf("%d ", vetOne[i]);
    printf("%d\n", vetTwo[i]);
  }
  
  return 0;
}