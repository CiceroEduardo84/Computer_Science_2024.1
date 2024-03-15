#include <stdio.h>

 int main(){
  // !, &&, ||
  int a = 0;
  int b = 1;
  //Unary
  printf("Negacao: %d\n", !a);

  //Binary
  printf("E: %d\n", a && b);
  printf("OU: %d\n", a || b);

  // false- 0, null(variável, que armazene algum endereço de memoria), null(string ou cadeia de caracteres)

  return 0;
 }