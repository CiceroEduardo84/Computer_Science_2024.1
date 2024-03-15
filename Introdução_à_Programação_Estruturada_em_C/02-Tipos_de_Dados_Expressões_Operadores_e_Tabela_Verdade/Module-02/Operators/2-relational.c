#include <stdio.h>

int main(){
  // <, >, =<, >=, ==, !=
  const float num = 1.2;
  const float num2 = 3.4;

  printf("Menor: %d\n", num < num2);
  printf("Maior:%d\n", num > num2);
  printf("Menor ou Igual:%d\n", num <= num2);
  printf("Maior ou Igual:%d\n", num >= num2);
  printf("Igual:%d\n", num == num2);
  printf("Diferente:%d\n", num != num2);

  return 0;
}