#include <stdio.h>

 int main(){
  // +, -, *, /, %
  const int pessoas = 20;
  const float peso = 70.8;
  int quantidade = 2;

  // Unary
  quantidade--;
  quantidade++;

  // Binary
  printf("Soma: %d\n", pessoas + quantidade);
  printf("Subtracao: %d\n", pessoas - quantidade);
  printf("Multiplicacao: %.2f\n", pessoas * peso);
  printf("Divisao: %d\n", pessoas / quantidade);
  printf("Resto da divisao: %d\n", pessoas % quantidade);

  // Ternary
  int num = pessoas >= 20 ? quantidade : quantidade - 1;
  printf("Ternary result: %d\n", num);

  return 0;
 }