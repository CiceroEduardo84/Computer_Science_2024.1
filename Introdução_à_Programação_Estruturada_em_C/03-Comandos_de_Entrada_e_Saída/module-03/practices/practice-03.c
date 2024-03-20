#include <stdio.h>

int main(){
  char inicial;
  int idade;

  printf("Entre com a sua idade e a sua inicial:\n");
  scanf("%d", &idade);
  scanf("%c", &inicial);
  printf("Voce tem %d anos e seu nome comeca com %c\n", idade, inicial);

  return 0;
}

// result: Voce tem xidade anos e seu nome começa com   .
// isso ocorre pq ao apertar o valor da idade e enter, a variável idade
// armazenará o valor da idade e a variável inicial, o enter.