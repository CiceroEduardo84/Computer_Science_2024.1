#include <stdio.h>
#include <stdlib.h>

// Para otimização do código, recomenda-se separar a declaração e a definição da função.
// Freqüentemente, você verá programas C que possuem declaração de função acima main()e definição de função abaixo main(). Isso tornará o código mais organizado e mais fácil de ler:

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  printf("I just got executed!");
}

// Function declaration
//int myFunction(int, int); //-------

// The main method
// int main() {
  // int result = myFunction(5, 3); // call the function
  // printf("Result is = %d", result);
  // return 0;
// }

// Function definition
// int myFunction(int x, int y) {
//   return x + y;
// }