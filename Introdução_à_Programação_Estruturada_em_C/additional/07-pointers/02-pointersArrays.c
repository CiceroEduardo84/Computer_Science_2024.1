#include <stdio.h>  // Biblioteca padrão de entrada/saída
#include <stdlib.h> // Biblioteca padrão de funções de alocação de memória

int main()
{
  const int tam = 2;
  int myNumbers[tam], i;

  for (i = 0; i < tam; i++)
  {
    scanf("%d", &myNumbers[i]);
  }

  // imprimir o valor do vetor
  for (i = 0; i < tam; i++)
  {
    printf("%d", myNumbers[i]);
  }

  // imprimir o endereço de memoria de cada valor a partir do ponteiro
  for (i = 0; i < tam; i++)
  {
    printf("%d", &myNumbers[i]);
  }

  // Ok, então qual é a relação entre ponteiros e arrays? Bem, em C, o nome de um array é na verdade um ponteiro para o primeiro elemento do array.
  printf("%p\n", myNumbers);

  // Como myNumbers é um ponteiro para o primeiro elemento em myNumbers, você pode usar o *operador para acessá-lo:
  printf("%d", *myNumbers);

  // Para acessar o restante dos elementos em myNumbers, você pode incrementar o ponteiro/matriz (+1, +2, etc):
  printf("%d\n", *(myNumbers + 1));
  
  // Ou percorrelo:
  int *ptr = myNumbers;
  for (i = 0; i < 4; i++)
  {
    printf("%d\n", *(ptr + i));
  }

  return 0;
}
