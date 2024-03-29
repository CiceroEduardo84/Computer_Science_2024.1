#include <stdio.h>

int main()
{
  // Considere o seguinte problema em uma escola primária: em uma turma com 50 alunos, cada um faz 3 provas por semestre.

  // Além de armazenar as 3 provas dos 50 alunos, existe a necessidade de mostrar:

  // A média de cada prova;
  // A média de cada aluno;
  // A média da turma.
  const int tamVet = 50;
  float prova1[tamVet], prova2[tamVet], prova3[tamVet], mediaprova1, mediaprova2, mediaprova3, medialuno, somaturma, mediaturma;
  int soma1, soma2, soma3 = 0, pos;

  // Média de cada prova
  for (pos = 0; pos < (tamVet - 1); pos++)
  {
    soma1 += prova1[pos];
    soma2 += prova2[pos];
    soma3 += prova3[pos];
  }
  mediaprova1 = soma1 / tamVet;
  mediaprova2 = soma2 / tamVet;
  mediaprova3 = soma3 / tamVet;

  printf("A media da prova1 e: %f.02\n", mediaprova1);
  printf("A media da prova2 e: %f.02\n", mediaprova2);
  printf("A media da prova3 e: %f.02\n", mediaprova3);

  // Media do aluno e da turma
  somaturma = 0;
  for (pos = 0; pos < tamVet; pos++)
  {
    medialuno = (prova1[pos] + prova2[pos] + prova3[pos]) / 3;
    somaturma += medialuno;

    printf("a media do aluno e: %f.02\n", medialuno);
  }

  mediaturma = somaturma / tamVet;
  printf("a media da turma e: %f.02", mediaturma);
}