#include <stdio.h>
#include <stdlib.h>

int main(){
  float salario, maior, soma, media;
  maior = 0;

  for (int i = 1; i <= 10; i++){
    printf("Digite o salario do funcionario %d: ", i);
    scanf("%f", &salario);
    if (salario > maior){
      maior = salario;
    }
    soma += salario;
  }

  media = soma / 10;
  printf("Maior salario: %.2f\n", maior);
  printf("Media salarial: %.2f\n", media);
  return 0;
}