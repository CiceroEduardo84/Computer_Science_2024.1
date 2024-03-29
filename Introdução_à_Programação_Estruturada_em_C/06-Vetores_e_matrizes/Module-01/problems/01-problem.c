#include <stdio.h>

int main()
{
  // Faça um programa que leia 100 números inteiros e mostre-os na ordem inversa em que foram lidos. Em relação à estrutura de dados, o vetor vai armazenar 100 números inteiros.
  int vet[8], count;

  for (count = 0; count < 8; count++)
  {
    scanf("%d", &vet[count]);
  }
  
  for (count = 7; count >= 0; count--)
  {
    printf("%d", vet[count]);
  }

  return 0;
}