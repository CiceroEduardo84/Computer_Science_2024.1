#include <stdio.h>
// video 1 do modulo 2

int main()
{
  // Faça, no emulador a seguir, um algoritmo que leia números inteiros e armazene-os na matriz 4x4. Porém, na diagonal principal, não armazene o número lido, e sim um 0 (zero).

  // Na diagonal principal, os elementos têm linha = colona: [0][0], [1][1], [2][2], [3][3].
  int mat[4][4], lin, col;

  printf("\nDigite valor para os elementos da matriz\n");

  for (lin = 0; lin < 4; lin++)

    for (col = 0; col < 4; col++)

      if (lin == col)
      {
        printf("Elemento[%d][%d] = 0 \n", lin, col);
        mat[lin][col] = 0;
      }
      else
      {
        printf("Elemento[%d][%d] = ", lin, col);
        scanf("%d", &mat[lin][col]);
      }

  printf("\nListagem dos elementos da matriz\n");

  for (lin = 0; lin < 4; lin++)
    for (col = 0; col < 4; col++)
      printf("\nElemento[%d][%d] = %d", lin, col, mat[lin][col]);
}