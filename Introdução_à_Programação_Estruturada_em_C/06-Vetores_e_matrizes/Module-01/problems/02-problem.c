#include <stdio.h>

int main()
{
  // Faça um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou superiores à média da turma, no emulador a seguir.

  float vet[20], soma = 0, media;
  int i;

  for (i = 0; i < 20; i++)
  {
    scanf("%f", &vet[i]);

    soma += vet[i];
  }

  media = soma / 20;

  for (i = 0; i < 20; i++)
  {
    if (vet[i] >= media)
    {
      printf("%0.1f", vet[i]);
    }
  }

  return 0;
}