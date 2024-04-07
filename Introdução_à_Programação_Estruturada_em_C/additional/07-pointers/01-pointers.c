#include <stdio.h>   // Biblioteca padrão de entrada/saída
#include <stdlib.h>  // Biblioteca padrão de funções de alocação de memória

int main()
{
  int myAge;             
  int *ptr = &myAge;     // Declaração de um ponteiro 'ptr' que aponta para 'myAge'
  // int *ptr = malloc(sizeof(int)); // Aloca memória para a variável de ponteiro

  if (ptr == NULL)       // Verifica se a alocação de memória falhou
  {
    printf("Falha na alocação de memória\n");  // Imprime mensagem de erro
    return 1; // Retorna código de erro
  }
 
  // Imprime o valor de 'myAge', o endereço de 'myAge' e o valor armazenado em 'ptr'
  printf("%d\n", myAge);  // Imprime o valor de 'myAge'
  printf("%p\n", &myAge); // Imprime o endereço de 'myAge'
  printf("%p\n", ptr);     // Imprime o valor armazenado em 'ptr'

  // Lê um novo valor para 'ptr', substituindo o valor original de 'ptr'
  scanf("%p", &ptr); // Passa o endereço da variável de ponteiro

  printf("%d\n", myAge);
  printf("%p\n", &myAge);
  printf("%p\n", ptr);

  // free(ptr); // Libera a memória alocada (comentado para não usar alocação dinâmica)
  
  return 0;  // Retorna 0 para indicar sucesso
}
