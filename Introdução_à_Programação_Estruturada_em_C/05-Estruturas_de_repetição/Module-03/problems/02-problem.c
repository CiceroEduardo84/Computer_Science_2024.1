#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Desenvolva um programa que leia uma sequência de números, podendo terminar com o número 0 ou 9. Para cada número lido (diferente de 0 ou 9), mostre seu sucessor caso o número seja par, ou seu antecessor se o número for ímpar.
  int num;

  do
  {
    printf("Digite um numero:");
    scanf("%d", &num);

    if ((num != 0) && (num != 9))
    {
      if (num % 2 == 0)
      {
        printf("Numero par\nSucessor = %d\n\n", num + 1);
      }
      else
      {
        printf("Numero impar\nAntecessor = %d\n\n", num - 1);
      }
    }
  } while ((num != 0) && (num != 9));

  printf("Programa encerrado...");
  return 0;
}