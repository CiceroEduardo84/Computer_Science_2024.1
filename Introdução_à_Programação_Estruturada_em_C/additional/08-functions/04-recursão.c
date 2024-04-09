#include <stdio.h>
#include <stdlib.h>

int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

// O desenvolvedor deve ter muito cuidado com a recursão, pois pode ser muito fácil escrever uma função que nunca termina ou que usa quantidades excessivas de memória ou potência do processador. No entanto, quando escrita corretamente, a recursão pode ser uma abordagem de programação muito eficiente e matematicamente elegante.