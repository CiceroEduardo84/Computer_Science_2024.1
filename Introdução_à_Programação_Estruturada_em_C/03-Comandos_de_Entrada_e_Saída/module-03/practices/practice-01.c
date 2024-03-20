#include <stdio.h>

int main(){
  char initial;
  int idade;

  printf("Entre com a sua idade e a sua inicial:\n");
  scanf("%d %c", &idade, &initial);

  printf("Voce tem %d e sua inicial e %c", idade, initial);

  return 0;
}

// result: Voce tem xidade e sua inicial e yinicial;