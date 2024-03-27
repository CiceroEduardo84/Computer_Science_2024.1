#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada aluno. Lembre-se de que apenas a média igual ou acima de 7 aprova o aluno.

  float nota1, nota2, nota3, media;
  int contaAlunos, totalAlunos;
  contaAlunos = 1;

  printf("Quantidade de alunos que deseja calcular a media:");
  scanf("%d", &totalAlunos);

  while (contaAlunos <= totalAlunos)
  {
    printf("Digite as 3 notas do aluno %d:\n", contaAlunos);
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if ((media <= 10) && (media >= 0))
    {
      if (media >= 7)
      {
        printf("---------------------------------------\n");
        printf("Aluno: %d\nSituacao: Aprovado\nMedia: %.2f\n", contaAlunos, media);
        printf("---------------------------------------\n");
      }
      else
      {
        printf("---------------------------------------\n");
        printf("Aluno: %d\nSituacao: Reprovado\nMedia: %.2f\n", contaAlunos, media);
        printf("---------------------------------------\n");
      }
    }
    else
    {
      printf("---------------------------------------\n");
      printf("Error: Media invalida, insira as notas corretamente.\n");
      printf("---------------------------------------\n");
    }

    contaAlunos++;
  }

  return 0;
}