#include <stdio.h>

int main()
{
  FILE *fptr;

  // Create a file("W")
  fptr = fopen("../filename.txt", "w");

  // Close the file
  fclose(fptr);
  return 0;
}