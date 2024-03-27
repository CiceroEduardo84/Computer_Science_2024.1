#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.
  int cont, maior, num;
  maior = 0;
  cont = 1;

  while (cont <= 4)
  {
    printf("Digite um numero:\n");
    scanf("%d", &num);

    if (num > maior)
    {
      maior = num;
    }
    cont++;
  }

  printf("Numero maior: %d\n", maior);
  printf("Programa encerrado!");
  return 0;
}