#include <stdio.h>

int main()
{
  // O trecho de código lê uma cadeia de 8 caracteres e mostra o texto invertido. Por exemplo, ao ler “programa”, o algoritmo deve mostrar “amargorp”:

  char nome[8];
  int ind;

  scanf("%s", nome);
  
  for (ind = 8; ind >= 0; ind--)
  {
    printf("%c", nome[ind]);
  }

  return 0;
}