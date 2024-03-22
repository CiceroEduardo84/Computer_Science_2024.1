#include <stdio.h>

int main()
{
  char opcao;

  printf("Entre com um numero inteiro:\n");
  scanf("%d", &opcao);

  // if (opcao > 0) {
  //   printf("Numero positivo!");

  // } else if (opcao == 0) {
  //   printf("Numero nulo!");

  // } else {
  //   printf("Numero negativo!");
  // }

// Aninhamento
  // if (opcao >= 0) {
  //   if (opcao == 0){
  //     printf("Numero nulo!\n");
  //   } else{
  //     printf("Numero positivo!\n");
  //   }

  // } else {
  //   printf("Numero negativo!\n");
  // }

  switch (opcao){
    case 1:
      printf("\nNumero 1\n");
      break;

    case 2:
      printf("\nNumero 2\n");
      break;

    case 3:
      printf("\nNumero 3\n");
      break;
    case 4:
      printf("\nNumero 4\n");
      break;

    default:
      printf("\n Opcao invalida!\n");
      break;
  }

  printf("Final do programa!");
}