#include <stdio.h>

int main(){
  // 
  int idade = 20;
  float pi = 3.1415;

  // Sem perda de informação
  float idade_real = (float) idade; //idade ficaram como 20.0 

  // Com perda de informação
  int pi_real = (int)pi;

  printf("Sem perda: %.2f\n", idade_real);
  printf("Com perda: %d\n", pi_real);

  return 0;
}