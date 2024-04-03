#include <stdio.h>

int main()
{
  // Faça um algoritmo, no emulador a seguir, que leia dados inteiros e armazene-os em uma matriz 3x4. Em seguida, mostre a quantidade de números pares e ímpares armazenados na matriz.
  const int collum = 3;
  const int line = 3;
  int mat[line][collum], lin, col, impar = 0, par = 0;

  // {
  //   {0,0,0},
  //   {0,0,0},
  //   {0,0,0},
  // }
  printf("\nDigite valor para os elementos da matriz\n\n");
  for (col = 0; col < collum; col++)
  {
    for (lin = 0; lin < line; lin++)
    {
      printf("Elemento[%d][%d] = ", col, lin);
      scanf("%d", &mat[lin][col]);
    }
  }

  printf("\n\n********* Saida de Dados ********* \n\n");
  for (lin = 0; lin < line; lin++)
  {
    for (col = 0; col < collum; col++)
    {
      if (mat[lin][col] % 2 == 0)
      {
        par++;
      }
      else
      {
        impar++;
      }
    }
  }

  printf("Impares: %d\n", impar);
  printf("Pares: %d\n", par);
  return 0;
}