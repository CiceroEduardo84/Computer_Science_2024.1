#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, i;

  printf("Digite um numero:");
  scanf("%d", &num);

  for (i = 1; i <= 20; i++){
    printf("\n Numero = %d", num);
  }
  
  return 0;
}