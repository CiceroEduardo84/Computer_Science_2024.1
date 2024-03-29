#include <stdio.h>

int main()
{
  // Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Na sequência, leia uma lista de 10 números inteiros e verifique se cada um deles está contido em alguma posição do vetor. Em caso positivo, mostre a posição do vetor em que ele se encontra.
  const int tamVetOne = 10, tamVetTwo = 10;
  int vetOne[tamVetOne], numero, i, achou, posvet;

  printf("Digite %d numeros:\n", tamVetOne);
  for (i = 0; i < tamVetOne; i++)
  {
    scanf("%d", &vetOne[i]);
  }

  printf("Digite %d numeros a serem procurados:\n", tamVetTwo);
  for (i = 0; i < tamVetTwo; i++)
  {
    scanf("%d", &numero);

    posvet = 0;
    achou = 0;
    while (posvet < tamVetTwo && achou == 0)
    {
      if (numero == vetOne[posvet])
      {
        achou = 1;
      }
      else
      {
        posvet++;
      }
    }

    if (achou == 1)
    {
      printf("Encontrado na posição: %d\n", posvet);
    }
    else
    {
      printf("Não ncontrado na posição: %d\n", posvet);
    }
  }

  return 0;
}