#include <stdio.h>

int main()
{
  FILE *fptr;

  // Create a file("W")
  // O "w" ele substitui o conteudo já gravado
  // O "a" ele insere conteudo no final
  fptr = fopen("../filename.txt", "a");

  // Write some text to the file
  fprintf(fptr, "Hello Word!\n");

  // Close the file
  fclose(fptr);
  return 0;
}