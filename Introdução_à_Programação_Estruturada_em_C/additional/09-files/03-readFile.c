#include <stdio.h>

int main()
{
  FILE *fptr;

  // Create a file("W")
  // O "w" ele substitui o conteudo já gravado
  // O "a" ele insere conteudo no final
  // O "r" ele lê o arquivo
  fptr = fopen("../filename.txt", "r");

  // Store the content of the file
  char myString[100];

  // Read the content and store it inside myString
  fgets(myString, 100, fptr);

  // Print some text if the file does not exist
  if (fptr != NULL)
  {
    // Read the content and print it
    while (fgets(myString, 100, fptr))
    {
      // Print the file content 1° row
      printf("%s", myString);
    }
  }
  else
  {
    printf("Not able to open the file.");
  }

  // Close the file
  fclose(fptr);

  return 0;
}