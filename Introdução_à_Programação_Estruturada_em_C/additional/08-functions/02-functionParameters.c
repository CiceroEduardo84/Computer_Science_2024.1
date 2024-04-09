#include <stdio.h>
#include <stdlib.h>

void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

// Hello Liam. You are 3 years old.
// Hello Jenny. You are 14 years old.
// Hello Anja. You are 30 years old.

// Passar matrizes como parâmetros de função
// void myFunction(int myNumbers[5]) {
//   for (int i = 0; i < 5; i++) {
//     printf("%d\n", myNumbers[i]);
//   }
// }

// int main() {
//   int myNumbers[5] = {10, 20, 30, 40, 50};
//   myFunction(myNumbers);
//   return 0;
// }